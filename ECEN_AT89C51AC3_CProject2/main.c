/*
	main.c
	
	Created	: 8/23/2019 1:05:56 PM
	Author	: janeceli 
*/
#include "AT89C51AC3.h"
#include "ECEN301LibSDCC.h"
#include <stdio.h>

volatile int prev_time = 0;
volatile int current_time = 0;
volatile int time_diff = 0;
volatile int RPM_motor = 0; 
volatile int RPM_calc = 0; 
volatile int prev_value[5] = {0,0,0,0,0};
int prev_error = 0;
volatile float average = 0.0;


 void my_isr_handler(void) __interrupt(6) //goes here every rotation, timer CL and CH are loaded into CCAPnL and CCAPnH
{
	CCF1 = 0;
		
	prev_time = current_time;		
	current_time = (CCAP1H << 8) | (CCAP1L & 0xFF);
	
	time_diff = current_time - prev_time;
	
} 

int get_average(int motor){
	for(int i = 0; i < 4; i++) {
		prev_value[i] = prev_value[i+1]	;
	}
	prev_value[4] = motor;

	for (int n = 0; n < 5; n++)
	{
		average = average + prev_value[n];
	}
	
return (int)(average/5);
}


void main(void)
{
	 // data lines port 0, control port 4
	initLCD();
	
	/* set up PWM */

	CCAPM0 |= 0x42; //0100 (enable PWM) 0010 (enable CCON register to generate interupt request
	
	/* set up capture mode for motor rotation*/ 
	CH = 0x00;
	CL = 0x00;
	IEN0 |= 0xC0; //enable PCA interrupt
	CCAPM1 |= 0x31; // 0010 (enable capture function triggered by +/ve edge) 0001 (enable CCF bit to enable interupt request in CCF1)
	
	CCON |= 0x40; //turn counter on 
	while (1) 
	{	
		
		clearLCD();
				
		float Kp = 0.3;
		float Ki = 0.2;
		float Kd = 0.1;
		
		int avg = get_average(RPM_motor);
		
		RPM_calc = (int)P2;//((256.0-(float)P2)/256.0)*5.0*2.4*10;
		int error =  (int)RPM_calc - (int)RPM_motor;
		
		CCAP0H = (CCAP0H)+(int)(256-((256*((Kp*error)+(Kd*(error-prev_error))))/(5*2.4*23.33)));
		
		if(time_diff != 0){RPM_motor = (int)60.0/(((float)time_diff)*1E-6*960);}
			
		prev_error = error;
					
				
		char out[16];
		sprintf(out, "%d", (int)RPM_motor);
		
		setLCDPos(0);
		writeLineLCD("RPM:");
		setLCDPos(4);
		writeLineLCD(out);
		
		sprintf(out, "%d", (int)RPM_calc);
		setLCDPos(8);
		writeLineLCD("EXP:");
		setLCDPos(12);
		writeLineLCD(out);
		
		sprintf(out, "%d", error);
		setLCDPos(16);
		writeLineLCD("ERROR:");
		setLCDPos(22);
		writeLineLCD(out);
		
			
		delay(100000);	
		
	}
}
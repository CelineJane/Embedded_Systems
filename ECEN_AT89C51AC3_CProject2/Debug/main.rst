                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.8.0 #10562 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _get_average
                                     13 	.globl _my_isr_handler
                                     14 	.globl _sprintf
                                     15 	.globl _setLCDPos
                                     16 	.globl _clearLCD
                                     17 	.globl _writeLineLCD
                                     18 	.globl _initLCD
                                     19 	.globl _delay
                                     20 	.globl _PADCL
                                     21 	.globl _B7
                                     22 	.globl _B6
                                     23 	.globl _B5
                                     24 	.globl _B4
                                     25 	.globl _B3
                                     26 	.globl _B2
                                     27 	.globl _B1
                                     28 	.globl _B0
                                     29 	.globl _ESPI
                                     30 	.globl _EADC
                                     31 	.globl _A7
                                     32 	.globl _A6
                                     33 	.globl _A5
                                     34 	.globl _A4
                                     35 	.globl _A3
                                     36 	.globl _A2
                                     37 	.globl _A1
                                     38 	.globl _A0
                                     39 	.globl _ACC7
                                     40 	.globl _ACC6
                                     41 	.globl _ACC5
                                     42 	.globl _ACC4
                                     43 	.globl _ACC3
                                     44 	.globl _ACC2
                                     45 	.globl _ACC1
                                     46 	.globl _ACC0
                                     47 	.globl _CF
                                     48 	.globl _CR
                                     49 	.globl _CCF4
                                     50 	.globl _CCF3
                                     51 	.globl _CCF2
                                     52 	.globl _CCF1
                                     53 	.globl _CCF0
                                     54 	.globl _CY
                                     55 	.globl _AC
                                     56 	.globl _F0
                                     57 	.globl _RS1
                                     58 	.globl _RS0
                                     59 	.globl _OV
                                     60 	.globl _F1
                                     61 	.globl _P
                                     62 	.globl _TF2
                                     63 	.globl _EXF2
                                     64 	.globl _RCLK
                                     65 	.globl _TCLK
                                     66 	.globl _EXEN2
                                     67 	.globl _TR2
                                     68 	.globl _CT2
                                     69 	.globl _CPRL2
                                     70 	.globl _MOSI
                                     71 	.globl _SCK
                                     72 	.globl _MISO
                                     73 	.globl _P4_4
                                     74 	.globl _P4_3
                                     75 	.globl _P4_2
                                     76 	.globl _P4_1
                                     77 	.globl _P4_0
                                     78 	.globl _PPC
                                     79 	.globl _PT2
                                     80 	.globl _PS
                                     81 	.globl _PT1
                                     82 	.globl _PX1
                                     83 	.globl _PT0
                                     84 	.globl _PX0
                                     85 	.globl _RD
                                     86 	.globl _WR
                                     87 	.globl _T1
                                     88 	.globl _T0
                                     89 	.globl _INT1
                                     90 	.globl _INT0
                                     91 	.globl _TXD
                                     92 	.globl _RXD
                                     93 	.globl _P3_7
                                     94 	.globl _P3_6
                                     95 	.globl _P3_5
                                     96 	.globl _P3_4
                                     97 	.globl _P3_3
                                     98 	.globl _P3_2
                                     99 	.globl _P3_1
                                    100 	.globl _P3_0
                                    101 	.globl _EA
                                    102 	.globl _EC
                                    103 	.globl _ET2
                                    104 	.globl _ES
                                    105 	.globl _ET1
                                    106 	.globl _EX1
                                    107 	.globl _ET0
                                    108 	.globl _EX0
                                    109 	.globl _A15
                                    110 	.globl _A14
                                    111 	.globl _A13
                                    112 	.globl _A12
                                    113 	.globl _A11
                                    114 	.globl _A10
                                    115 	.globl _A9
                                    116 	.globl _A8
                                    117 	.globl _P2_7
                                    118 	.globl _P2_6
                                    119 	.globl _P2_5
                                    120 	.globl _P2_4
                                    121 	.globl _P2_3
                                    122 	.globl _P2_2
                                    123 	.globl _P2_1
                                    124 	.globl _P2_0
                                    125 	.globl _FE
                                    126 	.globl _SM0
                                    127 	.globl _SM1
                                    128 	.globl _SM2
                                    129 	.globl _REN
                                    130 	.globl _TB8
                                    131 	.globl _RB8
                                    132 	.globl _TI
                                    133 	.globl _RI
                                    134 	.globl _CEX4
                                    135 	.globl _CEX3
                                    136 	.globl _CEX2
                                    137 	.globl _CEX1
                                    138 	.globl _CEX0
                                    139 	.globl _ECI
                                    140 	.globl _T2EX
                                    141 	.globl _T2
                                    142 	.globl _P1_7
                                    143 	.globl _P1_6
                                    144 	.globl _P1_5
                                    145 	.globl _P1_4
                                    146 	.globl _P1_3
                                    147 	.globl _P1_2
                                    148 	.globl _P1_1
                                    149 	.globl _P1_0
                                    150 	.globl _TF1
                                    151 	.globl _TR1
                                    152 	.globl _TF0
                                    153 	.globl _TR0
                                    154 	.globl _IE1
                                    155 	.globl _IT1
                                    156 	.globl _IE0
                                    157 	.globl _IT0
                                    158 	.globl _AD7
                                    159 	.globl _AD6
                                    160 	.globl _AD5
                                    161 	.globl _AD4
                                    162 	.globl _AD3
                                    163 	.globl _AD2
                                    164 	.globl _AD1
                                    165 	.globl _AD0
                                    166 	.globl _P0_7
                                    167 	.globl _P0_6
                                    168 	.globl _P0_5
                                    169 	.globl _P0_4
                                    170 	.globl _P0_3
                                    171 	.globl _P0_2
                                    172 	.globl _P0_1
                                    173 	.globl _P0_0
                                    174 	.globl _CCAP4H
                                    175 	.globl _CCAP3H
                                    176 	.globl _CCAP2H
                                    177 	.globl _CCAP1H
                                    178 	.globl _CCAP0H
                                    179 	.globl _CH
                                    180 	.globl _IPL1
                                    181 	.globl _IPH1
                                    182 	.globl _ADCF
                                    183 	.globl _ADDH
                                    184 	.globl _ADDL
                                    185 	.globl _ADCON
                                    186 	.globl _ADCLK
                                    187 	.globl _B
                                    188 	.globl _CCAP4L
                                    189 	.globl _CCAP3L
                                    190 	.globl _CCAP2L
                                    191 	.globl _CCAP1L
                                    192 	.globl _CCAP0L
                                    193 	.globl _CL
                                    194 	.globl _IEN1
                                    195 	.globl _A
                                    196 	.globl _ACC
                                    197 	.globl _CCAPM4
                                    198 	.globl _CCAPM3
                                    199 	.globl _CCAPM2
                                    200 	.globl _CCAPM1
                                    201 	.globl _CCAPM0
                                    202 	.globl _CMOD
                                    203 	.globl _CCON
                                    204 	.globl _SPDAT
                                    205 	.globl _SPSCR
                                    206 	.globl _SPCON
                                    207 	.globl _EECON
                                    208 	.globl _FCON
                                    209 	.globl _PSW
                                    210 	.globl _CANEN2
                                    211 	.globl _CANEN1
                                    212 	.globl _TH2
                                    213 	.globl _TL2
                                    214 	.globl _RCAP2H
                                    215 	.globl _RCAP2L
                                    216 	.globl _T2MOD
                                    217 	.globl _T2CON
                                    218 	.globl _P4
                                    219 	.globl _SADEN
                                    220 	.globl _IPL0
                                    221 	.globl _IPH0
                                    222 	.globl _P3
                                    223 	.globl _SADDR
                                    224 	.globl _IEN0
                                    225 	.globl _WDTPRG
                                    226 	.globl _WDTRST
                                    227 	.globl _AUXR1
                                    228 	.globl _P2
                                    229 	.globl _CKCON1
                                    230 	.globl _SBUF
                                    231 	.globl _SCON
                                    232 	.globl _P1
                                    233 	.globl _CKCON0
                                    234 	.globl _AUXR
                                    235 	.globl _TH1
                                    236 	.globl _TH0
                                    237 	.globl _TL1
                                    238 	.globl _TL0
                                    239 	.globl _TMOD
                                    240 	.globl _TCON
                                    241 	.globl _PCON
                                    242 	.globl _DPH
                                    243 	.globl _DPL
                                    244 	.globl _SP
                                    245 	.globl _P0
                                    246 	.globl _average
                                    247 	.globl _prev_error
                                    248 	.globl _prev_value
                                    249 	.globl _RPM_calc
                                    250 	.globl _RPM_motor
                                    251 	.globl _time_diff
                                    252 	.globl _current_time
                                    253 	.globl _prev_time
                                    254 ;--------------------------------------------------------
                                    255 ; special function registers
                                    256 ;--------------------------------------------------------
                                    257 	.area RSEG    (ABS,DATA)
      000000                        258 	.org 0x0000
                           000080   259 _P0	=	0x0080
                           000081   260 _SP	=	0x0081
                           000082   261 _DPL	=	0x0082
                           000083   262 _DPH	=	0x0083
                           000087   263 _PCON	=	0x0087
                           000088   264 _TCON	=	0x0088
                           000089   265 _TMOD	=	0x0089
                           00008A   266 _TL0	=	0x008a
                           00008B   267 _TL1	=	0x008b
                           00008C   268 _TH0	=	0x008c
                           00008D   269 _TH1	=	0x008d
                           00008E   270 _AUXR	=	0x008e
                           00008F   271 _CKCON0	=	0x008f
                           000090   272 _P1	=	0x0090
                           000098   273 _SCON	=	0x0098
                           000099   274 _SBUF	=	0x0099
                           00009F   275 _CKCON1	=	0x009f
                           0000A0   276 _P2	=	0x00a0
                           0000A2   277 _AUXR1	=	0x00a2
                           0000A6   278 _WDTRST	=	0x00a6
                           0000A7   279 _WDTPRG	=	0x00a7
                           0000A8   280 _IEN0	=	0x00a8
                           0000A9   281 _SADDR	=	0x00a9
                           0000B0   282 _P3	=	0x00b0
                           0000B7   283 _IPH0	=	0x00b7
                           0000B8   284 _IPL0	=	0x00b8
                           0000B9   285 _SADEN	=	0x00b9
                           0000C0   286 _P4	=	0x00c0
                           0000C8   287 _T2CON	=	0x00c8
                           0000C9   288 _T2MOD	=	0x00c9
                           0000CA   289 _RCAP2L	=	0x00ca
                           0000CB   290 _RCAP2H	=	0x00cb
                           0000CC   291 _TL2	=	0x00cc
                           0000CD   292 _TH2	=	0x00cd
                           0000CE   293 _CANEN1	=	0x00ce
                           0000CF   294 _CANEN2	=	0x00cf
                           0000D0   295 _PSW	=	0x00d0
                           0000D1   296 _FCON	=	0x00d1
                           0000D2   297 _EECON	=	0x00d2
                           0000D4   298 _SPCON	=	0x00d4
                           0000D5   299 _SPSCR	=	0x00d5
                           0000D6   300 _SPDAT	=	0x00d6
                           0000D8   301 _CCON	=	0x00d8
                           0000D9   302 _CMOD	=	0x00d9
                           0000DA   303 _CCAPM0	=	0x00da
                           0000DB   304 _CCAPM1	=	0x00db
                           0000DC   305 _CCAPM2	=	0x00dc
                           0000DD   306 _CCAPM3	=	0x00dd
                           0000DE   307 _CCAPM4	=	0x00de
                           0000E0   308 _ACC	=	0x00e0
                           0000E0   309 _A	=	0x00e0
                           0000E8   310 _IEN1	=	0x00e8
                           0000E9   311 _CL	=	0x00e9
                           0000EA   312 _CCAP0L	=	0x00ea
                           0000EB   313 _CCAP1L	=	0x00eb
                           0000EC   314 _CCAP2L	=	0x00ec
                           0000ED   315 _CCAP3L	=	0x00ed
                           0000EE   316 _CCAP4L	=	0x00ee
                           0000F0   317 _B	=	0x00f0
                           0000F2   318 _ADCLK	=	0x00f2
                           0000F3   319 _ADCON	=	0x00f3
                           0000F4   320 _ADDL	=	0x00f4
                           0000F5   321 _ADDH	=	0x00f5
                           0000F6   322 _ADCF	=	0x00f6
                           0000F7   323 _IPH1	=	0x00f7
                           0000F8   324 _IPL1	=	0x00f8
                           0000F9   325 _CH	=	0x00f9
                           0000FA   326 _CCAP0H	=	0x00fa
                           0000FB   327 _CCAP1H	=	0x00fb
                           0000FC   328 _CCAP2H	=	0x00fc
                           0000FD   329 _CCAP3H	=	0x00fd
                           0000FE   330 _CCAP4H	=	0x00fe
                                    331 ;--------------------------------------------------------
                                    332 ; special function bits
                                    333 ;--------------------------------------------------------
                                    334 	.area RSEG    (ABS,DATA)
      000000                        335 	.org 0x0000
                           000080   336 _P0_0	=	0x0080
                           000081   337 _P0_1	=	0x0081
                           000082   338 _P0_2	=	0x0082
                           000083   339 _P0_3	=	0x0083
                           000084   340 _P0_4	=	0x0084
                           000085   341 _P0_5	=	0x0085
                           000086   342 _P0_6	=	0x0086
                           000087   343 _P0_7	=	0x0087
                           000080   344 _AD0	=	0x0080
                           000081   345 _AD1	=	0x0081
                           000082   346 _AD2	=	0x0082
                           000083   347 _AD3	=	0x0083
                           000084   348 _AD4	=	0x0084
                           000085   349 _AD5	=	0x0085
                           000086   350 _AD6	=	0x0086
                           000087   351 _AD7	=	0x0087
                           000088   352 _IT0	=	0x0088
                           000089   353 _IE0	=	0x0089
                           00008A   354 _IT1	=	0x008a
                           00008B   355 _IE1	=	0x008b
                           00008C   356 _TR0	=	0x008c
                           00008D   357 _TF0	=	0x008d
                           00008E   358 _TR1	=	0x008e
                           00008F   359 _TF1	=	0x008f
                           000090   360 _P1_0	=	0x0090
                           000091   361 _P1_1	=	0x0091
                           000092   362 _P1_2	=	0x0092
                           000093   363 _P1_3	=	0x0093
                           000094   364 _P1_4	=	0x0094
                           000095   365 _P1_5	=	0x0095
                           000096   366 _P1_6	=	0x0096
                           000097   367 _P1_7	=	0x0097
                           000090   368 _T2	=	0x0090
                           000091   369 _T2EX	=	0x0091
                           000092   370 _ECI	=	0x0092
                           000093   371 _CEX0	=	0x0093
                           000094   372 _CEX1	=	0x0094
                           000095   373 _CEX2	=	0x0095
                           000096   374 _CEX3	=	0x0096
                           000097   375 _CEX4	=	0x0097
                           000098   376 _RI	=	0x0098
                           000099   377 _TI	=	0x0099
                           00009A   378 _RB8	=	0x009a
                           00009B   379 _TB8	=	0x009b
                           00009C   380 _REN	=	0x009c
                           00009D   381 _SM2	=	0x009d
                           00009E   382 _SM1	=	0x009e
                           00009F   383 _SM0	=	0x009f
                           00009F   384 _FE	=	0x009f
                           0000A0   385 _P2_0	=	0x00a0
                           0000A1   386 _P2_1	=	0x00a1
                           0000A2   387 _P2_2	=	0x00a2
                           0000A3   388 _P2_3	=	0x00a3
                           0000A4   389 _P2_4	=	0x00a4
                           0000A5   390 _P2_5	=	0x00a5
                           0000A6   391 _P2_6	=	0x00a6
                           0000A7   392 _P2_7	=	0x00a7
                           0000A0   393 _A8	=	0x00a0
                           0000A1   394 _A9	=	0x00a1
                           0000A2   395 _A10	=	0x00a2
                           0000A3   396 _A11	=	0x00a3
                           0000A4   397 _A12	=	0x00a4
                           0000A5   398 _A13	=	0x00a5
                           0000A6   399 _A14	=	0x00a6
                           0000A7   400 _A15	=	0x00a7
                           0000A8   401 _EX0	=	0x00a8
                           0000A9   402 _ET0	=	0x00a9
                           0000AA   403 _EX1	=	0x00aa
                           0000AB   404 _ET1	=	0x00ab
                           0000AC   405 _ES	=	0x00ac
                           0000AD   406 _ET2	=	0x00ad
                           0000AE   407 _EC	=	0x00ae
                           0000AF   408 _EA	=	0x00af
                           0000B0   409 _P3_0	=	0x00b0
                           0000B1   410 _P3_1	=	0x00b1
                           0000B2   411 _P3_2	=	0x00b2
                           0000B3   412 _P3_3	=	0x00b3
                           0000B4   413 _P3_4	=	0x00b4
                           0000B5   414 _P3_5	=	0x00b5
                           0000B6   415 _P3_6	=	0x00b6
                           0000B7   416 _P3_7	=	0x00b7
                           0000B0   417 _RXD	=	0x00b0
                           0000B1   418 _TXD	=	0x00b1
                           0000B2   419 _INT0	=	0x00b2
                           0000B3   420 _INT1	=	0x00b3
                           0000B4   421 _T0	=	0x00b4
                           0000B5   422 _T1	=	0x00b5
                           0000B6   423 _WR	=	0x00b6
                           0000B7   424 _RD	=	0x00b7
                           0000B8   425 _PX0	=	0x00b8
                           0000B9   426 _PT0	=	0x00b9
                           0000BA   427 _PX1	=	0x00ba
                           0000BB   428 _PT1	=	0x00bb
                           0000BC   429 _PS	=	0x00bc
                           0000BD   430 _PT2	=	0x00bd
                           0000BE   431 _PPC	=	0x00be
                           0000C0   432 _P4_0	=	0x00c0
                           0000C1   433 _P4_1	=	0x00c1
                           0000C2   434 _P4_2	=	0x00c2
                           0000C3   435 _P4_3	=	0x00c3
                           0000C4   436 _P4_4	=	0x00c4
                           0000C2   437 _MISO	=	0x00c2
                           0000C3   438 _SCK	=	0x00c3
                           0000C4   439 _MOSI	=	0x00c4
                           0000C8   440 _CPRL2	=	0x00c8
                           0000C9   441 _CT2	=	0x00c9
                           0000CA   442 _TR2	=	0x00ca
                           0000CB   443 _EXEN2	=	0x00cb
                           0000CC   444 _TCLK	=	0x00cc
                           0000CD   445 _RCLK	=	0x00cd
                           0000CE   446 _EXF2	=	0x00ce
                           0000CF   447 _TF2	=	0x00cf
                           0000D0   448 _P	=	0x00d0
                           0000D1   449 _F1	=	0x00d1
                           0000D2   450 _OV	=	0x00d2
                           0000D3   451 _RS0	=	0x00d3
                           0000D4   452 _RS1	=	0x00d4
                           0000D5   453 _F0	=	0x00d5
                           0000D6   454 _AC	=	0x00d6
                           0000D7   455 _CY	=	0x00d7
                           0000D8   456 _CCF0	=	0x00d8
                           0000D9   457 _CCF1	=	0x00d9
                           0000DA   458 _CCF2	=	0x00da
                           0000DB   459 _CCF3	=	0x00db
                           0000DC   460 _CCF4	=	0x00dc
                           0000DE   461 _CR	=	0x00de
                           0000DF   462 _CF	=	0x00df
                           0000E0   463 _ACC0	=	0x00e0
                           0000E1   464 _ACC1	=	0x00e1
                           0000E2   465 _ACC2	=	0x00e2
                           0000E3   466 _ACC3	=	0x00e3
                           0000E4   467 _ACC4	=	0x00e4
                           0000E5   468 _ACC5	=	0x00e5
                           0000E6   469 _ACC6	=	0x00e6
                           0000E7   470 _ACC7	=	0x00e7
                           0000E0   471 _A0	=	0x00e0
                           0000E1   472 _A1	=	0x00e1
                           0000E2   473 _A2	=	0x00e2
                           0000E3   474 _A3	=	0x00e3
                           0000E4   475 _A4	=	0x00e4
                           0000E5   476 _A5	=	0x00e5
                           0000E6   477 _A6	=	0x00e6
                           0000E7   478 _A7	=	0x00e7
                           0000E8   479 _EADC	=	0x00e8
                           0000E9   480 _ESPI	=	0x00e9
                           0000F0   481 _B0	=	0x00f0
                           0000F1   482 _B1	=	0x00f1
                           0000F2   483 _B2	=	0x00f2
                           0000F3   484 _B3	=	0x00f3
                           0000F4   485 _B4	=	0x00f4
                           0000F5   486 _B5	=	0x00f5
                           0000F6   487 _B6	=	0x00f6
                           0000F7   488 _B7	=	0x00f7
                           0000F9   489 _PADCL	=	0x00f9
                                    490 ;--------------------------------------------------------
                                    491 ; overlayable register banks
                                    492 ;--------------------------------------------------------
                                    493 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        494 	.ds 8
                                    495 ;--------------------------------------------------------
                                    496 ; internal ram data
                                    497 ;--------------------------------------------------------
                                    498 	.area DSEG    (DATA)
      000008                        499 _prev_time::
      000008                        500 	.ds 2
      00000A                        501 _current_time::
      00000A                        502 	.ds 2
      00000C                        503 _time_diff::
      00000C                        504 	.ds 2
      00000E                        505 _RPM_motor::
      00000E                        506 	.ds 2
      000010                        507 _RPM_calc::
      000010                        508 	.ds 2
      000012                        509 _prev_value::
      000012                        510 	.ds 10
      00001C                        511 _prev_error::
      00001C                        512 	.ds 2
      00001E                        513 _average::
      00001E                        514 	.ds 4
      000022                        515 _main_error_131074_40:
      000022                        516 	.ds 2
      000024                        517 _main_out_131075_42:
      000024                        518 	.ds 16
                                    519 ;--------------------------------------------------------
                                    520 ; overlayable items in internal ram 
                                    521 ;--------------------------------------------------------
                                    522 ;--------------------------------------------------------
                                    523 ; Stack segment in internal ram 
                                    524 ;--------------------------------------------------------
                                    525 	.area	SSEG
      000079                        526 __start__stack:
      000079                        527 	.ds	1
                                    528 
                                    529 ;--------------------------------------------------------
                                    530 ; indirectly addressable internal ram data
                                    531 ;--------------------------------------------------------
                                    532 	.area ISEG    (DATA)
                                    533 ;--------------------------------------------------------
                                    534 ; absolute internal ram data
                                    535 ;--------------------------------------------------------
                                    536 	.area IABS    (ABS,DATA)
                                    537 	.area IABS    (ABS,DATA)
                                    538 ;--------------------------------------------------------
                                    539 ; bit data
                                    540 ;--------------------------------------------------------
                                    541 	.area BSEG    (BIT)
                                    542 ;--------------------------------------------------------
                                    543 ; paged external ram data
                                    544 ;--------------------------------------------------------
                                    545 	.area PSEG    (PAG,XDATA)
                                    546 ;--------------------------------------------------------
                                    547 ; external ram data
                                    548 ;--------------------------------------------------------
                                    549 	.area XSEG    (XDATA)
                                    550 ;--------------------------------------------------------
                                    551 ; absolute external ram data
                                    552 ;--------------------------------------------------------
                                    553 	.area XABS    (ABS,XDATA)
                                    554 ;--------------------------------------------------------
                                    555 ; external initialized ram data
                                    556 ;--------------------------------------------------------
                                    557 	.area XISEG   (XDATA)
                                    558 	.area HOME    (CODE)
                                    559 	.area GSINIT0 (CODE)
                                    560 	.area GSINIT1 (CODE)
                                    561 	.area GSINIT2 (CODE)
                                    562 	.area GSINIT3 (CODE)
                                    563 	.area GSINIT4 (CODE)
                                    564 	.area GSINIT5 (CODE)
                                    565 	.area GSINIT  (CODE)
                                    566 	.area GSFINAL (CODE)
                                    567 	.area CSEG    (CODE)
                                    568 ;--------------------------------------------------------
                                    569 ; interrupt vector 
                                    570 ;--------------------------------------------------------
                                    571 	.area HOME    (CODE)
      000000                        572 __interrupt_vect:
      000000 02 00 39         [24]  573 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  574 	reti
      000004                        575 	.ds	7
      00000B 32               [24]  576 	reti
      00000C                        577 	.ds	7
      000013 32               [24]  578 	reti
      000014                        579 	.ds	7
      00001B 32               [24]  580 	reti
      00001C                        581 	.ds	7
      000023 32               [24]  582 	reti
      000024                        583 	.ds	7
      00002B 32               [24]  584 	reti
      00002C                        585 	.ds	7
      000033 02 00 D2         [24]  586 	ljmp	_my_isr_handler
                                    587 ;--------------------------------------------------------
                                    588 ; global & static initialisations
                                    589 ;--------------------------------------------------------
                                    590 	.area HOME    (CODE)
                                    591 	.area GSINIT  (CODE)
                                    592 	.area GSFINAL (CODE)
                                    593 	.area GSINIT  (CODE)
                                    594 	.globl __sdcc_gsinit_startup
                                    595 	.globl __sdcc_program_startup
                                    596 	.globl __start__stack
                                    597 	.globl __mcs51_genXINIT
                                    598 	.globl __mcs51_genXRAMCLEAR
                                    599 	.globl __mcs51_genRAMCLEAR
                                    600 ;	main.c:11: volatile int prev_time = 0;
      000092 E4               [12]  601 	clr	a
      000093 F5 08            [12]  602 	mov	_prev_time,a
      000095 F5 09            [12]  603 	mov	(_prev_time + 1),a
                                    604 ;	main.c:12: volatile int current_time = 0;
      000097 F5 0A            [12]  605 	mov	_current_time,a
      000099 F5 0B            [12]  606 	mov	(_current_time + 1),a
                                    607 ;	main.c:13: volatile int time_diff = 0;
      00009B F5 0C            [12]  608 	mov	_time_diff,a
      00009D F5 0D            [12]  609 	mov	(_time_diff + 1),a
                                    610 ;	main.c:14: volatile int RPM_motor = 0; 
      00009F F5 0E            [12]  611 	mov	_RPM_motor,a
      0000A1 F5 0F            [12]  612 	mov	(_RPM_motor + 1),a
                                    613 ;	main.c:15: volatile int RPM_calc = 0; 
      0000A3 F5 10            [12]  614 	mov	_RPM_calc,a
      0000A5 F5 11            [12]  615 	mov	(_RPM_calc + 1),a
                                    616 ;	main.c:16: volatile int prev_value[5] = {0,0,0,0,0};
      0000A7 F5 12            [12]  617 	mov	(_prev_value + 0),a
      0000A9 F5 13            [12]  618 	mov	(_prev_value + 1),a
      0000AB F5 14            [12]  619 	mov	((_prev_value + 0x0002) + 0),a
      0000AD F5 15            [12]  620 	mov	((_prev_value + 0x0002) + 1),a
      0000AF F5 16            [12]  621 	mov	((_prev_value + 0x0004) + 0),a
      0000B1 F5 17            [12]  622 	mov	((_prev_value + 0x0004) + 1),a
      0000B3 F5 18            [12]  623 	mov	((_prev_value + 0x0006) + 0),a
      0000B5 F5 19            [12]  624 	mov	((_prev_value + 0x0006) + 1),a
      0000B7 F5 1A            [12]  625 	mov	((_prev_value + 0x0008) + 0),a
      0000B9 F5 1B            [12]  626 	mov	((_prev_value + 0x0008) + 1),a
                                    627 ;	main.c:17: int prev_error = 0;
      0000BB F5 1C            [12]  628 	mov	_prev_error,a
      0000BD F5 1D            [12]  629 	mov	(_prev_error + 1),a
                                    630 ;	main.c:18: volatile float average = 0.0;
      0000BF F5 1E            [12]  631 	mov	_average,a
      0000C1 F5 1F            [12]  632 	mov	(_average + 1),a
      0000C3 F5 20            [12]  633 	mov	(_average + 2),a
      0000C5 F5 21            [12]  634 	mov	(_average + 3),a
                                    635 	.area GSFINAL (CODE)
      0000CF 02 00 36         [24]  636 	ljmp	__sdcc_program_startup
                                    637 ;--------------------------------------------------------
                                    638 ; Home
                                    639 ;--------------------------------------------------------
                                    640 	.area HOME    (CODE)
                                    641 	.area HOME    (CODE)
      000036                        642 __sdcc_program_startup:
      000036 02 01 DE         [24]  643 	ljmp	_main
                                    644 ;	return from main will return to caller
                                    645 ;--------------------------------------------------------
                                    646 ; code
                                    647 ;--------------------------------------------------------
                                    648 	.area CSEG    (CODE)
                                    649 ;------------------------------------------------------------
                                    650 ;Allocation info for local variables in function 'my_isr_handler'
                                    651 ;------------------------------------------------------------
                                    652 ;	main.c:21: void my_isr_handler(void) __interrupt(6) //goes here every rotation, timer CL and CH are loaded into CCAPnL and CCAPnH
                                    653 ;	-----------------------------------------
                                    654 ;	 function my_isr_handler
                                    655 ;	-----------------------------------------
      0000D2                        656 _my_isr_handler:
                           000007   657 	ar7 = 0x07
                           000006   658 	ar6 = 0x06
                           000005   659 	ar5 = 0x05
                           000004   660 	ar4 = 0x04
                           000003   661 	ar3 = 0x03
                           000002   662 	ar2 = 0x02
                           000001   663 	ar1 = 0x01
                           000000   664 	ar0 = 0x00
      0000D2 C0 E0            [24]  665 	push	acc
      0000D4 C0 07            [24]  666 	push	ar7
      0000D6 C0 06            [24]  667 	push	ar6
      0000D8 C0 05            [24]  668 	push	ar5
      0000DA C0 04            [24]  669 	push	ar4
      0000DC C0 D0            [24]  670 	push	psw
      0000DE 75 D0 00         [24]  671 	mov	psw,#0x00
                                    672 ;	main.c:23: CCF1 = 0;
                                    673 ;	assignBit
      0000E1 C2 D9            [12]  674 	clr	_CCF1
                                    675 ;	main.c:25: prev_time = current_time;		
      0000E3 85 0A 08         [24]  676 	mov	_prev_time,_current_time
      0000E6 85 0B 09         [24]  677 	mov	(_prev_time + 1),(_current_time + 1)
                                    678 ;	main.c:26: current_time = (CCAP1H << 8) | (CCAP1L & 0xFF);
      0000E9 AF FB            [24]  679 	mov	r7,_CCAP1H
      0000EB 7E 00            [12]  680 	mov	r6,#0x00
      0000ED AC EB            [24]  681 	mov	r4,_CCAP1L
      0000EF E4               [12]  682 	clr	a
      0000F0 FD               [12]  683 	mov	r5,a
      0000F1 EC               [12]  684 	mov	a,r4
      0000F2 4E               [12]  685 	orl	a,r6
      0000F3 F5 0A            [12]  686 	mov	_current_time,a
      0000F5 ED               [12]  687 	mov	a,r5
      0000F6 4F               [12]  688 	orl	a,r7
      0000F7 F5 0B            [12]  689 	mov	(_current_time + 1),a
                                    690 ;	main.c:28: time_diff = current_time - prev_time;
      0000F9 E5 0A            [12]  691 	mov	a,_current_time
      0000FB C3               [12]  692 	clr	c
      0000FC 95 08            [12]  693 	subb	a,_prev_time
      0000FE F5 0C            [12]  694 	mov	_time_diff,a
      000100 E5 0B            [12]  695 	mov	a,(_current_time + 1)
      000102 95 09            [12]  696 	subb	a,(_prev_time + 1)
      000104 F5 0D            [12]  697 	mov	(_time_diff + 1),a
                                    698 ;	main.c:30: } 
      000106 D0 D0            [24]  699 	pop	psw
      000108 D0 04            [24]  700 	pop	ar4
      00010A D0 05            [24]  701 	pop	ar5
      00010C D0 06            [24]  702 	pop	ar6
      00010E D0 07            [24]  703 	pop	ar7
      000110 D0 E0            [24]  704 	pop	acc
      000112 32               [24]  705 	reti
                                    706 ;	eliminated unneeded push/pop dpl
                                    707 ;	eliminated unneeded push/pop dph
                                    708 ;	eliminated unneeded push/pop b
                                    709 ;------------------------------------------------------------
                                    710 ;Allocation info for local variables in function 'get_average'
                                    711 ;------------------------------------------------------------
                                    712 ;motor                     Allocated to registers r6 r7 
                                    713 ;i                         Allocated to registers r4 r5 
                                    714 ;n                         Allocated to registers r6 r7 
                                    715 ;------------------------------------------------------------
                                    716 ;	main.c:32: int get_average(int motor){
                                    717 ;	-----------------------------------------
                                    718 ;	 function get_average
                                    719 ;	-----------------------------------------
      000113                        720 _get_average:
      000113 AE 82            [24]  721 	mov	r6,dpl
      000115 AF 83            [24]  722 	mov	r7,dph
                                    723 ;	main.c:33: for(int i = 0; i < 4; i++) {
      000117 7C 00            [12]  724 	mov	r4,#0x00
      000119 7D 00            [12]  725 	mov	r5,#0x00
      00011B                        726 00104$:
      00011B C3               [12]  727 	clr	c
      00011C EC               [12]  728 	mov	a,r4
      00011D 94 04            [12]  729 	subb	a,#0x04
      00011F ED               [12]  730 	mov	a,r5
      000120 64 80            [12]  731 	xrl	a,#0x80
      000122 94 80            [12]  732 	subb	a,#0x80
      000124 50 24            [24]  733 	jnc	00101$
                                    734 ;	main.c:34: prev_value[i] = prev_value[i+1]	;
      000126 EC               [12]  735 	mov	a,r4
      000127 2C               [12]  736 	add	a,r4
      000128 FA               [12]  737 	mov	r2,a
      000129 ED               [12]  738 	mov	a,r5
      00012A 33               [12]  739 	rlc	a
      00012B EA               [12]  740 	mov	a,r2
      00012C 24 12            [12]  741 	add	a,#_prev_value
      00012E F9               [12]  742 	mov	r1,a
      00012F 8C 03            [24]  743 	mov	ar3,r4
      000131 0B               [12]  744 	inc	r3
      000132 EB               [12]  745 	mov	a,r3
      000133 2B               [12]  746 	add	a,r3
      000134 24 12            [12]  747 	add	a,#_prev_value
      000136 F8               [12]  748 	mov	r0,a
      000137 86 02            [24]  749 	mov	ar2,@r0
      000139 08               [12]  750 	inc	r0
      00013A 86 03            [24]  751 	mov	ar3,@r0
      00013C 18               [12]  752 	dec	r0
      00013D A7 02            [24]  753 	mov	@r1,ar2
      00013F 09               [12]  754 	inc	r1
      000140 A7 03            [24]  755 	mov	@r1,ar3
      000142 19               [12]  756 	dec	r1
                                    757 ;	main.c:33: for(int i = 0; i < 4; i++) {
      000143 0C               [12]  758 	inc	r4
      000144 BC 00 D4         [24]  759 	cjne	r4,#0x00,00104$
      000147 0D               [12]  760 	inc	r5
      000148 80 D1            [24]  761 	sjmp	00104$
      00014A                        762 00101$:
                                    763 ;	main.c:36: prev_value[4] = motor;
      00014A 8E 1A            [24]  764 	mov	((_prev_value + 0x0008) + 0),r6
      00014C 8F 1B            [24]  765 	mov	((_prev_value + 0x0008) + 1),r7
                                    766 ;	main.c:38: for (int n = 0; n < 5; n++)
      00014E 7E 00            [12]  767 	mov	r6,#0x00
      000150 7F 00            [12]  768 	mov	r7,#0x00
      000152                        769 00107$:
      000152 C3               [12]  770 	clr	c
      000153 EE               [12]  771 	mov	a,r6
      000154 94 05            [12]  772 	subb	a,#0x05
      000156 EF               [12]  773 	mov	a,r7
      000157 64 80            [12]  774 	xrl	a,#0x80
      000159 94 80            [12]  775 	subb	a,#0x80
      00015B 50 4F            [24]  776 	jnc	00102$
                                    777 ;	main.c:40: average = average + prev_value[n];
      00015D EE               [12]  778 	mov	a,r6
      00015E 2E               [12]  779 	add	a,r6
      00015F FC               [12]  780 	mov	r4,a
      000160 EF               [12]  781 	mov	a,r7
      000161 33               [12]  782 	rlc	a
      000162 EC               [12]  783 	mov	a,r4
      000163 24 12            [12]  784 	add	a,#_prev_value
      000165 F9               [12]  785 	mov	r1,a
      000166 87 82            [24]  786 	mov	dpl,@r1
      000168 09               [12]  787 	inc	r1
      000169 87 83            [24]  788 	mov	dph,@r1
      00016B 19               [12]  789 	dec	r1
      00016C C0 07            [24]  790 	push	ar7
      00016E C0 06            [24]  791 	push	ar6
      000170 12 0A 11         [24]  792 	lcall	___sint2fs
      000173 AA 82            [24]  793 	mov	r2,dpl
      000175 AB 83            [24]  794 	mov	r3,dph
      000177 AC F0            [24]  795 	mov	r4,b
      000179 FD               [12]  796 	mov	r5,a
      00017A C0 02            [24]  797 	push	ar2
      00017C C0 03            [24]  798 	push	ar3
      00017E C0 04            [24]  799 	push	ar4
      000180 C0 05            [24]  800 	push	ar5
      000182 85 1E 82         [24]  801 	mov	dpl,_average
      000185 85 1F 83         [24]  802 	mov	dph,(_average + 1)
      000188 85 20 F0         [24]  803 	mov	b,(_average + 2)
      00018B E5 21            [12]  804 	mov	a,(_average + 3)
      00018D 12 05 80         [24]  805 	lcall	___fsadd
      000190 85 82 1E         [24]  806 	mov	_average,dpl
      000193 85 83 1F         [24]  807 	mov	(_average + 1),dph
      000196 85 F0 20         [24]  808 	mov	(_average + 2),b
      000199 F5 21            [12]  809 	mov	(_average + 3),a
      00019B E5 81            [12]  810 	mov	a,sp
      00019D 24 FC            [12]  811 	add	a,#0xfc
      00019F F5 81            [12]  812 	mov	sp,a
      0001A1 D0 06            [24]  813 	pop	ar6
      0001A3 D0 07            [24]  814 	pop	ar7
                                    815 ;	main.c:38: for (int n = 0; n < 5; n++)
      0001A5 0E               [12]  816 	inc	r6
      0001A6 BE 00 A9         [24]  817 	cjne	r6,#0x00,00107$
      0001A9 0F               [12]  818 	inc	r7
      0001AA 80 A6            [24]  819 	sjmp	00107$
      0001AC                        820 00102$:
                                    821 ;	main.c:43: return (int)(average/5);
      0001AC E4               [12]  822 	clr	a
      0001AD C0 E0            [24]  823 	push	acc
      0001AF C0 E0            [24]  824 	push	acc
      0001B1 74 A0            [12]  825 	mov	a,#0xa0
      0001B3 C0 E0            [24]  826 	push	acc
      0001B5 74 40            [12]  827 	mov	a,#0x40
      0001B7 C0 E0            [24]  828 	push	acc
      0001B9 85 1E 82         [24]  829 	mov	dpl,_average
      0001BC 85 1F 83         [24]  830 	mov	dph,(_average + 1)
      0001BF 85 20 F0         [24]  831 	mov	b,(_average + 2)
      0001C2 E5 21            [12]  832 	mov	a,(_average + 3)
      0001C4 12 12 34         [24]  833 	lcall	___fsdiv
      0001C7 AC 82            [24]  834 	mov	r4,dpl
      0001C9 AD 83            [24]  835 	mov	r5,dph
      0001CB AE F0            [24]  836 	mov	r6,b
      0001CD FF               [12]  837 	mov	r7,a
      0001CE E5 81            [12]  838 	mov	a,sp
      0001D0 24 FC            [12]  839 	add	a,#0xfc
      0001D2 F5 81            [12]  840 	mov	sp,a
      0001D4 8C 82            [24]  841 	mov	dpl,r4
      0001D6 8D 83            [24]  842 	mov	dph,r5
      0001D8 8E F0            [24]  843 	mov	b,r6
      0001DA EF               [12]  844 	mov	a,r7
                                    845 ;	main.c:44: }
      0001DB 02 0A 1E         [24]  846 	ljmp	___fs2sint
                                    847 ;------------------------------------------------------------
                                    848 ;Allocation info for local variables in function 'main'
                                    849 ;------------------------------------------------------------
                                    850 ;Kp                        Allocated to registers 
                                    851 ;Ki                        Allocated to registers 
                                    852 ;Kd                        Allocated to registers 
                                    853 ;avg                       Allocated to registers 
                                    854 ;error                     Allocated with name '_main_error_131074_40'
                                    855 ;out                       Allocated with name '_main_out_131075_42'
                                    856 ;------------------------------------------------------------
                                    857 ;	main.c:47: void main(void)
                                    858 ;	-----------------------------------------
                                    859 ;	 function main
                                    860 ;	-----------------------------------------
      0001DE                        861 _main:
                                    862 ;	main.c:50: initLCD();
      0001DE 12 06 EB         [24]  863 	lcall	_initLCD
                                    864 ;	main.c:54: CCAPM0 |= 0x42; //0100 (enable PWM) 0010 (enable CCON register to generate interupt request
      0001E1 AE DA            [24]  865 	mov	r6,_CCAPM0
      0001E3 43 06 42         [24]  866 	orl	ar6,#0x42
      0001E6 8E DA            [24]  867 	mov	_CCAPM0,r6
                                    868 ;	main.c:57: CH = 0x00;
      0001E8 75 F9 00         [24]  869 	mov	_CH,#0x00
                                    870 ;	main.c:58: CL = 0x00;
      0001EB 75 E9 00         [24]  871 	mov	_CL,#0x00
                                    872 ;	main.c:59: IEN0 |= 0xC0; //enable PCA interrupt
      0001EE AE A8            [24]  873 	mov	r6,_IEN0
      0001F0 43 06 C0         [24]  874 	orl	ar6,#0xc0
      0001F3 8E A8            [24]  875 	mov	_IEN0,r6
                                    876 ;	main.c:60: CCAPM1 |= 0x31; // 0010 (enable capture function triggered by +/ve edge) 0001 (enable CCF bit to enable interupt request in CCF1)
      0001F5 AE DB            [24]  877 	mov	r6,_CCAPM1
      0001F7 43 06 31         [24]  878 	orl	ar6,#0x31
      0001FA 8E DB            [24]  879 	mov	_CCAPM1,r6
                                    880 ;	main.c:62: CCON |= 0x40; //turn counter on 
      0001FC AE D8            [24]  881 	mov	r6,_CCON
      0001FE 7F 00            [12]  882 	mov	r7,#0x00
      000200 43 06 40         [24]  883 	orl	ar6,#0x40
      000203 8E D8            [24]  884 	mov	_CCON,r6
                                    885 ;	main.c:63: while (1) 
      000205                        886 00104$:
                                    887 ;	main.c:66: clearLCD();
      000205 12 07 F8         [24]  888 	lcall	_clearLCD
                                    889 ;	main.c:72: int avg = get_average(RPM_motor);
      000208 85 0E 82         [24]  890 	mov	dpl,_RPM_motor
      00020B 85 0F 83         [24]  891 	mov	dph,(_RPM_motor + 1)
      00020E 12 01 13         [24]  892 	lcall	_get_average
                                    893 ;	main.c:74: RPM_calc = (int)P2;//((256.0-(float)P2)/256.0)*5.0*2.4*10;
      000211 85 A0 10         [24]  894 	mov	_RPM_calc,_P2
      000214 75 11 00         [24]  895 	mov	(_RPM_calc + 1),#0x00
                                    896 ;	main.c:75: int error =  (int)RPM_calc - (int)RPM_motor;
      000217 E5 10            [12]  897 	mov	a,_RPM_calc
      000219 C3               [12]  898 	clr	c
      00021A 95 0E            [12]  899 	subb	a,_RPM_motor
      00021C F5 22            [12]  900 	mov	_main_error_131074_40,a
      00021E E5 11            [12]  901 	mov	a,(_RPM_calc + 1)
      000220 95 0F            [12]  902 	subb	a,(_RPM_motor + 1)
      000222 F5 23            [12]  903 	mov	(_main_error_131074_40 + 1),a
                                    904 ;	main.c:77: CCAP0H = (CCAP0H)+(int)(256-((256*((Kp*error)+(Kd*(error-prev_error))))/(5*2.4*23.33)));
      000224 85 22 82         [24]  905 	mov	dpl,_main_error_131074_40
      000227 85 23 83         [24]  906 	mov	dph,(_main_error_131074_40 + 1)
      00022A 12 0A 11         [24]  907 	lcall	___sint2fs
      00022D AA 82            [24]  908 	mov	r2,dpl
      00022F AB 83            [24]  909 	mov	r3,dph
      000231 AC F0            [24]  910 	mov	r4,b
      000233 FD               [12]  911 	mov	r5,a
      000234 C0 02            [24]  912 	push	ar2
      000236 C0 03            [24]  913 	push	ar3
      000238 C0 04            [24]  914 	push	ar4
      00023A C0 05            [24]  915 	push	ar5
      00023C 90 99 9A         [24]  916 	mov	dptr,#0x999a
      00023F 75 F0 99         [24]  917 	mov	b,#0x99
      000242 74 3E            [12]  918 	mov	a,#0x3e
      000244 12 04 7C         [24]  919 	lcall	___fsmul
      000247 AA 82            [24]  920 	mov	r2,dpl
      000249 AB 83            [24]  921 	mov	r3,dph
      00024B AC F0            [24]  922 	mov	r4,b
      00024D FD               [12]  923 	mov	r5,a
      00024E E5 81            [12]  924 	mov	a,sp
      000250 24 FC            [12]  925 	add	a,#0xfc
      000252 F5 81            [12]  926 	mov	sp,a
      000254 E5 22            [12]  927 	mov	a,_main_error_131074_40
      000256 C3               [12]  928 	clr	c
      000257 95 1C            [12]  929 	subb	a,_prev_error
      000259 F5 82            [12]  930 	mov	dpl,a
      00025B E5 23            [12]  931 	mov	a,(_main_error_131074_40 + 1)
      00025D 95 1D            [12]  932 	subb	a,(_prev_error + 1)
      00025F F5 83            [12]  933 	mov	dph,a
      000261 C0 05            [24]  934 	push	ar5
      000263 C0 04            [24]  935 	push	ar4
      000265 C0 03            [24]  936 	push	ar3
      000267 C0 02            [24]  937 	push	ar2
      000269 12 0A 11         [24]  938 	lcall	___sint2fs
      00026C A8 82            [24]  939 	mov	r0,dpl
      00026E A9 83            [24]  940 	mov	r1,dph
      000270 AE F0            [24]  941 	mov	r6,b
      000272 FF               [12]  942 	mov	r7,a
      000273 C0 00            [24]  943 	push	ar0
      000275 C0 01            [24]  944 	push	ar1
      000277 C0 06            [24]  945 	push	ar6
      000279 C0 07            [24]  946 	push	ar7
      00027B 90 CC CD         [24]  947 	mov	dptr,#0xcccd
      00027E 75 F0 CC         [24]  948 	mov	b,#0xcc
      000281 74 3D            [12]  949 	mov	a,#0x3d
      000283 12 04 7C         [24]  950 	lcall	___fsmul
      000286 A8 82            [24]  951 	mov	r0,dpl
      000288 A9 83            [24]  952 	mov	r1,dph
      00028A AE F0            [24]  953 	mov	r6,b
      00028C FF               [12]  954 	mov	r7,a
      00028D E5 81            [12]  955 	mov	a,sp
      00028F 24 FC            [12]  956 	add	a,#0xfc
      000291 F5 81            [12]  957 	mov	sp,a
      000293 D0 02            [24]  958 	pop	ar2
      000295 D0 03            [24]  959 	pop	ar3
      000297 D0 04            [24]  960 	pop	ar4
      000299 D0 05            [24]  961 	pop	ar5
      00029B C0 00            [24]  962 	push	ar0
      00029D C0 01            [24]  963 	push	ar1
      00029F C0 06            [24]  964 	push	ar6
      0002A1 C0 07            [24]  965 	push	ar7
      0002A3 8A 82            [24]  966 	mov	dpl,r2
      0002A5 8B 83            [24]  967 	mov	dph,r3
      0002A7 8C F0            [24]  968 	mov	b,r4
      0002A9 ED               [12]  969 	mov	a,r5
      0002AA 12 05 80         [24]  970 	lcall	___fsadd
      0002AD AC 82            [24]  971 	mov	r4,dpl
      0002AF AD 83            [24]  972 	mov	r5,dph
      0002B1 AE F0            [24]  973 	mov	r6,b
      0002B3 FF               [12]  974 	mov	r7,a
      0002B4 E5 81            [12]  975 	mov	a,sp
      0002B6 24 FC            [12]  976 	add	a,#0xfc
      0002B8 F5 81            [12]  977 	mov	sp,a
      0002BA C0 04            [24]  978 	push	ar4
      0002BC C0 05            [24]  979 	push	ar5
      0002BE C0 06            [24]  980 	push	ar6
      0002C0 C0 07            [24]  981 	push	ar7
      0002C2 90 00 00         [24]  982 	mov	dptr,#0x0000
      0002C5 75 F0 80         [24]  983 	mov	b,#0x80
      0002C8 74 43            [12]  984 	mov	a,#0x43
      0002CA 12 04 7C         [24]  985 	lcall	___fsmul
      0002CD AC 82            [24]  986 	mov	r4,dpl
      0002CF AD 83            [24]  987 	mov	r5,dph
      0002D1 AE F0            [24]  988 	mov	r6,b
      0002D3 FF               [12]  989 	mov	r7,a
      0002D4 E5 81            [12]  990 	mov	a,sp
      0002D6 24 FC            [12]  991 	add	a,#0xfc
      0002D8 F5 81            [12]  992 	mov	sp,a
      0002DA 74 E1            [12]  993 	mov	a,#0xe1
      0002DC C0 E0            [24]  994 	push	acc
      0002DE 74 FA            [12]  995 	mov	a,#0xfa
      0002E0 C0 E0            [24]  996 	push	acc
      0002E2 74 8B            [12]  997 	mov	a,#0x8b
      0002E4 C0 E0            [24]  998 	push	acc
      0002E6 74 43            [12]  999 	mov	a,#0x43
      0002E8 C0 E0            [24] 1000 	push	acc
      0002EA 8C 82            [24] 1001 	mov	dpl,r4
      0002EC 8D 83            [24] 1002 	mov	dph,r5
      0002EE 8E F0            [24] 1003 	mov	b,r6
      0002F0 EF               [12] 1004 	mov	a,r7
      0002F1 12 12 34         [24] 1005 	lcall	___fsdiv
      0002F4 AC 82            [24] 1006 	mov	r4,dpl
      0002F6 AD 83            [24] 1007 	mov	r5,dph
      0002F8 AE F0            [24] 1008 	mov	r6,b
      0002FA FF               [12] 1009 	mov	r7,a
      0002FB E5 81            [12] 1010 	mov	a,sp
      0002FD 24 FC            [12] 1011 	add	a,#0xfc
      0002FF F5 81            [12] 1012 	mov	sp,a
      000301 C0 04            [24] 1013 	push	ar4
      000303 C0 05            [24] 1014 	push	ar5
      000305 C0 06            [24] 1015 	push	ar6
      000307 C0 07            [24] 1016 	push	ar7
      000309 90 00 00         [24] 1017 	mov	dptr,#0x0000
      00030C 75 F0 80         [24] 1018 	mov	b,#0x80
      00030F 74 43            [12] 1019 	mov	a,#0x43
      000311 12 04 71         [24] 1020 	lcall	___fssub
      000314 AC 82            [24] 1021 	mov	r4,dpl
      000316 AD 83            [24] 1022 	mov	r5,dph
      000318 AE F0            [24] 1023 	mov	r6,b
      00031A FF               [12] 1024 	mov	r7,a
      00031B E5 81            [12] 1025 	mov	a,sp
      00031D 24 FC            [12] 1026 	add	a,#0xfc
      00031F F5 81            [12] 1027 	mov	sp,a
      000321 8C 82            [24] 1028 	mov	dpl,r4
      000323 8D 83            [24] 1029 	mov	dph,r5
      000325 8E F0            [24] 1030 	mov	b,r6
      000327 EF               [12] 1031 	mov	a,r7
      000328 12 0A 1E         [24] 1032 	lcall	___fs2sint
      00032B AF 82            [24] 1033 	mov	r7,dpl
      00032D AE FA            [24] 1034 	mov	r6,_CCAP0H
      00032F EF               [12] 1035 	mov	a,r7
      000330 2E               [12] 1036 	add	a,r6
      000331 F5 FA            [12] 1037 	mov	_CCAP0H,a
                                   1038 ;	main.c:79: if(time_diff != 0){RPM_motor = (int)60.0/(((float)time_diff)*1E-6*960);}
      000333 E5 0C            [12] 1039 	mov	a,_time_diff
      000335 45 0D            [12] 1040 	orl	a,(_time_diff + 1)
      000337 60 60            [24] 1041 	jz	00102$
      000339 85 0C 82         [24] 1042 	mov	dpl,_time_diff
      00033C 85 0D 83         [24] 1043 	mov	dph,(_time_diff + 1)
      00033F 12 0A 11         [24] 1044 	lcall	___sint2fs
      000342 AC 82            [24] 1045 	mov	r4,dpl
      000344 AD 83            [24] 1046 	mov	r5,dph
      000346 AE F0            [24] 1047 	mov	r6,b
      000348 FF               [12] 1048 	mov	r7,a
      000349 C0 04            [24] 1049 	push	ar4
      00034B C0 05            [24] 1050 	push	ar5
      00034D C0 06            [24] 1051 	push	ar6
      00034F C0 07            [24] 1052 	push	ar7
      000351 90 A8 82         [24] 1053 	mov	dptr,#0xa882
      000354 75 F0 7B         [24] 1054 	mov	b,#0x7b
      000357 74 3A            [12] 1055 	mov	a,#0x3a
      000359 12 04 7C         [24] 1056 	lcall	___fsmul
      00035C AC 82            [24] 1057 	mov	r4,dpl
      00035E AD 83            [24] 1058 	mov	r5,dph
      000360 AE F0            [24] 1059 	mov	r6,b
      000362 FF               [12] 1060 	mov	r7,a
      000363 E5 81            [12] 1061 	mov	a,sp
      000365 24 FC            [12] 1062 	add	a,#0xfc
      000367 F5 81            [12] 1063 	mov	sp,a
      000369 C0 04            [24] 1064 	push	ar4
      00036B C0 05            [24] 1065 	push	ar5
      00036D C0 06            [24] 1066 	push	ar6
      00036F C0 07            [24] 1067 	push	ar7
      000371 90 00 00         [24] 1068 	mov	dptr,#0x0000
      000374 75 F0 70         [24] 1069 	mov	b,#0x70
      000377 74 42            [12] 1070 	mov	a,#0x42
      000379 12 12 34         [24] 1071 	lcall	___fsdiv
      00037C AC 82            [24] 1072 	mov	r4,dpl
      00037E AD 83            [24] 1073 	mov	r5,dph
      000380 AE F0            [24] 1074 	mov	r6,b
      000382 FF               [12] 1075 	mov	r7,a
      000383 E5 81            [12] 1076 	mov	a,sp
      000385 24 FC            [12] 1077 	add	a,#0xfc
      000387 F5 81            [12] 1078 	mov	sp,a
      000389 8C 82            [24] 1079 	mov	dpl,r4
      00038B 8D 83            [24] 1080 	mov	dph,r5
      00038D 8E F0            [24] 1081 	mov	b,r6
      00038F EF               [12] 1082 	mov	a,r7
      000390 12 0A 1E         [24] 1083 	lcall	___fs2sint
      000393 85 82 0E         [24] 1084 	mov	_RPM_motor,dpl
      000396 85 83 0F         [24] 1085 	mov	(_RPM_motor + 1),dph
      000399                       1086 00102$:
                                   1087 ;	main.c:81: prev_error = error;
      000399 85 22 1C         [24] 1088 	mov	_prev_error,_main_error_131074_40
      00039C 85 23 1D         [24] 1089 	mov	(_prev_error + 1),(_main_error_131074_40 + 1)
                                   1090 ;	main.c:85: sprintf(out, "%d", (int)RPM_motor);
      00039F C0 0E            [24] 1091 	push	_RPM_motor
      0003A1 C0 0F            [24] 1092 	push	(_RPM_motor + 1)
      0003A3 74 C6            [12] 1093 	mov	a,#___str_0
      0003A5 C0 E0            [24] 1094 	push	acc
      0003A7 74 14            [12] 1095 	mov	a,#(___str_0 >> 8)
      0003A9 C0 E0            [24] 1096 	push	acc
      0003AB 74 80            [12] 1097 	mov	a,#0x80
      0003AD C0 E0            [24] 1098 	push	acc
      0003AF 74 24            [12] 1099 	mov	a,#_main_out_131075_42
      0003B1 C0 E0            [24] 1100 	push	acc
      0003B3 74 00            [12] 1101 	mov	a,#(_main_out_131075_42 >> 8)
      0003B5 C0 E0            [24] 1102 	push	acc
      0003B7 74 40            [12] 1103 	mov	a,#0x40
      0003B9 C0 E0            [24] 1104 	push	acc
      0003BB 12 06 86         [24] 1105 	lcall	_sprintf
      0003BE E5 81            [12] 1106 	mov	a,sp
      0003C0 24 F8            [12] 1107 	add	a,#0xf8
      0003C2 F5 81            [12] 1108 	mov	sp,a
                                   1109 ;	main.c:87: setLCDPos(0);
      0003C4 75 82 00         [24] 1110 	mov	dpl,#0x00
      0003C7 12 08 17         [24] 1111 	lcall	_setLCDPos
                                   1112 ;	main.c:88: writeLineLCD("RPM:");
      0003CA 90 14 C9         [24] 1113 	mov	dptr,#___str_1
      0003CD 75 F0 80         [24] 1114 	mov	b,#0x80
      0003D0 12 07 C0         [24] 1115 	lcall	_writeLineLCD
                                   1116 ;	main.c:89: setLCDPos(4);
      0003D3 75 82 04         [24] 1117 	mov	dpl,#0x04
      0003D6 12 08 17         [24] 1118 	lcall	_setLCDPos
                                   1119 ;	main.c:90: writeLineLCD(out);
      0003D9 90 00 24         [24] 1120 	mov	dptr,#_main_out_131075_42
      0003DC 75 F0 40         [24] 1121 	mov	b,#0x40
      0003DF 12 07 C0         [24] 1122 	lcall	_writeLineLCD
                                   1123 ;	main.c:92: sprintf(out, "%d", (int)RPM_calc);
      0003E2 C0 10            [24] 1124 	push	_RPM_calc
      0003E4 C0 11            [24] 1125 	push	(_RPM_calc + 1)
      0003E6 74 C6            [12] 1126 	mov	a,#___str_0
      0003E8 C0 E0            [24] 1127 	push	acc
      0003EA 74 14            [12] 1128 	mov	a,#(___str_0 >> 8)
      0003EC C0 E0            [24] 1129 	push	acc
      0003EE 74 80            [12] 1130 	mov	a,#0x80
      0003F0 C0 E0            [24] 1131 	push	acc
      0003F2 74 24            [12] 1132 	mov	a,#_main_out_131075_42
      0003F4 C0 E0            [24] 1133 	push	acc
      0003F6 74 00            [12] 1134 	mov	a,#(_main_out_131075_42 >> 8)
      0003F8 C0 E0            [24] 1135 	push	acc
      0003FA 74 40            [12] 1136 	mov	a,#0x40
      0003FC C0 E0            [24] 1137 	push	acc
      0003FE 12 06 86         [24] 1138 	lcall	_sprintf
      000401 E5 81            [12] 1139 	mov	a,sp
      000403 24 F8            [12] 1140 	add	a,#0xf8
      000405 F5 81            [12] 1141 	mov	sp,a
                                   1142 ;	main.c:93: setLCDPos(8);
      000407 75 82 08         [24] 1143 	mov	dpl,#0x08
      00040A 12 08 17         [24] 1144 	lcall	_setLCDPos
                                   1145 ;	main.c:94: writeLineLCD("EXP:");
      00040D 90 14 CE         [24] 1146 	mov	dptr,#___str_2
      000410 75 F0 80         [24] 1147 	mov	b,#0x80
      000413 12 07 C0         [24] 1148 	lcall	_writeLineLCD
                                   1149 ;	main.c:95: setLCDPos(12);
      000416 75 82 0C         [24] 1150 	mov	dpl,#0x0c
      000419 12 08 17         [24] 1151 	lcall	_setLCDPos
                                   1152 ;	main.c:96: writeLineLCD(out);
      00041C 90 00 24         [24] 1153 	mov	dptr,#_main_out_131075_42
      00041F 75 F0 40         [24] 1154 	mov	b,#0x40
      000422 12 07 C0         [24] 1155 	lcall	_writeLineLCD
                                   1156 ;	main.c:98: sprintf(out, "%d", error);
      000425 C0 22            [24] 1157 	push	_main_error_131074_40
      000427 C0 23            [24] 1158 	push	(_main_error_131074_40 + 1)
      000429 74 C6            [12] 1159 	mov	a,#___str_0
      00042B C0 E0            [24] 1160 	push	acc
      00042D 74 14            [12] 1161 	mov	a,#(___str_0 >> 8)
      00042F C0 E0            [24] 1162 	push	acc
      000431 74 80            [12] 1163 	mov	a,#0x80
      000433 C0 E0            [24] 1164 	push	acc
      000435 74 24            [12] 1165 	mov	a,#_main_out_131075_42
      000437 C0 E0            [24] 1166 	push	acc
      000439 74 00            [12] 1167 	mov	a,#(_main_out_131075_42 >> 8)
      00043B C0 E0            [24] 1168 	push	acc
      00043D 74 40            [12] 1169 	mov	a,#0x40
      00043F C0 E0            [24] 1170 	push	acc
      000441 12 06 86         [24] 1171 	lcall	_sprintf
      000444 E5 81            [12] 1172 	mov	a,sp
      000446 24 F8            [12] 1173 	add	a,#0xf8
      000448 F5 81            [12] 1174 	mov	sp,a
                                   1175 ;	main.c:99: setLCDPos(16);
      00044A 75 82 10         [24] 1176 	mov	dpl,#0x10
      00044D 12 08 17         [24] 1177 	lcall	_setLCDPos
                                   1178 ;	main.c:100: writeLineLCD("ERROR:");
      000450 90 14 D3         [24] 1179 	mov	dptr,#___str_3
      000453 75 F0 80         [24] 1180 	mov	b,#0x80
      000456 12 07 C0         [24] 1181 	lcall	_writeLineLCD
                                   1182 ;	main.c:101: setLCDPos(22);
      000459 75 82 16         [24] 1183 	mov	dpl,#0x16
      00045C 12 08 17         [24] 1184 	lcall	_setLCDPos
                                   1185 ;	main.c:102: writeLineLCD(out);
      00045F 90 00 24         [24] 1186 	mov	dptr,#_main_out_131075_42
      000462 75 F0 40         [24] 1187 	mov	b,#0x40
      000465 12 07 C0         [24] 1188 	lcall	_writeLineLCD
                                   1189 ;	main.c:105: delay(100000);	
      000468 90 86 A0         [24] 1190 	mov	dptr,#0x86a0
      00046B 12 06 D4         [24] 1191 	lcall	_delay
                                   1192 ;	main.c:108: }
      00046E 02 02 05         [24] 1193 	ljmp	00104$
                                   1194 	.area CSEG    (CODE)
                                   1195 	.area CONST   (CODE)
      0014C6                       1196 ___str_0:
      0014C6 25 64                 1197 	.ascii "%d"
      0014C8 00                    1198 	.db 0x00
      0014C9                       1199 ___str_1:
      0014C9 52 50 4D 3A           1200 	.ascii "RPM:"
      0014CD 00                    1201 	.db 0x00
      0014CE                       1202 ___str_2:
      0014CE 45 58 50 3A           1203 	.ascii "EXP:"
      0014D2 00                    1204 	.db 0x00
      0014D3                       1205 ___str_3:
      0014D3 45 52 52 4F 52 3A     1206 	.ascii "ERROR:"
      0014D9 00                    1207 	.db 0x00
                                   1208 	.area XINIT   (CODE)
                                   1209 	.area CABS    (ABS,CODE)

/*
Functions finded in Ghidra:

long FUN_001019d2(...)
void FUN_00101b58(void)
void FUN_00101c16(void)
void processEntry entry(void)
void FUN_00101994(undefined4 *param_1,undefined8 param_2,undefined8 param_3,uint param_4);
long FUN_001019d2(uint *param_1,uint *param_2,undefined8 param_3,ulong param_4,char param_5,
                 undefined8 param_6,long param_7,int param_8,int *param_9)

----------------------------------
*/

#include<stdio.h>
#include<string.h>

/* WARNING: Removing unreachable block (ram,0x00101986) */

void processEntry entry(void)
{
  undefined8 in_RCX;
  undefined extraout_DL;
  undefined7 extraout_var;
  long in_RSI;
  long in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  
  FUN_00101c16();
  FUN_001019d2(CONCAT71(extraout_var,extraout_DL),in_RDI,extraout_DL,0,in_R8,in_R9,in_RSI + in_RDI,
               CONCAT71(extraout_var,extraout_DL),in_RCX);
  return;
}

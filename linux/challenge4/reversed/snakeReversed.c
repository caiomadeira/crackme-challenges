#include<stdio.h>
#include<stdlib.h>


void FUN_00101b58(void)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  code *unaff_RBP;
  long alStack_40 [8];
  
  while( true ) {
    lVar7 = *(long *)register0x00000020;
    *(undefined8 *)register0x00000020 = 2;
    syscall();
    if (-1 < (int)*(undefined8 *)register0x00000020) break;
    *(undefined8 *)register0x00000020 = 0xe;
    *(long *)register0x00000020 = lVar7;
    *(undefined8 *)register0x00000020 = 2;
    *(undefined8 *)register0x00000020 = 1;
    syscall();
    *(undefined8 *)register0x00000020 = 0x7f;
    *(undefined8 *)register0x00000020 = 0x3c;
    syscall();
    register0x00000020 = (BADSPACEBASE *)((long)register0x 00000020 + 8);
  }
  *(undefined8 *)register0x00000020 = *(undefined8 *)register 0x00000020;
  *(uint **)((long)register0x00000020 + -8) = (uint *)(lVar7 + 0 x13);
  puVar2 = *(undefined4 **)((long)register0x00000020 + -8);
  uVar1 = *(uint *)(lVar7 + 0x1b);
  lVar6 = (long)(unaff_RBP + -0xb) - (ulong)*(uint *)(unaff_RBP + -0xb);
  uVar3 = *(undefined8 *)register0x00000020;
  lVar7 = (long)puVar2 + ((ulong)*(uint *)(lVar7 + 0x13) - lVar6 );
  *(long *)register0x00000020 = lVar7;
  *(ulong *)((long)register0x00000020 + -8) = (ulong)uVar1;
  *(undefined8 *)((long)register0x00000020 + -0x10) = uVar3;
  *(long *)((long)register0x00000020 + -0x18) = lVar6;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x22;
  *(long *)((long)register0x00000020 + -0x20) = lVar7;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 3;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 9;
  syscall();
  *(long *)((long)register0x00000020 + -8) = *(long *)((long)reg ister0x00000020 + -0x20);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x12;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 9;
  lVar7 = *(long *)((long)register0x00000020 + -0x20);
  syscall();
  lVar6 = *(long *)((long)register0x00000020 + -0x18);
  *(long *)((long)register0x00000020 + -0x18) = lVar6;
  lVar6 = lVar7 - lVar6;
  *(code **)((long)register0x00000020 + -0x20) = unaff_RBP + l Var6;
  uVar4 = (ulong)(unaff_RBP + lVar6) & 0xfffffffffffff000;
  *(ulong *)((long)register0x00000020 + -0x28) = uVar4;
  *(ulong *)((long)register0x00000020 + -0x30) = (*(long *)regi ster0x00000020 + lVar7) - uVar4;
  uVar5 = (undefined4)(uVar4 >> 0x20);
  *(ulong *)((long)register0x00000020 + -0x38) = CONCAT44(u Var5,*puVar2);
  UNRECOVERED_JUMPTABLE = (code *)((long)puVar2 + lVar 6);
  *(ulong *)((long)register0x00000020 + -0x40) = CONCAT44(u Var5,puVar2[1]);
  uVar5 = puVar2[2];
  uVar3 = *(long *)((long)register0x00000020 + -0x40);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x101c 07;
  (*unaff_RBP)(puVar2 + 3,uVar3,UNRECOVERED_JUMPTABLE ,(long *)((long)register0x00000020 + -0x38),
               uVar5,0);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 5;
  uVar3 = *(long *)((long)register0x00000020 + -0x20);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 10;
  syscall();
                    /* WARNING: Could not recover jumptable at 0x00 101c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long *)((long)register0x00000020 + -0x28),*(long *)(( long)register0x00000020 + -0x30)
             ,uVar3,*(long *)((long)register0x00000020 + -0x38));
  return;
}


void FUN_00101c16(void)
{
  FUN_00101b58();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


int main(void)
{
  undefined8 in_RCX;
  undefined extraout_DL;
  undefined7 extraout_var;
  long in_RSI;
  long in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  
  FUN_00101c16();
  FUN_001019d2(CONCAT71(extraout_var,extraout_DL),in_RDI ,extraout_DL,0,in_R8,in_R9,in_RSI + in_RDI,
               CONCAT71(extraout_var,extraout_DL),in_RCX);
  return;
}
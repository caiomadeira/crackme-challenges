#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct 
{
    char buffer[10];
} F;

F f;

char * strcat_str(void) // undefined1 * strcat_str(void)
{
  int i; // int local_c;
  f.buffer[0] = '!'; // f.2605 = 0x21; 0x21 = 33; 33 = '!' na tabela ASCII
  for (i = 1; i < 10; i = i + 1) 
  {
    f.buffer[i] = (char)i + (f.buffer)[i + -1] +  1; // x01 = 1
  }
  return f.buffer;
}

int main(void)
{
  size_t len; // sVar1
  unsigned long x; // ulong uVar2;
  char str[112]; // char local_98[112];
  char* y; // long local_28;
  int i; // int local_20;
  int j; // int local_1c;
  
  j = 0;
  puts("enter the magic string");
  fgets(str, 100, stdin);
  len = strlen(str);
  if (len < 12) // 0xc = 12
  {
    i = 0;
    while(true) {
      x = (unsigned long)i;
      len = strlen(str);
      if (len <= x) 
      {
        printf("len: %d, x(i): %d\n", (int)len, (int)x);
        break;
      }
      j = j + str[i];
      printf("%d + %c(%d)\n", j, str[i], str[i]);
      printf("j = %d\n", j);
      i = i + 1;
      printf("i = %d\n", i);
    }
    if (j == 1000) {
      y = strcat_str();
      printf("flag is flag{");
      for (i = 0; i < 10; i = i + 1) {
        putchar((int)*(char *)(y + i));
      }
      puts("}");
    }
    else {
      puts("wrong string\nNo flag for you.");
    }
  }
  else {
    puts("too long...sorry no flag for you!!!");
  }
  return 0;
}

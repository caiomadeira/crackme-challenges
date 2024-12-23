/*

Resposta:

Para gerar a keyge, a string deve ser de tamanho 16 e a sua logica
de formação se da pelo seguinte:
Para todo numero, a sua subtração com o seu sucessor deve ser igual a -1

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void usage(char* argv)
{
    printf("%s [SERIAL]\n", argv);
    /* WARNING: Subroutine dos not return */
    exit(-1);
}

int checkSerial(char *argv)
{
  size_t len;
  int result;
  int i;
  
/* This function checks the serial*/
  len = strlen(argv);
  //if (len == 0x10) 
  if (len == 16) 
  {
    printf("serial is equal to 16\n");
    for (i = 0; len = strlen(argv), i < len; i = i + 2) 
    {
        printf("%c - %c = %d \n", argv[i], argv[i + 1], argv[i] - argv[i + 1]);
      if (argv[i] - argv[i + 1] != -1) 
      {
        return -1;
      }
    }
    result = 0;
  }
  else {
    //result = 0xffffffff;
    printf("serial is above 16\n");
    result = -1;
  }
  return result;
}

int main(int argc, char**argv)
{
    int x;

    if (argc != 2) {
        usage(*argv);
    }

    x = checkSerial(argv[1]);
    if (x == 0) {
        puts("Good Serial");
        x = 0;
    } else {
        puts("Bad Serial");
        x = -1;
    }
    return x;
}
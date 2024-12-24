#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void login(void)
{
    char* s;
    unsigned int * x;

    printf("enter password: ");
    s = (char*)malloc(16); // 0x10 = 16
    x = (unsigned int*) malloc(8);
    *x = 1;
    /*
    Aqui a leitura de 160bytes no fgets esta tentando preencher um buffer de apenas
    16 bytes definido anteriormente, o que causaria um overflow de buffer.
    */
    // fgets(s, 160, stdin); // 0xa0 = 160 // overflow de buffer 
    fgets(s, 160, stdin); // 0xa0 = 160 // overflow de buffer 
    printf("uid: %d\n", (int)*x);
    if (*x == 0) {
        puts("you are logged in as admin");
    }
    else {
        puts("you are logged in as user");
    }
    return;
}

int main(void)
{
    login();
    return 0;
}
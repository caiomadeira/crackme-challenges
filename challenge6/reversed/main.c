#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shiftBinaryStr(char *argv)
{
    size_t len;
    void* p;
    char* s;
    int i;

    len = strlen(argv); // Armazena o tamanho da string vinda por parametro
    s = malloc(len + 1); // alloca um espaço na memoria do tamanho da string + null terminator
    s = (char*)memset(p, 0, len + 1); // preenche com zeros o n valores (len + 1) a região da memoria de ponto *p
    s = strcpy(s, argv); // copia o argv para a regiao da memoria da string alocada
    i = 0; // inicia o contador
    while(s[i] != '\0') // comeca a percorrer a string
    {
        // usei uint8_t no lugar de byte
        /*
        converte o valor armazenado em s[i] (caracter atual) para o tipo __uint8_t, que o tipo inteiro
        sem final de 8 bits (um byte). 

        >> 1: faz uma operação de deslocamento de bits do valor em s[i] uma posição a direita.
        Reduz o valor em s[i] pela metade (divisão por 2), ignorando qualquer parte fracionária. 
        Isso porque o deslocamento à direita em binário é equivalente a uma divisão inteira por 2 para 
        números sem sinal.
        */
        s[i] = (__uint8_t)s[i] >> 1; 
        i++;
    }
    printf("%s\n", s);
    free(s); // libera
    return;
}

/*
Copia os caracteres em ordem inversa, mas com um comportamento peculiar:
Inverte a direção (j) e reinicia (i) após processar toda a string.
Isso causa um comportamento difícil de prever, provavelmente repetindo ou sobreescrevendo dados.

*/
void * strangeInvertingString(char *argv) // Recebe uma string do usuario
{
    size_t len; // Armazena o comprimento da str
    void* p; // ponteiro nulo
    char c; 
    int i;
    int j;

    len = strlen(argv);

    i = 0; // i representa o inicio da string
    j = len - 1; // representa o final da string (o tamanho menos o '\0')
    c = -2; // é inicializado como -2 (essa variavel controla a mudanca no indice)

    p = malloc(len + 1); // aloca memoria p/ string
    p = memset(p, 0, len + 1); // iniciaza o espaco na memoria apontado por *p com zeros.
    for(; i < len; i++)
    {
        *(char*)(i + (int)p) = argv[j] + -32; // passa o caractere em argv[j] para a posicao i na memoria apontada por *p
        j = j + c; // j é decrementado
        if (j == -1) // quando j é -1, ele percorreu toda a string de tras pra frente
        {
            i = 0; // assim, i é reiniciado pra 0
            c = -c; // o valor de c é invertido (c = 2), alterando a direcao de j
        }
    }
    return p;
}


// Função responsável por formatar a string recebida pelo usuario.
void formatString(char* argv)
{
    void* p;
    char* strFormat;
    long i;

    p = malloc(18); // Aloca 18 bytes de espaço na memória para o pointeiro
    strFormat = (char*)memset(p, 0, 18); // Preenche os primeiros 18 bytes do bloco, apontado por *p, com o valor 0.
    strncpy(strFormat, "a\x7fmsqF,1\x7f,HrxmsJ\x16", 18); // Copia uma sequencia de caracteres para o array. Copia ate n caracteres da sequencia (n = 18).
    i = 0;
    // Percorre a string
    while(strFormat[i] != '\0')
    {
        strFormat[i] = strFormat[i] + -12; // O caractere atual é subtraido com 12; Se for a = 97 -> 97 + (-12) = 85 -> 85 corresponde ao caractere 'U'. 
        i = i + 1;
    }
    printf("%s, %s", strFormat, argv);
    free(strFormat);
    return;
}

int main(int argc, char** argv)
{
    int x;
    int y;
    size_t len;
    char* str;

    if (argc == 1)
    {
        formatString(argv);
        y = 1;
    }
    else 
    {
        len = strlen((char*)argv[1]);
        if ((len & 1) == 0)
        {
            str = (char*)strangeInvertingString(argv[1]);
            x = strcmp(_867a0be1_691e_4546_9b6c_020df3bcdc93, str);
            if (x == 0)
            {
                shiftBinaryStr(argv);
                y = 0;
            }
            else 
            {
                // TODO: Decypher this: _dbf69e5f_8300_41c9_8c80_02a819c56349
                _a97962fc_d68f_47c5_9221_d17da57166a4(_dbf69e5f_8300_41c9_8c80_02a819c56349);
                y = 1;
            }
        }
    }
    else 
    {
       _a97962fc_d68f_47c5_9221_d17da57166a4(_dbf69e5f_8300_41c9_8c80_02a819c56349); 
       y = 1;
    }
    return y;
}
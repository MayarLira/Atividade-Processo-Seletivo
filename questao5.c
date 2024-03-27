#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char meuNome[6] = "Mayara";


    for(int i = 5; i>=0; i--)
    {
        printf("%c",meuNome[i]);
    }
    return 0;
}

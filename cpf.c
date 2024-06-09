#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cpf1[9];
    int  cpf2[9];

    int i,j,soma,resto,dac1,dac2,conta;
    soma=0;
    j=10;
    resto=0;
    dac1=0;
    conta=0;
    dac2=0;

    printf("\n Informe o CPF do Contribuinte");
    gets(cpf1);

    puts(cpf1);

// Calculamdo o Primeiro Digito

    for(i=0; i<9; i++)
    {
        cpf2[i] =cpf1[i] - '0';
    }

    for(i=0; i<9; i++)
    {
        soma =soma+(cpf2[i]*j);
        j--;

    }

    resto = soma%11;
    conta= 11-resto;
    if(conta >9)
    {
        dac1=0;

    }
    else
    {
        dac1=conta;
    }

// Calculando o segundo digito

  soma =0;
  j=11;
    for(i=0; i<9; i++)
    {
        soma =soma+(cpf2[i]*j);
        j--;

    }

    soma =soma+(dac1*2);

    resto = soma%11;
    conta= 11-resto;

    if(conta >9)
    {
        dac2=0;

    }
    else
    {
        dac2=conta;
    }



    printf("\n Primeiro Digito verificador %d",dac1);
    printf("\n Segundo Digito Verificador %d",dac2);
}

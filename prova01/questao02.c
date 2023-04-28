
#include<stdio.h>
#include<stdlib.h>
#include"questao02.h"


void questao02(void){

float salBruto,salLiq;

    entrada02(&salBruto);
    processamento02(&salBruto, &salLiq);
    saida02(&salLiq);
}

void entrada02(float *psalBtruto)
{
    printf("digite o salario bruto: ");
    scanf("%f", psalBtruto);
}

void processamento02(float *psalBruto, float *psalLiq)
{
if(*psalBruto < 2000){
        *psalLiq = *psalBruto*0.90;
}
else{
    *psalLiq = *psalBruto*0.80;
}
}

void saida02(float *psalLiq)
{

printf("O salário líquido e: %.2f", *psalLiq);
printf("\n");

}

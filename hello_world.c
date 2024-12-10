#include <stdio.h>

int main ()
{
    float salario, despesa_mensal, guardar, salario_anual, saldo_mensal, investimento, lazer, saldo_anual;
    int decimo;


    printf("---------SISTEMA DE INVESTIMENTO---------\nINFORME SEU SALARIO MENSAL: ");
    scanf("%f", &salario);
    printf("\nRecebe decimo terceiro?\n1) Sim\n2) Nao\nOpcao escolhida: ");
    scanf("%d",&decimo);


    printf("Insira sua despesa fixa mensal: ");
    scanf("%f", &despesa_mensal);

    printf("Qual a porcentagem do saldo restante você gostaria de guardar por mes?\nInsira somente numeros (ex: 25 ou 25.5)");
    scanf("%f", &guardar);

//CALCULO DO SALDO

    saldo_mensal = salario - despesa_mensal;
    investimento = saldo_mensal * (guardar/100);
    lazer = saldo_mensal - investimento;

    if (decimo == 1){
        salario_anual = salario * 13;
        saldo_anual = (investimento * 12) + salario;
    }
    else{
        salario_anual = salario * 12;
        saldo_anual = investimento * 12;
    }

//SAIDA DOS RESULTADOS

    

}



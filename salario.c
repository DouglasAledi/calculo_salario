#include <stdio.h>

float salarioBruto, aliquota1_inss, resultadoAliquota_inss, resultadoAliquota_ir;

int main(){
    // Calculadora de salário liquido //
    printf("Insira aqui seu salário: ");
    scanf("%f", &salarioBruto);

    // Desconto INSS //

    if(salarioBruto <= 1320.00){
        resultadoAliquota_inss = salarioBruto - (salarioBruto * 0.075);
    }

    else if(salarioBruto >= 1320.01 && salarioBruto <= 2571.29){
        resultadoAliquota_inss = salarioBruto - (salarioBruto * 0.09);
    }
    else if(salarioBruto >= 2571.30 && salarioBruto <= 3856.94){
        resultadoAliquota_inss = salarioBruto - (salarioBruto * 0.12);
    }
    else if(salarioBruto >= 3856.95 && salarioBruto <= 7507.49){
        resultadoAliquota_inss = salarioBruto - (salarioBruto * 0.14);
    }

    // Desconto IR //

    if (salarioBruto >= 1903.99 && salarioBruto <= 2826.65){
        resultadoAliquota_ir = resultadoAliquota_inss - (resultadoAliquota_inss * 0.075);
    }
    else if (salarioBruto >= 2826.66 && salarioBruto <= 3751.05)
    {
        resultadoAliquota_ir = resultadoAliquota_inss - (resultadoAliquota_inss * 0.15);
    }
    else if (salarioBruto >= 3751.06 && salarioBruto <= 4664.68)
    {
        resultadoAliquota_ir = resultadoAliquota_inss - (resultadoAliquota_inss * 0.225);
    }
    else if (salarioBruto >= 4664.68)
    {
        resultadoAliquota_ir = resultadoAliquota_inss - (resultadoAliquota_inss * 0.275);
    }

    printf("\nSeu salario e: \n %.2f", salarioBruto);
    printf("\nSeu salario menos o inss e: \n %.2f", resultadoAliquota_inss);
    printf("\nSeu salario menos o ir e: \n %.2f", resultadoAliquota_ir);
    
    return 0;
}
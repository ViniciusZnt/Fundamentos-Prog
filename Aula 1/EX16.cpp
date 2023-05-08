#include <stdio.h>

int main() {
    float salario_bruto, ir, inss, sindicato, descontos, salario_liquido;

    printf("Informe o salário bruto: R$ ");
    scanf("%f", &salario_bruto);

    ir = salario_bruto * 0.15;
    inss = salario_bruto * 0.11;
    sindicato = salario_bruto * 0.03;
    descontos = ir + inss + sindicato;
    salario_liquido = salario_bruto - descontos;

    printf("\nSalário Bruto\t: R$ %.2f", salario_bruto);
    printf("\n(-) IR\t\t(15%%)\t: R$ %.2f", ir);
    printf("\n(-) INSS\t(11%%)\t: R$ %.2f", inss);
    printf("\n(-) Sindicato\t(3%%)\t: R$ %.2f", sindicato);
    printf("\nSalário Liquido\t: R$ %.2f", salario_liquido);

    return 0;
}


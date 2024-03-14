#include <stdio.h>

int main() {
    const float IR = 0.25f,
        INSS = 0.11;

    float valor_hora_trabalho = 150.00f,
        horas_trabalhadas = 100.00f,
        salario_bruto = valor_hora_trabalho * horas_trabalhadas,
        ir_descontado = salario_bruto * IR,
        inss_descontado = salario_bruto * INSS,
        salario_liquido = salario_bruto - ir_descontado - inss_descontado;
    
    printf("-------------------------------\n");
    printf("\t\tCONTRACHEQUE\n");
    printf("Salário bruto:\t\t  R$ %8.2f\n", salario_bruto);
    printf("\033[38;5;125mDesconto IR:\t\t- R$ %8.2f\n\033[0m", ir_descontado);
    printf("\033[38;5;125mDesconto INSS:\t\t- R$ %8.2f\n\033[0m", inss_descontado);
    printf("\033[38;5;45mSalário liquido:\t  R$ %8.2f\n\33[0m", salario_liquido);

    return 0;
}
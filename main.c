#include <stdio.h>
#include <stdlib.h>

float somar(float a, float b)
float subtrair(float a, float b)
float multiplicar(float a, float b)
float dividir(float a, float b)


float somar(float a, float b) {
    return a + b; }

float subtrair(float a, float b) {
    return a - b; }

float multiplicar(float a, float b) {
    return a * b; }

float dividir(float a, float b) {
    if (b != 0) {
        return a / b; }
            else {
                printf("Erro: Divisão por zero!\n");
                exit(EXIT_FAILURE); } }

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Calculadora Simples\n");
    printf("Operações disponíveis:\n");
    printf(" + : Adição\n");
    printf(" - : Subtração\n");
    printf(" * : Multiplicação\n");
    printf(" / : Divisão\n");

    printf("Digite a operação (ex: 5 + 3): ");
    scanf("%f %c %f", &num1, &operacao, &num2);

    switch (operacao) {
        case '+':
            resultado = somar(num1, num2);
            break;
        case '-':
            resultado = subtrair(num1, num2);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            break;
        case '/':
            resultado = dividir(num1, num2);
            break;
        default:
            printf("Operação inválida!\n");
            return 1; }
  
  printf("Resultado: %.2f %c %.2f = %.2f\n", num1, operacao, num2, resultado);
    return 0; }

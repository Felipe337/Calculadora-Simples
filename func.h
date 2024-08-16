#include <stdio.h>
#include <stdlib.h>
#include "func.h"

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

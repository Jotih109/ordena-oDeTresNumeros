#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    // Definir os valores da variável
    float a, b, c;

    printf("Qual o valor de A?: ");
    scanf("%f", &a);

    printf("Qual o valor de B?: ");
    scanf("%f", &b);
    
    printf("Qual o valor de C?: ");
    scanf("%f", &c);

    if (b > c && c > a) {
        printf("%.0f > %.0f > %.0f\n", b, c, a);
    } 
    
    else if (b > a && a > c) {
        printf("%.0f > %.0f > %f.0\n", b, a, c);     
    }
    
    else if (c > a && a > b) {
        printf("%.0f > %.0f > %.0f\n", c, a, b);     
    }
    
    else if (c > b && b > a) {
        printf("%.0f > %.0f > %.0f\n", c, b, a);     
    }
    
    else if (a > c && c > b) {
        printf("%.0f > %.0f > %.0f\n", a, c, b);     
    }
    
    else {
         printf("%.0f > %.0f > %.0f\n", a, b, c);   
    }

    // Pausar o sistema quanto for mostrar o resultado
    system("pause");
    return 0;
}


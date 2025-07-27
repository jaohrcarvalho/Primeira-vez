#include <stdio.h>
#include <math.h>
float imc(float p, float a){
    return p / (pow(a,2));
}


int main () {
    float c, d, r;

    printf("==== CALCULADOR DE IMC ====\n");
    printf("Digite o valor do seu peso: ");
    scanf("%f", &c);
    printf("Digite o valor da sua altura: ");
    scanf("%f", &d);

    r = imc (c,d);

    printf("O valor do seu IMC e: %.2f.\n", r);
    printf("\n=== FIM DA EXECUCAO ===\n");
    
    return 0;
}
#include <stdio.h>

void emprestimo(float a, float b, float c){
    ///funcao que nao retorna valor tem que ser do tipo VOID. os valores devem ser declarados os tipos.

    float pa;

    pa = (a - b) / c;
    printf("\nValor do imovel: %.2f.\n", a);
    printf("Valor da entrada: %.2f.\n", b);
    printf("Valor das parcelas: %.2f.\n", pa);
}

int main () {

    float d, e, f;
    //As variaveis das funcoes nao podem ser as mesmas dos Main.

    printf("\n=== CONSORCIOS CAIXA ===\n");
    printf("Insira o valor do imovel: ");
    scanf("%f", &d);
    printf("Insira o valor da entrada: ");
    scanf("%f", &e);
    printf("Quantas parcelas? ");
    scanf("%f", &f);

    emprestimo (d, e, f);

    printf("\n=== FIM ALGORITIMO ===\n");

    return 0;

}
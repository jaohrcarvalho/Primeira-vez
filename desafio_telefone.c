#include <stdio.h>
#include <string.h>

main () {

    char nome [9][100], telefone[9][8];
    int tipo, min, i, opc;
    float conta, valores [3][2] = {{25.5, 0.10}, {35, 0.20}, {60, 0.30}};
 
    do{
        printf("--- Menu de Opcoes ---\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Ver Dados dos Clientes\n");
        printf("3. Sair\n");
        printf("----------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        if (opc >3) {printf("\nOPCAO INVALIDA!\n\n");}

        switch (opc){
            case (1): printf("Digite seu nome: ");
            scanf("%s", nome);
            printf("Digite seu telefone: ");
            scanf("%s", telefone);
            printf("Digite o tipo do seu plano: ");
            scanf("%d", &tipo); 
            printf("Digite o tempo de consumo ");
            scanf("%d", &min); 
            printf("\nCliente cadastrado!\nRETORNANDO AO MENU...\n\n");
            break;
        
        }

        switch (tipo){
            case 1: conta = valores[0][0] + valores[0][1]; break;
            case 2: conta = valores[1][0] + valores[1][1]; break;
            case 3: conta = valores[2][0] + valores[2][1]; break;
        }
    }
        while (opc !=3);

}
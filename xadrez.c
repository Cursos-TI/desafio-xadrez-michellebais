#include <stdio.h>

int main(){
    int casaRainha, casaBispo, casaTorre, peca, qdd;
    char direcao[20];

    printf("### X A D R E Z ###\n");
    printf("Qual peça você quer mover?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("\nDigite sua opção:  ");
    scanf("%d", &peca);
    printf("Quantas casas?  ");
    scanf("%d", &qdd);
    printf("Para qual direção (para espaço utilize _ )?  ");
    scanf("%s", &direcao);

    int i = 0;

    switch (peca){
    case 1:
        do {
        printf("%s\n", direcao); //Direção do movimento;
        i++; // incremento
        } while (i < qdd); //vai rodar até ser verdadeira.
        printf("A Torre andou %d para %s\n", qdd, direcao);
        break;
    case 2:
        for (i; i < qdd; i++){
        printf("%s\n", direcao); //Direção do movimento;
        }
        printf("O Bispo andou %d para %s\n", qdd, direcao);
        break;
    case 3:
        while (i < qdd){
        printf("%s\n", direcao); //Direção do movimento;
        i++; // incremento
        }
        printf("A Rainha andou %d para %s\n", qdd, direcao);
        break;
    
    default:
        printf("Opção Invalida");
        break;
    }

    return 0;
}

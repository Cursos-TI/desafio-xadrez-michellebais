#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int casaRainha, casaBispo, casaTorre, peca, qdd, qdd2;
    char direcao[20], direcao2[20];

    printf("### X A D R E Z ###\n");
    printf("Qual peça você quer mover?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("\nDigite sua opção:  ");
    scanf("%d", &peca);
    printf("Quantas casas?  ");
    scanf("%d", &qdd);

//Peremitir que o jogador escolha a peça, as casas, etc. 
    int i = 0;

    switch (peca){
    case 1:
        printf("Para qual direção (acima, abaixo, direita, esquerda)?  ");
        scanf("%s", direcao);
        do {
        printf("%s\n", direcao); //Direção do movimento;
        i++; // incremento
        } while (i < qdd); //vai rodar até ser verdadeira.
        printf("A Torre andou %d para %s\n", qdd, direcao);
        break;
    case 2:
        printf("Para qual direção (acima-dir, acima-esq, abaixo-dir, abaixo-esq)?  ");
        scanf("%s", direcao);
        for (i; i < qdd; i++){
        printf("%s\n", direcao); //Direção do movimento;
        }
        printf("O Bispo andou %d para %s\n", qdd, direcao);
        break;
    case 3:
        printf("Para qual direção (acima, abaixo, direita, esquerda,acima-dir, acima-esq, abaixo-dir, abaixo-esq)?  ");
        scanf("%s", direcao);
        while (i < qdd){
        printf("%s\n", direcao); //Direção do movimento;
        i++; // incremento
        }
        printf("A Rainha andou %d para %s\n", qdd, direcao);
        break;
    case 4:
        printf("Informe a 1ª direção (acima, abaixo, direita, esquerda)  ");
        scanf("%s", direcao);
        printf("Quantas casas?  ");
        scanf("%d", &qdd2);
        printf("Informe a 2ª direção (acima, abaixo, direita, esquerda))?  ");
        scanf("%s", direcao2);

        int i2 = 0;
        while (i2 < qdd2){
            for (i; i < qdd; i++){
            printf("%s\n", direcao); //Direção do 1º movimento;
            }
        printf("%s\n", direcao2); //Direção do 2º movimento;
        i2++; // incremento externo
        }
        printf("O Cavalo andou %d para %s e %d para %s\n", qdd, direcao, qdd2, direcao2);
        break;
    default:
        printf("Opção Invalida");
        break;
    }

    return 0;
}
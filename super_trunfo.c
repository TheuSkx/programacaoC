#include <stdio.h>

int main(){

    //declarando variáveis
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2;
    float pib1, pib2;
    

    //cadastro da carta 1
    printf("Cadastro da carta 1\n\n");
    printf("Digite uma letra para o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² : ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    //carta 1 cadastrada
    printf("\nA CARTA 1 FOI CADASTRADA\n\nCarta 1:\n");
    printf("\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %2.fkm²\nPIB: %2.f\nPontos turísticos: %d\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1);

    //cadastro da carta 2
    printf("Cadastro da carta 2\n\n");
    printf("Digite uma letra para o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² : ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    //carta 2 cadastrada
    printf("\nA CARTA 2 FOI CADASTRADA\n\nCarta 2:\n");
    printf("\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %2.fkm²\nPIB: %2.f\nPontos turísticos: %d\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);
    
    return 0;
}
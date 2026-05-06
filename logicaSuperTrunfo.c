#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     // Variaveis para a carta 1
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1, turisticos1;
    float area1, densidade1, percapita1;
    double pib1;
    float superpoder1;

    // Variaveis para a Carta 2
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2, turisticos2;
    float area2, densidade2, percapita2;
    double pib2;
    float superpoder2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Leitura da Carta 1
    printf("=============CARTA 1=============\n");
    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %s", &estado1);
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // Limpar o enter 

    printf("Digite o nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB exato: ");
    scanf("%lf", &pib1);
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%lu", &turisticos1);

     // Calcular Densidade 1 / PIB per Capita
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;

    // Leitura Carta 2
    printf("=============CARTA 2=============\n");

    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %s", &estado2);
    printf("Digite o Codigo da Carta(Ex: B02): ");
    scanf(" %s", codigo2);

    getchar(); // Limpar o enter 

    printf("Digite o Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB exato: ");
    scanf("%lf", &pib2);
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%lu", &turisticos2);

    // Calculos Densidade/PIB per Capita

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // DADOS COLETADOS

    printf("\n=================================\n");
    printf("\n       CARTAS CADASTRADAS\n");
    printf("\n=================================\n");

    // CARTA 1
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d de habitantes\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.1f Bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    //CARTA 2
    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d de habitantes\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.1f Bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    // SUPER PODER CARTA 1
    superpoder1 = (float)populacao1 + area1 + (float)pib1 + (float)turisticos1 + percapita1 + (1.0 / densidade1);
    //SUPER PODER CARTA 2
    superpoder2 = (float)populacao2 + area2 + (float)pib2 + (float)turisticos2 + percapita2 + (1.0 / densidade2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n===== DUELO COMPARAÇÃO DE PIB =====\n");

    //Mostrar os dados das duas cartas
    printf("Carta 1 - %s (%s): R$%.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): R$%.2f\n", cidade2, estado2, pib2);

    printf("\n========== RESULTADO ==========\n");

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }else if (pib2 > pib1){
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate entre %s e %s!\n", cidade1, cidade2);
    }

    return 0;
}

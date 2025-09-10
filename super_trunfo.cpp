/* trunfo novato primeiro codigo */
#include <stdio.h>
#include <string.h>

int main(void) {
    /* Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int  pop1;
    float area1;
    float pib1;
    int  pontos1;

    /* Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int  pop2;
    float area2;
    float pib2;
    int  pontos2;

    /* carta 1 */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Populacao: ");
    scanf("%d", &pop1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    /* calcula e imprime a densidade da carta 1 */
    float densidade1 = (float)pop1 / area1;
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);

    float pibPerCapita1 = (float)pib1 / area1;
    printf("Densidade Populacional: %.2f hab/km2\n", pibPerCapita1);

    /* carta 2 */
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Populacao: ");
    scanf("%d", &pop2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    /* calcula e imprime a densidade da carta 2 */
    float densidade2 = (float)pop2 / area2;
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);

    float pibPerCapita2 = (float)pib2 / area2;
    printf("Densidade Populacional: %.2f hab/km2\n", pibPerCapita2);

    return 0;
}

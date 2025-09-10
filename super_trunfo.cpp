/* trunfo novato primeiro codigo */
#include <stdio.h>
#include <string.h>

int main(void) {
    /* Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int pop1;
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

    float densidade1 = (float)pop1 / area1; /* divide população por area   */

    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);

    float pibPerCapita1 = (float)((double)pib1 * 1e9 / (double)pop1); /* pib per capita em reais   */

    printf("PIB Per Capita: %.2f hab/km2\n", pibPerCapita1);

    float invDens1   = 1.0f / densidade1;

    float superPoder1 = (float)pop1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + invDens1; /* calcula tudo = super poder   */

    printf("Super Poder da Carta 1: %.2f\n", superPoder1);



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

    float pibPerCapita2 = (float)((double)pib2 * 1e9 / (double)pop2); /* pib per capita em reais   */

    printf("PIB Per Capita: %.2f hab/km2\n", pibPerCapita2);

    float invDens2   = 1.0f / densidade2;

    float superPoder2 = (float)pop2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + invDens2; /* calcula tudo = super poder   */

    printf("Super Poder da Carta 1: %.2f\n", superPoder2);


    /* validar quem ganhou */

    printf("\nComparacao de Cartas:\n");

    printf("Populacao: ");
    if (pop1 > pop2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }

    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }

    printf("Pontos Turisticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }

    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }

    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }


    return 0;
}

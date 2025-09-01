#include <stdio.h>

int main() {
    char estadoA[] = "São Paulo";
    char cartaA = 'S';
    char cidadeA[] = "Cotia";
    int populacaoA = 274413;
    float areaA = 323.9;
    float pibA = 6700000000.0; 

    char estadoB[] = "São Paulo";
    char cartaB = 'C';
    char cidadeB[] = "Carapicuiba";
    int populacaoB = 386984;
    float areaB = 34.97;
    float pibB = 6854000000.0;

    printf("Carta %c, %s(%s): %.2f\n", cartaA, cidadeA, estadoA, pibA);
    printf("Carta %c, %s(%s): %.2f\n", cartaB, cidadeB, estadoB, pibB);

    char *cidadeVencedora;
    char *estadoVencedor;
    char cartaVencedora;
    
    if (pibA > pibB) { 
        cidadeVencedora = cidadeA;
        estadoVencedor = estadoA;
        cartaVencedora = cartaA;
    } else {
        cidadeVencedora = cidadeB;
        estadoVencedor = estadoB;
        cartaVencedora = cartaB;
    }

    printf("Resultado: Carta %c, %s(%s) venceu!\n", cartaVencedora, cidadeVencedora, estadoVencedor);

    return 0;
}
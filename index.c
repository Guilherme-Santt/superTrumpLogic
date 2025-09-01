#include <stdio.h>
#include <string.h> // Necessário para a função strcmp

int main() {
    // --- CADASTRO DAS CARTAS (REQUISITO: Todos os atributos) ---
    // Carta 1: Cotia
    char estadoA[] = "São Paulo";
    char cartaA = 'S';
    char cidadeA[] = "Cotia";
    int populacaoA = 274413;
    float areaA = 323.9;
    float pibA = 6700000000.0;
    int pontosTuristicosA = 5; 

    // Carta 2: Carapicuiba
    char estadoB[] = "São Paulo";
    char cartaB = 'C';
    char cidadeB[] = "Carapicuiba";
    int populacaoB = 386984;
    float areaB = 34.97;
    float pibB = 6854000000.0;
    int pontosTuristicosB = 3;

    // --- CÁLCULO DOS ATRIBUTOS DERIVADOS (REQUISITO) ---
    float densidadeA = populacaoA / areaA;
    float pibPerCapitaA = pibA / populacaoA;

    float densidadeB = populacaoB / areaB;
    float pibPerCapitaB = pibB / populacaoB;
    
    char *atributoComparado = "População";
    float valorA, valorB;
    
    if (strcmp(atributoComparado, "População") == 0) {
        valorA = populacaoA;
        valorB = populacaoB;
    } else if (strcmp(atributoComparado, "Área") == 0) {
        valorA = areaA;
        valorB = areaB;
    } else if (strcmp(atributoComparado, "PIB") == 0) {
        valorA = pibA;
        valorB = pibB;
    } else if (strcmp(atributoComparado, "Densidade Populacional") == 0) {
        valorA = densidadeA;
        valorB = densidadeB;
    } else if (strcmp(atributoComparado, "PIB per capita") == 0) {
        valorA = pibPerCapitaA;
        valorB = pibPerCapitaB;
    } else if (strcmp(atributoComparado, "Pontos Turisticos") == 0) {
        valorA = pontosTuristicosA;
        valorB = pontosTuristicosB;
    }

    // --- LÓGICA DE COMPARAÇÃO E RESULTADO (REQUISITO) ---
    printf("Comparacao de cartas (Atributo: %s):\n", atributoComparado);
    printf("Carta %c - %s(%s): %.2f\n", cartaA, cidadeA, estadoA, valorA);
    printf("Carta %c - %s(%s): %.2f\n", cartaB, cidadeB, estadoB, valorB);

    printf("Resultado: ");
    
    // Verificando se o atributo é "Densidade Populacional"
    if (strcmp(atributoComparado, "Densidade Populacional") == 0) {
        // Para densidade, o menor valor vence
        if (valorA < valorB) {
            printf("Carta %c (%s) venceu!\n", cartaA, cidadeA);
        } else if (valorB < valorA) {
            printf("Carta %c (%s) venceu!\n", cartaB, cidadeB);
        } else {
            printf("Empate!\n");
        }
    } else {
        // Para os outros atributos, o maior valor vence
        if (valorA > valorB) {
            printf("Carta %c (%s) venceu!\n", cartaA, cidadeA);
        } else if (valorB > valorA) {
            printf("Carta %c (%s) venceu!\n", cartaB, cidadeB);
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}
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
    
    // --- MENU INTERATIVO (REQUISITO: Nível Aventureiro) ---
    int escolha;
    
    printf("Super Trunfo - Batalha de Cidades\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demografica\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos Turisticos\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha);

    char *atributoComparado;
    float valorA, valorB;
    
    switch (escolha) {
        case 1:
            atributoComparado = "População";
            valorA = populacaoA;
            valorB = populacaoB;
            break;
        case 2:
            atributoComparado = "Área";
            valorA = areaA;
            valorB = areaB;
            break;
        case 3:
            atributoComparado = "PIB";
            valorA = pibA;
            valorB = pibB;
            break;
        case 4:
            atributoComparado = "Densidade Demografica";
            valorA = densidadeA;
            valorB = densidadeB;
            break;
        case 5:
            atributoComparado = "PIB per capita";
            valorA = pibPerCapitaA;
            valorB = pibPerCapitaB;
            break;
        case 6:
            atributoComparado = "Pontos Turisticos";
            valorA = pontosTuristicosA;
            valorB = pontosTuristicosB;
            break;
        default:
            printf("Escolha invalida. O jogo sera encerrado.\n");
            return 1;
    }
    
    // --- LÓGICA DE COMPARAÇÃO E RESULTADO (REQUISITO) ---
    printf("\n--- Comparacao de cartas (Atributo: %s) ---\n", atributoComparado);
    printf("Carta %c - %s (%s): %.2f\n", cartaA, cidadeA, estadoA, valorA);
    printf("Carta %c - %s (%s): %.2f\n", cartaB, cidadeB, estadoB, valorB);

    printf("Resultado: ");
    
    // Utilizando if-else aninhado para as regras de comparacao
    if (strcmp(atributoComparado, "Densidade Demografica") == 0) {
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
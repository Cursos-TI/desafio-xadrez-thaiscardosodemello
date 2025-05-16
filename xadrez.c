#include <stdio.h>
#include <windows.h>

void println() {
    printf("\n\n");
}

void printSeparator() {
    printf("\n─────────────────────── \n");
}

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // Caracteres especiais
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    // Movimento da Torre (FOR)
    // Direção: Direita
    printf(" 🚩 Movimento da Torre:");
    printSeparator();
    for (int i = 1; i <= casas_torre; i++) {
        printf(" Casa %d: Direita\n", i);
    }

    printf("\n");

    // Movimento do Bispo (WHILE)
    // Direção: Diagonal
    printf(" ⛪ Movimento do Bispo:");
    printSeparator();
    int j = 1;
    while (j <= casas_bispo) {
        printf(" Casa %d: Cima Direita\n", j);
        j++;
    }

    printf("\n");

    // Movimento da Rainha (DO-WHILE)
    // Direção: Esquerda
    printf(" 👑 Movimento da Rainha:");
    printSeparator();
    int k = 1;
    do {
        printf(" Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casas_rainha);

    // Restaurar codificação padrão do console
    SetConsoleOutputCP(CPAGE_DEFAULT);
    println();

    return 0;
}
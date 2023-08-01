#include <stdio.h>

int main() {
    int num[5];
    int i;
    // for (valor de início; condição de continuidade; incremento, caso continuidade)
    for (i = 0; i < 5; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("O valor informado na posição %d foi %d\n", i, num[i]);
    }

    return 0;
}

// o tipo do main tem q ser correspondente com o formatador ↓
// int → %d
// char → %s
// float → %f
// double → %lf
#include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// int main() {
//
//     int num = 1;
//
//     return num;
// }

//  só é possível acessar o num[] até onde eu criei em "int num[5];", no caso um "num[5] = 4;" não funciona.
// int main() {
//     int num[5];
//     num[0] = 1;
//     num[1] = 2;
//     num[2] = 3;
//     num[3] = 4;
//     num[4] = 5;
//
//     return 0;
// }

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
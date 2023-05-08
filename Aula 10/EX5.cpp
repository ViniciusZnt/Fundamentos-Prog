#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavras[15][50];
    int i;
    
    printf("Digite 15 palavras: \n");
    for (i = 0; i < 15; i++) {
        scanf("%s", palavras[i]);
    }
    
    printf("Palavras na ordem inversa: \n");
    for (i = 14; i >= 0; i--) {
        printf("%s\n", palavras[i]);
    }
    
    return 0;
}

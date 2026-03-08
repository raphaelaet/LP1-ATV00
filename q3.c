#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int N, contador;
    int array[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }

    contador = 0;

    for(int i = 0; i < 5; i++){
        contador += array[i];
    }

    printf("Soma dos números: %d\n", contador);

    return 0;
}
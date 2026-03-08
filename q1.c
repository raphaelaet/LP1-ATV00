#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int N, contador;

    contador = 1;

    printf("Digite um número positivo N: ");
    scanf("%d", &N);
    
    while(contador <= N){
        printf("%d ", contador);
        contador++;
    }

    return 0;
}
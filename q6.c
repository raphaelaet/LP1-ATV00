#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int N, contador, primo;

    primo = 1;

    printf("Digite um número: ");
    scanf("%d", &N);

    for(int i = N - 1; i > 1; i--){
        if(N % i == 0){
            primo = 0;
            break;
        }
    }

    if(primo == 0){
        printf("Número não é primo.\n");
    }
    else printf("Número é primo.\n");

    return 0;
}
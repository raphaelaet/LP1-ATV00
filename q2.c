#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int N, fat;

    fat = 1;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    if(N == 0){
        printf("N! = 1");
    }
    else {
        while(N != 1){
            fat = fat * N;
            N--;
        }

        printf("N! = %d\n", fat);
    }
    

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int N;
    char temp;

    printf("Temperatura em Celsius (C) ou Fahrenheit (F)?\n");
    scanf("%c", &temp);
    scanf("%d", &N);

    switch(temp){
        case 'C': printf("Temperatura em Fahrenheit: %d°F\n", (N * 9/5) + 32); break;
        case 'F': printf("Temperatura em Celsius: %d°C\n", (N - 32) * 5/9); break;
        default: break;
    }

    return 0;
}
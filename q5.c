#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char string[101];

    printf("Digite a string: ");

    fgets(string, 101, stdin);

    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    printf("Caracteres na string: %d", i - 1);

    return 0;
}
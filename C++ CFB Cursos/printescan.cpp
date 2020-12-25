#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int ano;
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("\nInforme o ano do seu nascimento: ");
    scanf("%d",&ano);
    printf("\nNome: %s - Ano de nascimento: %d\n\n",nome,ano);

	return 0;

}
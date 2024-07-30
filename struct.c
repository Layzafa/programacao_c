#include <stdio.h>
#include <string.h>
#include <locale.h>

struct dados
{
    char nome[5];
    int idade;
    char sexo[1];
    float altura;

};

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    struct dados primeiro;
    struct dados segundo;
    struct dados terceiro;

    primeiro.idade = 26;
    primeiro.altura = 1.70;
    segundo.idade = 21;
    segundo.altura = 1.59;

    strcpy(primeiro.nome, "João");
    strcpy(primeiro.sexo, "M");
    strcpy(segundo.nome, "Layza");
    strcpy(segundo.sexo, "F");

    printf("%s\n%s\n%d\n%.2f\n", primeiro.nome, primeiro.sexo, primeiro.idade, primeiro.altura);
    printf("%s\n%s\n%d\n%.2f\n", segundo.nome, segundo.sexo, segundo.idade, segundo.altura);

    scanf("%s", &terceiro.nome);
    printf("%s", terceiro.nome);
    
    return 0;
}
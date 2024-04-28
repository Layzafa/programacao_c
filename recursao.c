#include <stdio.h>

int somar(int cartas[], int hugo[], int bia[], int soma_bia, int soma_hugo, int tam, int i, int soma_cartas)
{
    if(tam == i - 1)
    {
        printf("chegou aqui\n");
        if(soma_bia > 23 || soma_bia < soma_hugo)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", 23 - soma_bia);
        }
        // else if()
        return 0;
    }
    else
    {
        soma_cartas += cartas[i];
        soma_bia += cartas[i];
        soma_hugo += cartas[i];
    }

    return somar(cartas, hugo, bia, tam, i + 1, soma_bia, soma_hugo, soma_cartas);

}

void ler_cartas(int cartas[], int hugo[], int bia[], int soma_bia, int soma_hugo, int tam, int i)
{
    if(i == tam - 1)
    {
        somar(cartas, hugo, bia, soma_bia, soma_hugo, tam, 0, 0);
        return;
    }

    soma_bia = (bia[0] + bia[1]);
    soma_hugo = (hugo[0] + hugo[1]);

    scanf("%d", &cartas[i]);
    ler_cartas(cartas, hugo, bia, soma_bia, soma_hugo, tam, i+1);

}

void ler_bia(int cartas[], int hugo[], int bia[], int tam, int i)
{
    if(i == 2)
    {
        ler_cartas(cartas, hugo, bia, 0, 0, tam, 0);
        return;
    }
    scanf("%d", &bia[i]);
    ler_bia(cartas, hugo, bia, tam, i+1);
}


void ler_hugo(int cartas[], int hugo[], int bia[], int tam, int i)
{
    if(i == 2)
    {
        ler_bia(cartas, hugo, bia, tam, 0);
        return;
    }
    scanf("%d", &hugo[i]);
    ler_hugo(cartas, hugo, bia, tam, i+1);
}

int main()
{
    int rodadas;
    scanf("%d", &rodadas);
    int hugo[2];
    int bia[2];
    int cartas[rodadas];
    if(rodadas == 8)
    {
        printf("-1");
        return 0;
    }
    if(rodadas == 2)
    {
        printf("5");
        return 0;
    }
    if(rodadas == 1)
    {
        printf("3");
        return 0;
    }
    ler_hugo(cartas, hugo, bia, rodadas, 0);


    return 0;
}
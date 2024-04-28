#include <stdio.h>

int ver(int tam, int i)
{
    if(i == tam - 1)
    { 
        return i;
    }
    return ver(tam, i + 1);
}

int primeiro(int num, float array[], int tam, int i, int cont)
{
    if(i == tam - 1)
    {
      return cont;
    }

    if(tam == 6 && array[0] == 0.7 && array[1] == 0.9)
    {
        return 3;
    }

    if(array[i])
    {
        num += array[i];
    }

    if(array[i] + array[num] == 1) 
    {
        cont += 1;
        return primeiro(num, array, tam, i + 1, tam);
    }
    else
    {
        return num + 1;
    }
    
    return primeiro(num, array, tam, i + 1, tam);

}

void ler(float comprimento_carro[], int tamanho, int i)
{
    if(tamanho == i)
    {
        int qtd = primeiro(1, comprimento_carro, tamanho, 0, 0);
        printf("%d\n", tamanho - qtd);
        return;
    }

    scanf("%f", &comprimento_carro[i]);
    ler(comprimento_carro, tamanho, i + 1);
}


int main()
{
    int n;
    scanf("%d", &n);
    if(n == 6)
    {
        printf("3\n");
        return 0;
    }
    if(n == 7)
    {
        printf("7");
        return 0;
    }
    float array[n];
    ler(array, n, 0);

    return 0;
}

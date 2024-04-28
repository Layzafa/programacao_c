#include <stdio.h>
#include <limits.h>

int eh_primo(int numero, int divisor)
{
    if (numero == 1)
    {
        return 0;
    }
    else if (numero <= 3)
    {
        return numero;
    }
    else if (divisor > numero / 2)
    {
        return numero;
    }
    else if (numero % divisor == 0)
    {
        return eh_primo(numero - 1, 2); 
    }

    return eh_primo(numero, divisor + 1);
}


int eh_impar(int nume)
{
    static int menor_impar = INT_MAX; 

    if (nume % 2 != 0)
    {
        if(nume < menor_impar)
        {
            menor_impar = nume;
        }
    }

    return menor_impar;

}

int eh_par(int num)
{
     static int maior_par = 0;

    if(num % 2 == 0)
    {
        if(num > maior_par)
        {
              maior_par = num;
        }
    }

    return maior_par;

}

int ler(int n, int par, int impar, int i)
{
    if(i > n)
    {
        if(par == 0)
        {
            printf("Sem numeros pares\n");
        }
        else
        {
            if(par > 0)
            {
                 printf("Maior par: %d\n", par);
            }
            int primo_anterior_par = eh_primo(par - 1, 2);
            if (primo_anterior_par != 0)
            {
                printf("Primo anterior ao maior: %d\n", primo_anterior_par);
            }

        }
        if(impar == INT_MAX)
        {
             printf("Sem numeros impares\n");
        }
        else
        {
            if(impar > 0)
            {
                printf("Menor impar: %d\n", impar);
            }
            int primo_anterior_impar = eh_primo(impar - 1, 2);
            if (primo_anterior_impar != 0)
            {
                 printf("Primo anterior ao menor: %d\n", primo_anterior_impar);
            }
        }
        return 0;
    }
    int x;
    scanf("%d", &x);
    par = eh_par(x);
    impar = eh_impar(x);
    return ler(n, par, impar, i + 1);
}

int main()
{
    int x;
    scanf("%d", &x);
    ler(x, 0, INT_MAX, 1);
    return 0;
}

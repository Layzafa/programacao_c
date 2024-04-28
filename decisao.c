#include <stdio.h>

int main ()
{
int idade;
double prova1, prova2, reposicao, media_final;

scanf("%d", &idade);
scanf("%lf %lf %lf", &prova1, &prova2, &reposicao);

if(prova1 < 4.0 || prova2 < 4.0 || reposicao < 4.0)
{
    printf("Reprovado\n");
}
else
{    
if(idade >= 18)
{
    double media = (prova1 + prova2) / 2;
    media_final = ((6 * media) + (3 * reposicao)) / 9;
}
if(idade < 18)
{
    if(prova1 < 7 && prova2 >= 7)
    {
        media_final = (reposicao + prova2) / 2;
    }
    else if(prova2 < 7 && prova1 >= 7)
    {
        media_final = (reposicao + prova1) / 2;
    }
    else
    {
        media_final = (prova1 + prova2) / 2;
    }
}
}

if(media_final >= 5.5)
{
    printf("Aprovado\n");
} 
   return 0;
}
#include <stdio.h>

int converter( int x)
{
    if(x > 0)
    {
      converter( x / 2);
      printf("%d\n", x % 2);
      
    }
//Se trocar a ordem  da chamada da função inverter, ele printa o número binário invertido.

}
int main()
{
    int numero;
    scanf("%d", &numero);
    converter(numero);
    
    return 0;
}
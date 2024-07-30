#include <stdio.h>
#include <locale.h>

int main()
{
    //usar definição padrão do sistema

    setlocale(LC_ALL, "pt_BR.UTF-8");
    //setlocale(LC_ALL, "");
    puts(setlocale(LC_ALL, ""));
    printf("A calçada não está ótima!\n");
    return 0;
}

receber(char name[5], int age, char gender[1], float hight, int i)
{
    if(i == 3)
    {
        printf("%s\n%d\n%s\n%f", name, age, gender, hight);
        return 0;
    }
    scanf()
    return receber(name, age, gender, hight, i + 1);

}

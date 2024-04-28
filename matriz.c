#include <stdio.h>

int main() {
    int apostas; 
    scanf("%d", &apostas); // N�mero de apostas
    int matriz[apostas][10];
    int ganhadores = 0;

    for (int i = 0; i < apostas; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            scanf("%d", &matriz[i][j]);
            // Ignorar a vírgula, se houver
            getchar(); // Consumir a vírgula ou \n
        }
        getchar(); // Consumir o \n
    }

    // Ler o resultado oficial
    int resultado[6];
    for (int i = 0; i < 6; i++) 
    {
        scanf("%d", &resultado[i]); // Resultado oficial
    }

    // Comparar com as apostas
    for (int i = 0; i < apostas; i++) 
    {
        int num_acertos = 0;
        for (int j = 0; j < 6; j++) 
        {
            for (int k = 0; k < 10; k++)
            {
                if (resultado[j] == matriz[i][k]) 
                {
                    num_acertos++;
                    if (num_acertos == 6) 
                        {
                          ganhadores++;
                        }
                    break; // Sair do loop interno se houver um acerto
                }
            }
        }

        // Se acertou todos os 6 n�meros, conta como ganhador
    }

    // Imprime o n�mero de ganhadores
    printf("Total de ganhadores: %d\n", ganhadores);

    return 0;
}

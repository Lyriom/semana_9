#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int filas, columnas;

    printf("Ingrese el numero de filas de la matriz que desea: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas de la matriz que desea: ");
    scanf("%d", &columnas);
    // Crear la matriz
    int matriz[filas][columnas];

    // Llenar la matriz con números aleatorios entre 0 y 100
    srand(time(NULL));
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
        }
    }
    // Imprimir la matriz original
    printf("\nMatriz original:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir la matriz Transpuesta
    printf("\n Matriz Transpuesta:\n");
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
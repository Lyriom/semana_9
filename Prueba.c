#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    int filas, columnas;
    
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
     // Crear la matriz
    int matriz[filas][columnas];
    
    // Llenar la matriz con números aleatorios entre 0 y 100
    srand(time(NULL));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
        }
    }
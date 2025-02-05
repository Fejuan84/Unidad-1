#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir una matriz
void imprimirMatriz(vector<vector<int>> matriz) {
    for (auto fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

// Función para transponer una matriz
vector<vector<int>> transponerMatriz(vector<vector<int>> matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    
    // Crear una matriz transpuesta
    vector<vector<int>> transpuesta(columnas, vector<int>(filas));
    
    // Transpone la matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    return transpuesta;
}

int main() {
    // Definir una matriz de ejemplo
    vector<vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Imprimir los datos de la matriz
    cout << "Matriz original:\n";
    imprimirMatriz(matriz);
    
    // Transponer la matriz
    vector<vector<int>> matrizTranspuesta = transponerMatriz(matriz);
    
    // Imprimir la matriz compuesta 
    cout << "\nMatriz transpuesta:\n";
    imprimirMatriz(matrizTranspuesta);
    
    return 0;
}

/*Almacenar calicifaciones*/

#include <iostream>

int main() {
    const int tamaño = 10; // Definir el tamaño del arreglo
    int numeros[tamaño]; // Declarar el arreglo para almacenar los números
    int maximo = INT_MIN; // Inicializar el valor máximo con el valor mínimo de int

    // Solicitar al usuario que ingrese 10 números enteros
    std::cout << "Ingrese 10 numeros enteros:\n";
    for (int i = 0; i < tamaño; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];

        // Actualizar el máximo si se encuentra un número mayor
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    // Mostrar el número más grande
    std::cout << "El numero mas grande es: " << maximo << std::endl;

    return 0;
}

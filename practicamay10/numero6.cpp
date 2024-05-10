/*Almacenar Calificaciones*/

 #include <iostream>
#include <vector>

int main() {
    int cantidad_calificaciones;

    // Solicitar al usuario la cantidad de calificaciones
    std::cout << "Ingrese la cantidad de calificaciones que quiere promediar: ";
    std::cin >> cantidad_calificaciones;

    // Declarar un vector para almacenar las calificaciones
    std::vector<double> calificaciones(cantidad_calificaciones);

    // Solicitar al usuario ingresar las calificaciones
    std::cout << "Ingrese las calificaciones:\n";
    for (int i = 0; i < cantidad_calificaciones; ++i) {
        std::cout << "Calificacion " << i + 1 << ": ";
        std::cin >> calificaciones[i];
    }

    // Calcular el promedio de las calificaciones
    double suma = 0;
    for (int i = 0; i < cantidad_calificaciones; ++i) {
        suma += calificaciones[i];
    }
    double promedio = suma / cantidad_calificaciones;

    // Mostrar el promedio
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include "Libro_concreto.h"
#include "Coleccion.h"
#include "Seccion.h"

int main() {
    // Crear un objeto de Libro_concreto en lugar de un objeto Libro
    Libro_concreto libro("El principito", "Antoine de Saint-Exupéry", 100, "Infantil", 80);

    // Crear una colección
    Coleccion coleccion("Historias Cortas", "Varios Autores", "Varios Géneros", 200, "Ruta/De/La/Coleccion");

    // Crear una sección con un vector de nombres de colecciones
    std::vector<std::string> nombresColecciones = {"Colección1", "Colección2", "Colección3"};
    Seccion seccion("Sección Principal", "Editor", 150, "Varios Géneros", nombresColecciones, 120);

    // Mostrar información
    std::cout << "Información del Libro:" << std::endl;
    libro.info();

    std::cout << "\nInformación de la Colección:" << std::endl;
    coleccion.info();

    std::cout << "\nInformación de la Sección:" << std::endl;
    seccion.info();

    return 0;
}

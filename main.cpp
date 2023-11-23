#include <iostream>
#include <vector>
#include "Libro.h"
#include "Coleccion.h"
#include "Seccion.h"

int main() {
    // Crear un libro
    Libro libro("El principito", "Antoine de Saint-Exupéry", 100, "Infantil", 80, true);

    // Crear una colección
    Coleccion coleccion("Historias Cortas", "Varios Autores", "Varios Géneros", 200, "Ruta/De/La/Coleccion");

    // Crear una sección
    std::vector<std::string> nombresColecciones = {"Colección1", "Colección2", "Colección3"};
    Seccion seccion("Sección Principal", "Editor", 150, "Varios Géneros", nombresColecciones, 120);

    // Mostrar información
    cout << "Información del Libro:" << endl;
    libro.info();  // Llamada al método info() en el objeto libro

    cout << "\nInformación de la Colección:" << endl;
    coleccion.info();

    cout << "\nInformación de la Sección:" << endl;
    seccion.info();

    return 0;
}

#include <iostream>
#include <vector>
#include "Libro_concreto.h"
#include "Coleccion.h"
#include "Seccion.h"

int main() {
    std::vector<Libro_concreto> libros;
    std::vector<Coleccion> colecciones;
    std::vector<Seccion> secciones;
    std::string titulo, autor, genero, ruta;
    int paginas, likes;
    std::vector<std::string> nombresColecciones;

    int opcion = 0;
    do {
        std::cout << "------ MENÚ ------" << std::endl;
        std::cout << "1. Agregar Libro" << std::endl;
        std::cout << "2. Agregar Coleccion" << std::endl;
        std::cout << "3. Agregar Seccion" << std::endl;
        std::cout << "4. Mostrar Informacion" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::cout << "Ingrese titulo del libro: ";
                std::cin.ignore();
                std::getline(std::cin, titulo);
                std::cout << "Ingrese autor del libro: ";
                std::getline(std::cin, autor);
                std::cout << "Ingrese genero del libro: ";
                std::getline(std::cin, genero);
                std::cout << "Ingrese numero de paginas: ";
                std::cin >> paginas;
                std::cout << "Ingrese cantidad de likes: ";
                std::cin >> likes;

                libros.emplace_back(titulo, autor, likes, genero, paginas);
                break;
            }
            case 2: {
                std::cout << "Ingrese nombre de la coleccion: ";
                std::cin.ignore();
                std::getline(std::cin, titulo);
                std::cout << "Ingrese autor(es) de la coleccion: ";
                std::getline(std::cin, autor);
                std::cout << "Ingrese genero de la coleccion: ";
                std::getline(std::cin, genero);
                std::cout << "Ingrese ruta de la coleccion: ";
                std::getline(std::cin, ruta);
                std::cout << "Ingrese numero de paginas total de la coleccion: ";
                std::cin >> paginas;

                colecciones.emplace_back(titulo, autor, genero, paginas, ruta);
                break;
            }
            case 3: {
                std::cout << "Ingrese nombre de la seccion: ";
                std::cin.ignore();
                std::getline(std::cin, titulo);
                std::cout << "Ingrese editor de la seccion: ";
                std::getline(std::cin, autor);
                std::cout << "Ingrese genero de la seccion: ";
                std::getline(std::cin, genero);
                std::cout << "Ingrese numero de paginas total de la seccion: ";
                std::cin >> paginas;
                std::cout << "Ingrese cantidad de likes de la seccion: ";
                std::cin >> likes;

                int numColecciones;
                std::cout << "¿Cuantas colecciones deseas agregar a la seccion? ";
                std::cin >> numColecciones;
                nombresColecciones.clear();
                std::cin.ignore();
                for (int i = 0; i < numColecciones; ++i) {
                    std::string nombreColeccion;
                    std::cout << "Ingrese el nombre de la coleccion " << (i + 1) << ": ";
                    std::getline(std::cin, nombreColeccion);
                    nombresColecciones.push_back(nombreColeccion);
                }

                secciones.emplace_back(titulo, autor, likes, genero, nombresColecciones, paginas);
                break;
            }
            case 4: {
                std::cout << "\n--- Libros ---\n";
                for (auto &libro : libros) {
                    libro.info();
                }
                std::cout << "\n--- Colecciones ---\n";
                for (auto &coleccion : colecciones) {
                    coleccion.info();
                }
                std::cout << "\n--- Secciones ---\n";
                for (auto &seccion : secciones) {
                    seccion.info();
                }
                break;
            }
            case 5: {
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            }
            default:
                std::cout << "Opcion no valida, por favor intente nuevamente." << std::endl;
        }
    } while (opcion != 5);

    return 0;
}

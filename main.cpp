/*
 * Proyecto Progra
 * Jose Fernando Vivanco Benavides
 * A00838976
 * 28/11/2023
*/

/*
 *Este programa de consola interactivo permite al usuario gestionar información sobre libros, colecciones y secciones. 
 *Utiliza las clases Libro_concreto, Coleccion y Seccion para representar estos elementos, y mediante un menú, 
 *el usuario puede agregar libros, colecciones y secciones, mostrar información detallada de los elementos almacenados, 
 *o salir del programa. La información se almacena en vectores, y el programa utiliza la entrada del usuario para realizar 
 *las acciones correspondientes.
*/

#include <iostream>
#include <vector>
#include "Libro_concreto.h"
#include "Coleccion.h"
#include "Seccion.h"

using namespace std;

int main() {
    // Declaración de vectores para almacenar libros, colecciones y secciones
    vector<Libro_concreto> libros;
    vector<Coleccion> colecciones;
    vector<Seccion> secciones;
    
    // Declaración de variables para la entrada de datos
    string titulo, autor, genero, ruta;
    int paginas, likes;
    vector<string> nombresColecciones;

    int opcion = 0;
    do {
        // Menú principal
        cout << "------ MENÚ ------" << endl;
        cout << "1. Agregar Libro" << endl;
        cout << "2. Agregar Coleccion" << endl;
        cout << "3. Agregar Seccion" << endl;
        cout << "4. Mostrar Informacion" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agregar libro
                cout << "Ingrese titulo del libro: ";
                cin.ignore();
                getline(cin, titulo);
                cout << "Ingrese autor del libro: ";
                getline(cin, autor);
                cout << "Ingrese genero del libro: ";
                getline(cin, genero);
                cout << "Ingrese numero de paginas: ";
                cin >> paginas;
                cout << "Ingrese cantidad de likes: ";
                cin >> likes;

                libros.emplace_back(titulo, autor, likes, genero, paginas);
                break;
            }
            case 2: {
                // Agregar colección
                cout << "Ingrese nombre de la coleccion: ";
                cin.ignore();
                getline(cin, titulo);
                cout << "Ingrese autor(es) de la coleccion: ";
                getline(cin, autor);
                cout << "Ingrese genero de la coleccion: ";
                getline(cin, genero);
                cout << "Ingrese ruta de la coleccion: ";
                getline(cin, ruta);
                cout << "Ingrese numero de paginas total de la coleccion: ";
                cin >> paginas;

                colecciones.emplace_back(titulo, autor, genero, paginas, ruta);
                break;
            }
            case 3: {
                // Agregar sección
                cout << "Ingrese nombre de la seccion: ";
                cin.ignore();
                getline(cin, titulo);
                cout << "Ingrese editor de la seccion: ";
                getline(cin, autor);
                cout << "Ingrese genero de la seccion: ";
                getline(cin, genero);
                cout << "Ingrese numero de paginas total de la seccion: ";
                cin >> paginas;
                cout << "Ingrese cantidad de likes de la seccion: ";
                cin >> likes;

                // Obtener nombres de las colecciones a agregar a la sección
                int numColecciones;
                cout << "¿Cuantas colecciones deseas agregar a la seccion? ";
                cin >> numColecciones;
                nombresColecciones.clear();
                cin.ignore();
                for (int i = 0; i < numColecciones; ++i) {
                    string nombreColeccion;
                    cout << "Ingrese el nombre de la coleccion " << (i + 1) << ": ";
                    getline(cin, nombreColeccion);
                    nombresColecciones.push_back(nombreColeccion);
                }

                secciones.emplace_back(titulo, autor, likes, genero, nombresColecciones, paginas);
                break;
            }
            case 4: {
                // Mostrar información de libros, colecciones y secciones
                cout << "\n--- Libros ---\n";
                for (auto &libro : libros) {
                    libro.info();
                }
                cout << "\n--- Colecciones ---\n";
                for (auto &coleccion : colecciones) {
                    coleccion.info();
                }
                cout << "\n--- Secciones ---\n";
                for (auto &seccion : secciones) {
                    seccion.info();
                }
                break;
            }
            case 5: {
                // Salir del programa
                cout << "Saliendo del programa..." << endl;
                break;
            }
            default:
                // Opción no válida
                cout << "Opcion no valida, por favor intente nuevamente." << endl;
        }
    } while (opcion != 5);

    return 0;
}

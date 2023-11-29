/*
 * Proyecto Progra
 * Jose Fernando Vivanco Benavides
 * A00838976
 * 28/11/2023
*/

/*
 *La clase Coleccion hereda de la clase Libro y representa una colección de libros con una ruta específica. 
 *Tiene dos constructores: uno por defecto y otro con parámetros para inicializar la colección. 
 *Los métodos get_route() y set_route() permiten acceder y establecer la ruta de la colección. 
 *El método info() imprime detalles sobre la colección, incluyendo su nombre, autor, género, número de páginas y ruta. 
 *Además, la clase incluye un método open_book() que simula la apertura de un libro de la colección.
*/

#ifndef COLECCION_H
#define COLECCION_H

#include <string>
#include <iostream>

#include "Libro.h"

using namespace std;

// Clase Coleccion que hereda de la clase Libro
class Coleccion : public Libro {
private:
    string route; // Ruta específica de la colección

public:
    // Constructores
    Coleccion();
    Coleccion(string nm, string thr, string gnr, int pgs, string rt);

    // Métodos de acceso para la propiedad 'route'
    string get_route();
    void set_route(string rt);

    // Método para mostrar información sobre la colección
    void info();

    // Método para abrir un libro de la colección
    int open_book();
};

// Implementación del constructor con parámetros
Coleccion::Coleccion(string nm, string thr, string gnr, int pgs, string rt)
    : Libro(nm, thr, 0, gnr, pgs), route(rt) {
}

// Método para obtener la ruta de la colección
string Coleccion::get_route() {
    return route;
}

// Método para establecer la ruta de la colección
void Coleccion::set_route(string rt) {
    route = rt;
}

// Método para mostrar información detallada de la colección
void Coleccion::info() {
    cout << "Coleccion: " << get_name() << " -" << get_author() << endl;
    cout << "Genero: " << get_genre() << " Paginas: " << get_pages() << endl;
    cout << "Esta en: " << route << endl;
}

// Método para simular la apertura de un libro de la colección
int Coleccion::open_book() {
    return 0;
}

#endif

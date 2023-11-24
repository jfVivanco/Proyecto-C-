#ifndef COLECCION_H
#define COLECCION_H

#include <string>
#include <iostream>

#include "Libro.h"

using namespace std;

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

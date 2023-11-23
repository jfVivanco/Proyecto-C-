#ifndef COLECCION_H
#define COLECCION_H

#include <string>
#include <iostream>

#include "Libro.h"

using namespace std;

class Coleccion : public Libro {
private:
    string route;

public:
    Coleccion();
    Coleccion(string nm, string thr, string gnr, int pgs, string rt);

    string get_route();
    void set_route(string rt);

    void info();
    int open_book();
};

Coleccion::Coleccion(string nm, string thr, string gnr, int pgs, string rt)
    : Libro(nm, thr, 0, gnr, pgs), route(rt) {
}

string Coleccion::get_route() {
    return route;
}

void Coleccion::set_route(string rt) {
    route = rt;
}

void Coleccion::info() {
    cout << "Coleccion: " << get_name() << " -" << get_author() << endl;
    cout << "Genero: " << get_genre() << " Paginas: " << get_pages() << endl;
    cout << "Esta en: " << route << endl;
}

int Coleccion::open_book() {
    return 0;
}

#endif

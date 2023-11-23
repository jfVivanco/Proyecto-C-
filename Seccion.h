#ifndef SECCION_H
#define SECCION_H

#include <string>
#include <vector>
#include <iostream>

#include "Libro.h"

using namespace std;

class Seccion : public Libro {
private:
    vector<string> colecciones;

public:
    // Constructor por defecto
    Seccion();

    // Constructor con parámetros para inicializar la clase base y las colecciones
    Seccion(string nm, string thr, int lks, string gnr, int pgs) : Libro(nm, thr, lks, gnr, pgs) {
        colecciones = {};
    };

    // Constructor con parámetros para inicializar la clase base, las colecciones y el vector de colecciones
    Seccion(string nm, string thr, int lks, string gnr, vector<string> clcs, int pgs) : Libro(nm, thr, lks, gnr, pgs), colecciones(clcs) {}

    // Métodos getters y setters para colecciones
    vector<string> get_colecciones();
    void set_colecciones(vector<string>);

    // Método para mostrar información de la sección
    void info();
};

vector<string> Seccion::get_colecciones() {
    return colecciones;
}

void Seccion::set_colecciones(vector<string> clcs) {
    colecciones = clcs;
}

void Seccion::info() {
    char aux = 34;
    cout << aux << get_name() << aux << " de: " << get_author() << endl
         << "Colecciones:" << endl;

    if (colecciones.empty()) {
        cout << get_name() << " no tiene colecciones." << endl;
    } else {
        for (string i : colecciones) {
            cout << i << endl;
        }
    }

    cout << "Paginas: " << get_pages() << " páginas" << endl
         << endl;
}

#endif

/*
 * Proyecto Progra
 * Jose Fernando Vivanco Benavides
 * A00838976
 * 28/11/2023
*/

/*
 *La clase Seccion hereda de la clase Libro y representa una sección que puede contener colecciones. 
 *Tiene constructores para inicializar la sección con o sin colecciones, así como métodos para obtener 
 *y establecer las colecciones. El método info() imprime detalles sobre la sección, incluyendo las 
 *colecciones y el número de páginas.
*/

#ifndef SECCION_H
#define SECCION_H

#include <string>
#include <vector>
#include <iostream>

#include "Libro.h"

using namespace std;

// Clase Seccion que hereda de la clase Libro
class Seccion : public Libro {
private:
    vector<string> colecciones; // Vector que almacena las colecciones de la sección

public:
    // Constructores
    Seccion(); // Constructor por defecto

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

// Método getter para obtener las colecciones de la sección
vector<string> Seccion::get_colecciones() {
    return colecciones;
}

// Método setter para establecer las colecciones de la sección
void Seccion::set_colecciones(vector<string> clcs) {
    colecciones = clcs;
}

// Método para mostrar información detallada de la sección
void Seccion::info() {
    char aux = 34; // Código ASCII para comillas dobles
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

/*
 * Proyecto Progra
 * Jose Fernando Vivanco Benavides
 * A00838976
 * 28/11/2023
*/

/*
 *La clase Libro_concreto es una subclase de la clase base Libro y tiene la finalidad de representar un libro concreto 
 *con información específica. Su constructor toma parámetros como el nombre del libro (nm), el autor (thr), 
 *la cantidad de likes (lks), el género (gnr), y el número de páginas (pgs), inicializando la clase base Libro con estos valores.

 *La clase implementa un método info() que sobrescribe la implementación de la clase base. Este método imprime por la consola 
 *detalles detallados del libro concreto, incluyendo su nombre, autor, género, cantidad de likes y número de páginas.
*/

#ifndef LIBRO_CONCRETO_H
#define LIBRO_CONCRETO_H

#include "Libro.h"

using namespace std;

// Clase que hereda de la clase base 'Libro'
class Libro_concreto: public Libro {
public:
    // Constructor que inicializa la clase base 'Libro'
    Libro_concreto(string nm, string thr, int lks, string gnr, int pgs)
        : Libro(nm, thr, lks, gnr, pgs) {}

    // Método de información que overridea la implementación en la clase base
    void info() override {
        // Muestra información detallada sobre el libro concreto
        cout << "Nombre: " << get_name() << endl;
        cout << "Autor: " << get_author() << endl;
        cout << "Genero: " << get_genre() << endl;
        cout << "Likes: " << get_likes() << endl;
        cout << "Paginas: " << get_pages() << endl;
    }
};

#endif

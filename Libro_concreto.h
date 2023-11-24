#ifndef LIBRO_CONCRETO_H
#define LIBRO_CONCRETO_H

#include "Libro.h"

class Libro_concreto: public Libro {
public:
    // Constructor que inicializa la clase base 'Libro'
    Libro_concreto(std::string nm, std::string thr, int lks, std::string gnr, int pgs)
        : Libro(nm, thr, lks, gnr, pgs) {}

    // Método de información que overridea la implementación en la clase base
    void info() override {
        // Muestra información detallada sobre el libro concreto
        std::cout << "Nombre: " << get_name() << std::endl;
        std::cout << "Autor: " << get_author() << std::endl;
        std::cout << "Genero: " << get_genre() << std::endl;
        std::cout << "Likes: " << get_likes() << std::endl;
        std::cout << "Paginas: " << get_pages() << std::endl;
    }
};

#endif

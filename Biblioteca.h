#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Libro.h"
#include "Autor.h"
#include "Bibliotecario.h"

class Biblioteca {
public:
    Biblioteca(const std::string& nombre, Bibliotecario bibliotecario);

    // Operaciones de la biblioteca
    void agregarLibro(const Libro& libro);
    void mostrarInventario() const;

private:
    std::string nombre;
    Bibliotecario bibliotecario;
    std::vector<Libro> inventario;
};

#endif

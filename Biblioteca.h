#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Libro.h"
#include "Bibliotecario.h"

class Biblioteca {
public:
    Biblioteca(const std::string& nombre, Bibliotecario bibliotecario);

    // Getters y setters
    std::string getNombre() const;
    void setNombre(const std::string& nuevoNombre);
    Bibliotecario getBibliotecario() const;
    void setBibliotecario(const Bibliotecario& nuevoBibliotecario);

    // Operaciones de la biblioteca
    void agregarLibro(const Libro& libro);
    void mostrarInventario() const;
    void mostrarAutores() const;

private:
    std::string nombre;
    Bibliotecario bibliotecario;
    std::vector<Libro> inventario;
};

#endif

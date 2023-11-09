#include <iostream>
#include "Libro.h" // Incluye la definición de la clase Libro

Libro::Libro(const std::string& titulo, const std::string& autor)
    : titulo(titulo), autor(autor) {}

void Libro::info() {
    std::cout << "El libro " << titulo << " fue escrito por " << autor << std::endl; // Imprime la información del libro
}

#include "Autor.h"

Autor::Autor(const std::string& nombre, const std::string& genero)
    : nombre(nombre), genero(genero) {}

void Autor::info() {
    std::cout << "El autor " << nombre << " escribe principalmente género " << genero << std::endl;
}

#include "Bibliotecario.h"

Bibliotecario::Bibliotecario(const std::string& nombre, int aniosDeServicio)
    : nombre(nombre), aniosDeServicio(aniosDeServicio) {}

void Bibliotecario::info() {
    std::cout << "El bibliotecario " << nombre << " ha estado trabajando en la biblioteca por " << aniosDeServicio << " años." << std::endl;
}

// Incluye los headers de Libro, Autor y Bibliotecario
#include "Libro.h"
#include "Autor.h"
#include "Bibliotecario.h"

int main() {
    Libro libro("1984", "George Orwell");
    libro.info();

    Autor autor("George Orwell", "distopía");
    autor.info();

    Bibliotecario bibliotecario("Juan", 15);
    bibliotecario.info();

    return 0;
}

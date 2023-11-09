// Libro.cpp
#include "Libro.h"
#include <iostream>

Libro::Libro(const std::string& titulo, const std::string& autor)
    : titulo(titulo), autor(autor) {}

void Libro::info() {
    std::cout << "El libro " << titulo << " fue escrito por " << autor << std::endl;
}

// Autor.cpp
#include "Autor.h"
#include <iostream>

Autor::Autor(const std::string& nombre, const std::string& genero)
    : nombre(nombre), genero(genero) {}

void Autor::info() {
    std::cout << "El autor " << nombre << " escribe principalmente género " << genero << std::endl;
}

// Bibliotecario.cpp
#include "Bibliotecario.h"
#include <iostream>

Bibliotecario::Bibliotecario(const std::string& nombre, int aniosDeServicio)
    : nombre(nombre), aniosDeServicio(aniosDeServicio) {}

void Bibliotecario::info() {
    std::cout << "El bibliotecario " << nombre << " ha estado trabajando en la biblioteca por " << aniosDeServicio << " años." << std::endl;
}

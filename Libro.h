#ifndef LIBRO_H
#define LIBRO_H // Define LIBRO_H
#include <string>

// Define una clase Libro con dos atributos privados y un método público
class Libro {
public:
    Libro(const std::string& titulo, const std::string& autor); // Constructor con dos parámetros
    void info();

private:
    std::string titulo; // Atributo para el título del libro
    std::string autor; // Atributo para el autor del libro
};

#endif

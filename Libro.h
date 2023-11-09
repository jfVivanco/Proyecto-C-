// Libro.h
#ifndef LIBRO_H
#define LIBRO_H
#include <string>

class Libro {
public:
    Libro(const std::string& titulo, const std::string& autor);
    void info();

private:
    std::string titulo;
    std::string autor;
};

#endif


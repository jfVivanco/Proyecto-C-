// Autor.h
#ifndef AUTOR_H
#define AUTOR_H
#include <string>

class Autor {
public:
    Autor(const std::string& nombre, const std::string& genero);
    void info();

private:
    std::string nombre;
    std::string genero;
};

#endif


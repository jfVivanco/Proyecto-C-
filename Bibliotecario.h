// Bibliotecario.h
#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H
#include <string>

class Bibliotecario {
public:
    Bibliotecario(const std::string& nombre, int aniosDeServicio);
    void info();

private:
    std::string nombre;
    int aniosDeServicio;
};

#endif


#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include <string>

class Bibliotecario {
public:
    Bibliotecario(const std::string& nombre, int aniosDeServicio);
    void info();

    // Getters
    std::string getNombre() const;
    int getAniosDeServicio() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setAniosDeServicio(int aniosDeServicio);

private:
    std::string nombre;
    int aniosDeServicio;
};

#endif

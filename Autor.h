#ifndef AUTOR_H
#define AUTOR_H

#include <string>

class Autor {
public:
    Autor(const std::string& nombre, const std::string& genero);
    void info();

    // Getters
    std::string getNombre() const;
    std::string getGenero() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setGenero(const std::string& genero);

private:
    std::string nombre;
    std::string genero;
};

#endif

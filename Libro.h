#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
public:
    Libro(const std::string& titulo, const std::string& autor);
    void info();

    // Getters
    std::string getTitulo() const;
    std::string getAutor() const;

    // Setters
    void setTitulo(const std::string& titulo);
    void setAutor(const std::string& autor);

private:
    std::string titulo;
    std::string autor;
};

#endif

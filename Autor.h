#define AUTOR_H // Define AUTOR_H
#include <string>

// Define una clase de autor con dos atributos privados y un método público
class Autor {
public:
    Autor(const std::string& nombre, const std::string& genero);
    void info();

private:
    std::string nombre; // Atributo para el nombre del autor
    std::string genero; // Atributo para el genero del autor
};

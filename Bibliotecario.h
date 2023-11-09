#define BIBLIOTECARIO_H // Define BIBLIOTECARIO_H
#include <string>

// Define una clase de bibliotecario con dos atributos privados y un método público
class Bibliotecario {
public:
    Bibliotecario(const std::string& nombre, int aniosDeServicio);
    void info();

private:
    std::string nombre; // Atributo para el nombre del bibliotecario
    int aniosDeServicio; // Atributo para los años de servicio
};

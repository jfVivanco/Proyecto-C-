#include "Libro.h"
#include <iostream>

// Implementación del constructor
Libro::Libro(const std::string& titulo, const std::string& autor)
    : titulo(titulo), autor(autor) {}

// Implementación de info()
void Libro::info() {
    std::cout << "El libro " << titulo << " fue escrito por " << autor << std::endl;
}

// Implementación de getters y setters
std::string Libro::getTitulo() const {
    return titulo;
}

std::string Libro::getAutor() const {
    return autor;
}

void Libro::setTitulo(const std::string& nuevoTitulo) {
    titulo = nuevoTitulo;
}

void Libro::setAutor(const std::string& nuevoAutor) {
    autor = nuevoAutor;
}

#include "Autor.h"

// Implementación del constructor
Autor::Autor(const std::string& nombre, const std::string& genero)
    : nombre(nombre), genero(genero) {}

// Implementación de info()
void Autor::info() {
    std::cout << "El autor " << nombre << " escribe principalmente género " << genero << std::endl;
}

// Implementación de getters y setters
std::string Autor::getNombre() const {
    return nombre;
}

std::string Autor::getGenero() const {
    return genero;
}

void Autor::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Autor::setGenero(const std::string& nuevoGenero) {
    genero = nuevoGenero;
}

#include "Bibliotecario.h"

// Implementación del constructor
Bibliotecario::Bibliotecario(const std::string& nombre, int aniosDeServicio)
    : nombre(nombre), aniosDeServicio(aniosDeServicio) {}

// Implementación de info()
void Bibliotecario::info() {
    std::cout << "El bibliotecario " << nombre << " ha estado trabajando en la biblioteca por " << aniosDeServicio << " años." << std::endl;
}

// Implementación de getters y setters
std::string Bibliotecario::getNombre() const {
    return nombre;
}

int Bibliotecario::getAniosDeServicio() const {
    return aniosDeServicio;
}

void Bibliotecario::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Bibliotecario::setAniosDeServicio(int nuevosAniosDeServicio) {
    aniosDeServicio = nuevosAniosDeServicio;
}

#include "Biblioteca.h"

Biblioteca::Biblioteca(const std::string& nombre, Bibliotecario bibliotecario)
    : nombre(nombre), bibliotecario(bibliotecario) {}

void Biblioteca::agregarLibro(const Libro& libro) {
    inventario.push_back(libro);
}

void Biblioteca::mostrarInventario() const {
    std::cout << "Inventario de la biblioteca '" << nombre << "':" << std::endl;
    for (const Libro& libro : inventario) {
        std::cout << " - " << libro.getTitulo() << " (" << libro.getAutor() << ")" << std::endl;
    }
}

int main() {
    // Crear instancia de Libro
    Libro libro("1984", "George Orwell");
    
    // Usar getters
    std::cout << "Título del libro: " << libro.getTitulo() << std::endl;
    std::cout << "Autor del libro: " << libro.getAutor() << std::endl;
    std::cout << std::endl;

    // Usar setters
    libro.setTitulo("Animal Farm");
    libro.setAutor("George Orwell");

    // Imprimir información actualizada
    libro.info();

    std::cout << std::endl;

    // Crear instancia de Autor
    Autor autor("George Orwell", "distopía");

    // Usar getters
    std::cout << "Nombre del autor: " << autor.getNombre() << std::endl;
    std::cout << "Género del autor: " << autor.getGenero() << std::endl;
    std::cout << std::endl;

    // Usar setters
    autor.setNombre("Eric Arthur Blair");
    autor.setGenero("sátira");

    // Imprimir información actualizada
    autor.info();
    std::cout << std::endl;

    // Crear instancia de Bibliotecario
    Bibliotecario bibliotecario("Juan", 15);

    // Usar getters
    std::cout << "Nombre del bibliotecario: " << bibliotecario.getNombre() << std::endl;
    std::cout << "Años de servicio del bibliotecario: " << bibliotecario.getAniosDeServicio() << std::endl;
    std::cout << std::endl;

    // Usar setters
    bibliotecario.setNombre("Luis");
    bibliotecario.setAniosDeServicio(20);

    // Imprimir información actualizada
    bibliotecario.info();

    // Crear instancia de Biblioteca
    Biblioteca biblioteca("Biblioteca Central", bibliotecario);

    // Crear instancias de Libro
    Libro libro1("Cien años de soledad", "Gabriel Garcia Marquez");
    Libro libro2("Don Quijote de la Mancha", "Miguel de Cervantes");
    std::cout << std::endl;

    // Agregar libros a la biblioteca
    biblioteca.agregarLibro(libro1);
    biblioteca.agregarLibro(libro2);

    // Mostrar el inventario de la biblioteca
    biblioteca.mostrarInventario();

    return 0;
}

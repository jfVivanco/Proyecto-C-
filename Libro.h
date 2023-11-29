/*
 * Proyecto Progra
 * Jose Fernando Vivanco Benavides
 * A00838976
 * 28/11/2023
*/

/*
 * La clase Libro representa un libro y tiene atributos privados como nombre, autor, género, 
 *cantidad de "me gusta" y número de páginas. La clase incluye constructores para inicializar objetos 
 *con o sin parámetros, getters y setters para acceder y modificar los atributos, y un método abstracto 
 *puro llamado info() destinado a ser implementado por clases derivadas para mostrar información detallada del libro.
*/

#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

using namespace std;

// Declaración de la clase Libro
class Libro {
private:
    // Atributos privados
    std::string name;       // Nombre del libro
    std::string author;     // Autor del libro
    std::string genre;      // Género del libro
    int likes;              // Número de likes del libro
    int pages;              // Número de páginas del libro

public:
    // Constructores
    Libro(); // Constructor por defecto
    Libro(std::string nm, std::string thr, int lks, std::string gnr, int pgs) // Constructor con parámetros
        : name(nm), author(thr), genre(gnr), likes(lks), pages(pgs) {}

    // Métodos getters
    std::string get_name();         // Obtener nombre del libro
    std::string get_author();       // Obtener autor del libro
    int get_likes();                // Obtener número de likes del libro
    std::string get_genre();        // Obtener género del libro
    int get_pages();                // Obtener número de páginas del libro

    // Métodos setters
    void set_name(std::string);       // Establecer nombre del libro
    void set_author(std::string);     // Establecer autor del libro
    void set_likes(int);              // Establecer número de likes del libro
    void set_genre(std::string);      // Establecer género del libro
    void set_pages(int);              // Establecer número de páginas del libro

    // Método abstracto puro para mostrar información del libro
    virtual void info() = 0;
};

// Implementación de los getters
string Libro::get_name(){
  return name;
}

string Libro::get_author(){
  return author;
}

int Libro::get_likes(){
  return likes;
}

string Libro::get_genre(){
  return genre;
}

int Libro::get_pages(){
  return pages;
}

// Implementación de los setters
void Libro::set_name(string nm){
  name = nm;
}

void Libro::set_author(string thr){
  author = thr;
}

void Libro::set_likes(int lks){
  likes = lks;
}

void Libro::set_genre(string gnr){
  genre = gnr;
}

void Libro::set_pages(int pgs){
  pages = pgs;
}

#endif

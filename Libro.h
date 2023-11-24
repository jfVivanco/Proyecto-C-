#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

using namespace std;

class Libro {
private:
    std::string name;
    std::string author;
    std::string genre;
    int likes;
    int pages;

public:
    // Constructores
    Libro(); // Constructor por defecto
    Libro(std::string nm, std::string thr, int lks, std::string gnr, int pgs) // Constructor con parámetros
        : name(nm), author(thr), genre(gnr), likes(lks), pages(pgs) {}

    // Métodos getters
    std::string get_name();
    std::string get_author();
    int get_likes();
    std::string get_genre();
    int get_pages();

    // Métodos setters
    void set_name(std::string);
    void set_author(std::string);
    void set_likes(int);
    void set_genre(std::string);
    void set_pages(int);

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

#ifndef LIBRO_H
#define LIBRO_H
#include<string>
#include <vector>
#include <iostream>

using namespace std;

class Libro{

private:
    string name;
    string author;
    string genre;
    int likes;
    int pages;

public:
  Libro();
  Libro(string nm, string thr, int lks, string gnr, int pgs) : name(nm), author(thr), likes(lks), genre(gnr), pages(pgs) {};


  string get_name();
  string get_author();
  int get_likes();
  string get_genre();
  int get_pages();

  void set_name(string);
  void set_author(string);
  void set_likes(int);
  void set_genre(string);
  void set_pages(int);

virtual void info() = 0;

};

//getters
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

//setters
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

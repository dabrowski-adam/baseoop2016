#include "Blok.hpp"

/* poziomy() - value-initialization
   the default constructor of std::vector
   will be called */
Blok::Blok() : poziomy() {}

Blok::~Blok() {
    for (auto it = this->poziomy.begin(); it != this->poziomy.end(); ++it) {
        delete (*it); // Call the destructor of Poziom
    }
}

void Blok::dodajPoziom(Poziom *poziom) {}

void Blok::wyswietlPoziomy() {}

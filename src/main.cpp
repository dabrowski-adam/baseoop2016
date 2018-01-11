#include <iostream>
#include "Blok.hpp"
#include "Pietro.hpp"
#include "Okna.hpp"
#include "Drzwi.hpp"

int main() {
    // Remember to create objects on heap (sterta)
    Blok* blok = new Blok();

    blok->dodajPoziom(new Pietro('-'));         // -----
    blok->dodajPoziom(new Okna('|', false));    // | | |
    blok->dodajPoziom(new Pietro('|'));         // |---|
    blok->dodajPoziom(new Okna('|', true));     // |X|X|
    blok->dodajPoziom(new Pietro('|'));         // |---|
    blok->dodajPoziom(new Drzwi('|'));          // |[ ]|

    blok->wyswietlPoziomy();
    
    return EXIT_SUCCESS;
}
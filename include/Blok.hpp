#ifndef BLOK_HPP
#define BLOK_HPP

#include <vector> // Forward declaration not possible
#include "Poziom.hpp" // Here as well, since we access 
                      // a method of Poziom in Blok.cpp

class Blok {
  private:
    std::vector<Poziom*> poziomy;
	public:
		Blok();
    ~Blok();
    void dodajPoziom(Poziom* poziom);
    void wyswietlPoziomy();
};

#endif // BLOK_HPP

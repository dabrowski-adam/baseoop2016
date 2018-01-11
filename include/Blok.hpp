#ifndef BLOK_HPP
#define BLOK_HPP

#include<vector> // Forward declaration not possible

class Poziom; // Forward declaration

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

#ifndef OKNA_HPP
#define OKNA_HPP

#include "Poziom.hpp"

class Okna : Poziom {
	private:
		bool ozdobne;
	public:
		Okna(char sciana, bool ozdobne);
    ~Okna();
		virtual void wyswietl();
};

#endif // OKNA_HPP
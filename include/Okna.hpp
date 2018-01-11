#ifndef OKNA_HPP
#define OKNA_HPP

#include "Poziom.hpp"

class Okna : public Poziom {
	private:
		bool ozdobne;
	public:
		Okna(char sciana, bool ozdobne);
    ~Okna();
		virtual void wyswietl();
		bool getOzdobne();
};

#endif // OKNA_HPP

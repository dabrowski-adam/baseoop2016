#ifndef DRZWI_HPP
#define DRZWI_HPP

#include "Poziom.hpp"

class Drzwi : public Poziom {
	public:
		Drzwi(char sciana);
    ~Drzwi();
		virtual void wyswietl();
};

#endif // DRZWI_HPP

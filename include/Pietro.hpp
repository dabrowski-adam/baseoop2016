#ifndef PIETRO_HPP
#define PIETRO_HPP

#include "Poziom.hpp"

class Pietro : public Poziom {
	public:
		Pietro(char sciana);
    ~Pietro();
		virtual void wyswietl();
};

#endif // PIETRO_HPP

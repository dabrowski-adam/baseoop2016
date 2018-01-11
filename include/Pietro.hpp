#ifndef PIETRO_HPP
#define PIETRO_HPP

#include "Poziom.hpp"

class Pietro : Poziom {
	private:
		bool dach;
	public:
		Pietro(char sciana);
    ~Pietro();
		virtual void wyswietl();
};

#endif // PIETRO_HPP

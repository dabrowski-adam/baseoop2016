#include "Drzwi.hpp"
#include <iostream>

Drzwi::Drzwi(char sciana) : Poziom(sciana) {}

Drzwi::~Drzwi() {}

void Drzwi::wyswietl() {
    std::cout << this->getSciana() << "[ ]" << this->getSciana();
}
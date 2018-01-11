#include "Okna.hpp"
#include <iostream>

Okna::Okna(char sciana, bool ozdobne) 
    : Poziom(sciana), ozdobne(ozdobne) {}

Okna::~Okna() {}

void Okna::wyswietl() {
    if (this->ozdobne) {
        std::cout << this->getSciana() << "X|X" << this->getSciana();
    } else {
        std::cout << this->getSciana() << " | " << this->getSciana();
    }
}

bool Okna::getOzdobne() { return this->ozdobne; }
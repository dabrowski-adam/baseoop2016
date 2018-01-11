#include "Pietro.hpp"
#include <iostream>

Pietro::Pietro(char sciana) : Poziom(sciana) {}

Pietro::~Pietro() {}

void Pietro::wyswietl() {
    if (this->dach) {
        std::cout << "-----";
    } else {
        std::cout << this->getSciana() << "---" << this->getSciana();
    }
}

bool Pietro::getDach() { return this->dach; }
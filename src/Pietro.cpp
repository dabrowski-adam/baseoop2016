#include "Pietro.hpp"
#include <iostream>

Pietro::Pietro(char sciana) : Poziom(sciana) {}

Pietro::~Pietro() {}

void Pietro::wyswietl() {
    std::cout << this->getSciana() << "---" << this->getSciana();
}
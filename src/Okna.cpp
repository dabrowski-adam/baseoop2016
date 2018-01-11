#include "Okna.hpp"

Okna::Okna(char sciana, bool ozdobne) 
    : Poziom(sciana), ozdobne(ozdobne) {}

Okna::~Okna() {}

void Okna::wyswietl() {}

bool Okna::getOzdobne() { return this->ozdobne; }
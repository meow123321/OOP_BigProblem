#include"Persoana.h"

Persoana::Persoana(string nume, string prenume, string CNP) {
	this->nume = nume;
	this->prenume = prenume;
	this->CNP = CNP;
}

void Persoana::Afisare() {
	cout << "Numele: " << this->nume << endl;
	cout << "Prenumele:" << this->prenume << endl;
	cout << "CNP: " << this->CNP << endl;
}

Persoana::Persoana(){}
Persoana::~Persoana(){}
#include"Angajat.h"

Angajat::Angajat(string nume, string prenume, string CNP, string CodAngajat, string post): 
	Persoana(nume, prenume,CNP) {
	this->CodAngajat = CodAngajat;
	this->post = post;
}

void Angajat::Afisare() {
	cout << "Numele: " << this->nume << endl;
	cout << "Prenumele:" << this->prenume << endl;
	cout << "CNP: " << this->CNP << endl;
	cout << "Cod angajat: " << this->CodAngajat << endl;
}

Angajat::Angajat(){}

Angajat::~Angajat(){}
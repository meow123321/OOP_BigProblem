#pragma once
#include"Persoana.h"

class Angajat : public Persoana {
public:
	string CodAngajat;
	string post;

	Angajat();
	Angajat(string nume, string prenume, string CNP, string CodAngajat, string post);
	virtual void Afisare();
	~Angajat();
};
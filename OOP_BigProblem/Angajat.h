#pragma once
#include"Persoana.h"

class Angajat : public Persoana {
public:
	string CodAngajat;

	Angajat(string nume, string prenume, string CNP, string CodAngajat);
	virtual void Afisare();
	~Angajat();
};
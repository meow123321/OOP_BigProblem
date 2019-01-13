#pragma once
#include"Angajat.h"
#include<vector>

class AngajatVanzari: public Angajat {
public:
	struct Vanzare {
		vector<pair<string, float>> Vanzare;
	};
	Vanzare vanzare;
	vector<Vanzare> ListaVanzarilor;

	AngajatVanzari();
	AngajatVanzari(string nume, string prenume, string CNP, string CodAngajat, string NumeProdus, float pret, string post);
	void Afisare();
	~AngajatVanzari();

};

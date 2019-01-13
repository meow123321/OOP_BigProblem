#pragma once
#include"Angajat.h"
#include<tuple>

class Programator : public Angajat {
public:

	struct Project {
	public:
		string NumeProiect;
		string Data;
		bool Starea;
	};
	Project proiect;
	string DataDeInceput;

	Programator();
	Programator(string nume, string prenume, string CNP, string CodAngajat, string numeProiect, string data, bool stare, string DataDeinceput, string post);
	void Afisare();
	~Programator();

};

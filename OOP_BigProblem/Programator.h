#pragma once
#include"Angajat.h"
#include<tuple>

class Programator : public Angajat {
public:
	tuple <string, string, bool> Proiect();
	string DataDeInceput;

	Programator(string numeProiect, string data, bool stare, string DataDeinceput);
	void Afisare();
	~Programator();

};

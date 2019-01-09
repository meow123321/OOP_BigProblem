#pragma once
#include"Angajat.h"
#include<vector>

class Manager : public Angajat {
public:
	vector<Angajat> Subordonati;

	Manager();
	void Afisare();
	~Manager();
};

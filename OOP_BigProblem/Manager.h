#pragma once
#include"Angajat.h"
#include<vector>

class Manager : public Angajat {
public:
	vector<Angajat> Subordonati;

	Manager();
	Manager(string nume, string preunme, string CNP, string CodAngajat, string post);
	void AfisareSubordonati();
	~Manager();
};

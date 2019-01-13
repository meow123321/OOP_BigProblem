#include"Manager.h"


Manager::Manager(string nume, string preunme, string CNP, string CodAngajat, string post):
	Angajat(nume, preunme, CNP, CodAngajat, post) {
	Subordonati.push_back(Angajat("Popescu", "Darius", "215487963254", "dsdgsf8767", "programator"));
	Subordonati.push_back(Angajat("Diaconu", "Alexandru", "654873219865", "645jgtkvb0", "angajat vanzari"));
	Subordonati.push_back(Angajat("Delcea", "Marius", "864565478325", "sgsf5466Hf", "angajat vanzari"));
	Subordonati.push_back(Angajat("Guran", "Alin", "214876549320", "54fsghHJ54","programator"));
}


Manager::Manager(){}
void Manager::AfisareSubordonati() {
	for (int i = 0; i < Subordonati.size(); i++) {
		Subordonati[i].Afisare();
	}
}

Manager::~Manager(){}

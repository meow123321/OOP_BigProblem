#include"Companie.h"

Companie::Companie() {
	angajat = new Angajat*[5];
	angajat[0] = new Manager("Ghera", "Alexandur", "012547896321", "87435DSFHSF", "manager");
	angajat[1] = new Programator("Popescu", "Darius", "215487963254", "dsdgsf8767", "Proiect 1", "12.10.2018", 1, "20.10.2018", "programator");
	angajat[2] = new AngajatVanzari("Diaconu", "Alexandru", "654873219865", "645jgtkvb0", "produs1", 10.00, "angajat vanzari");
	angajat[3] = new Programator("Guran", "Alin", "214876549320", "54fsghHJ54", "Proiectul 1", "12.10.2018", 1, "29.10.2018", "programator");
	angajat[4] = new AngajatVanzari("Delcea", "Marius", "864565478325", "sgsf5466Hf", "produs2", 234.45, "angajat vanzari");
	
}

Companie::~Companie() {
	delete[]angajat;
}
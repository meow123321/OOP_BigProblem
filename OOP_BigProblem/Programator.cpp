#include"Programator.h"

Programator::Programator(){}

Programator::Programator(string nume, string prenume, string CNP, string CodAngajat, string numeProiect, string data, bool stare, string DataDeinceput, string post):
	Angajat(nume, prenume, CNP, CodAngajat, post){
	this->proiect = { numeProiect,data,stare };
	this->DataDeInceput = DataDeinceput;
}

void Programator::Afisare() {
	cout <<"Numele proiectului" << this->proiect.NumeProiect << endl;
	cout <<"Data de inceput a proiectlui" << this->proiect.Data << endl;
	cout << "Starea proiectului" << this->proiect.Starea << endl;	
	cout << "Data la acre a inceput programatorul lucrul" <<  this->DataDeInceput << endl;
}
Programator::~Programator() {

}
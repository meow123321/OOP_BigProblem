#include"AngajatVanzari.h"

AngajatVanzari::AngajatVanzari(string nume, string prenume, string CNP, string CodAngajat,string NumeProdus, float pret, string post):
	Angajat(nume, prenume, CNP, CodAngajat, post) {
	for (int i = 0; i < vanzare.Vanzare.size(); i++) {
		this->vanzare.Vanzare[i].first = NumeProdus;
		this->vanzare.Vanzare[i].second = pret;
	}

}

AngajatVanzari::AngajatVanzari(){}

void AngajatVanzari::Afisare() {
	cout << "Lista de vanzari este: " << endl;
	for (int i = 0; i < vanzare.Vanzare.size(); i++) {
		cout << "Numele produsului vandut:" << endl;
		cout << this->vanzare.Vanzare[i].first << endl;
		cout << "Pretul produsului vandut:" << endl;
		cout << this->vanzare.Vanzare[i].second << endl;
		
	}
}

AngajatVanzari::~AngajatVanzari(){}
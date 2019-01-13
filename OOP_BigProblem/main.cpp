#include"Companie.h"

int main() {

	Companie companie;
	AngajatVanzari Lista;
	Programator proiect_m;
	int ProgN = 0;

	for (int i = 0; i < 6; i++) {
		
		if (companie.angajat[i]->post == "manager") {
			cout << "\nManager ul este:" << endl;
			cout << companie.angajat[i]->nume << " ";
			cout << companie.angajat[i]->prenume;
			cout << endl;
		}
		
		if (companie.angajat[i]->post == "programator") {
			cout << "\nProgramator:" << endl;
			cout << companie.angajat[i]->nume << " ";
			cout << companie.angajat[i]->prenume;
			cout << endl;
		}

		if (companie.angajat[i]->post == "angajat vanzari") {
			cout << "\nVanzarile efectuate:" << endl;
			for (int i = 0; i < Lista.ListaVanzarilor.size(); i++) {
				for (int j = 0; j < Lista.ListaVanzarilor[i].Vanzare.size(); j++) {
					cout << Lista.ListaVanzarilor[i].Vanzare[j].first << " ";
					cout << Lista.ListaVanzarilor[i].Vanzare[j].second << endl;
				}
			}
		}

		if (companie.angajat[i]->post == "programator") {
			if (proiect_m.proiect.Starea == 0) {		//Starea <Inchis> =0 <Deschis> = 1
				cout << "\nProgramator ce lucreaza la proiect cu starea <Inchis>:";
				cout << companie.angajat[i]->nume << " ";
				cout << companie.angajat[i]->prenume;
				ProgN++;
			}
		}
	}
	if (ProgN == 0) {
		cout << "Nu exista programatori care lucreaza la proiecte cu starea <Inchis>" << endl;
	}
	else {
		cout << ProgN << endl;
	}
	
	system("pause");
	return 0;
}
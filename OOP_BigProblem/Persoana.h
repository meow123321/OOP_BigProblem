#pragma once
#include<iostream>
#include<string>

using namespace std;

class Persoana {
public:
	string nume;
	string prenume;
	string CNP;


	Persoana(string nume, string prenume, string CNP);
	virtual void Afisare();
	~Persoana();
};

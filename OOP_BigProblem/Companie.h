#pragma once
#include"AngajatVanzari.h"
#include"Programator.h"
#include"Manager.h"

class Companie : public Manager, public Programator, public AngajatVanzari {
	friend class Manager;
	friend class Programator;
	friend class AgentVanzari;
public:
	Angajat ** angajat;

	Companie();
	~Companie();
	
	

};

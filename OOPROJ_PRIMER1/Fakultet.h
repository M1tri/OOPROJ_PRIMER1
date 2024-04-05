#pragma once
#include "Odsek.h"
#include "Student.h"

class Fakultet
{
private:
	char* naziv;
	char datumOsnivanja[12];
	Odsek** odseci;
	int maxBrOdseka;
	int trBrOdseka;
	static Fakultet* instanca;
	Fakultet();
	Odsek* PronadjiOdsek(const char* naziv);

public:	
	// Ako se ovo omoguci onda postaje singleton

	//Fakultet(const Fakultet&) = delete;
	//Fakultet& operator=(const Fakultet&) = delete;

	static Fakultet* GetInstanca();
	bool UpisiStudenta(Student* s, const char* naziv);
	void PostaviParametre(const char* naziv, const char* datumOsnivanja, int maxBrOdseka);
	void DodajOdsek(Odsek* o);
	virtual ~Fakultet();
	void Prikaz();
};
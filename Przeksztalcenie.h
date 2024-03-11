#ifndef PRZEKSZTALCENIE_H
#define PRZEKSZTALCENIE_H

#include "Bitmapa.h"

class Przeksztalcenie
{
public:
	/*
	* Metoda wirtualna s�u��ca do przekszta�cenia funkcji
	* @param referencja do obiektu klasy Bitmapa
	*/
	virtual void przeksztalc(Bitmapa<bool>&) = 0;
};

#endif
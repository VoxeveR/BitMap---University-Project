#ifndef BITMAPA_H
#define BITMAPA_H

// Klasa abstrakcyjna reprezentuj�ca bitmap�
template<typename typeA>
class Bitmapa
{
public:
	/*
	* Zwraca d�ugo�� (liczb� wierszy) bitmapy.
	* @return D�ugo�� bitmapy.
	*/
	virtual unsigned length() const = 0;
	/*
	* Zwraca szeroko�� (liczb� kolumn) bitmapy.
	* @return Szeroko�� bitmapy.
	*/
	virtual unsigned width() const = 0;
	/*
	* Pozwala na dost�p do elementu bitmapy w okre�lonym miejscu.
	* @param x Wsp�rz�dna x (kolumna) elementu.
	* @param y Wsp�rz�dna y (wiersz) elementu.
	* @return Referencja do elementu bitmapy w okre�lonym miejscu.
	 */
	virtual typeA& operator() (unsigned x, unsigned y) = 0;
	/*
	* Pozwala na odczytanie elementu bitmapy w okre�lonym miejscu.
	* @param x Wsp�rz�dna x (kolumna) elementu.
	* @param y Wsp�rz�dna y (wiersz) elementu.
	* @return Kopi� elementu bitmapy w okre�lonym miejscu.
	*/
	virtual typeA operator() (unsigned x, unsigned y) const = 0;
	/*
	* Wirtualny destruktor klasy abstrakcyjnej Bitmapa.
	* Zapewnia poprawne zwolnienie pami�ci przy usuwaniu obiekt�w pochodnych.
	*/
	virtual ~Bitmapa() {}
};

#endif
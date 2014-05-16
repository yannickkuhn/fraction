/*
 * fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: Yannick KUHN
 */

#include "fraction.hpp"

Fraction::Fraction() {
}

Fraction::Fraction(int n, int d) {
	_numerateur = n;
	_denominateur = d;
}

Fraction::~Fraction() {

}

const int Fraction::getNumerateur() const {
	return _numerateur;
}
const int Fraction::getDenominateur() const {
	return _denominateur;
}

void Fraction::setNumerateur(const int iNumerateur) {
	_numerateur = iNumerateur;
}
void Fraction::setDenominateur(const int iDenominateur) {
	_denominateur = iDenominateur;
}

string Fraction::afficher() {
	stringstream nss (stringstream::in | stringstream::out);
	nss << _numerateur << "/" << _denominateur;
	return nss.str();
}

void Fraction::addition(int iNombre) {
	_numerateur += iNombre;
}

void Fraction::addition(const Fraction &iF) {

	// on calcule le coefficient multiplicateur
	float aCoefMul;
	if(iF._denominateur >= _denominateur) {
		aCoefMul = (float)iF.getDenominateur() / (float)_denominateur;
		_denominateur *= aCoefMul;
		_numerateur *= aCoefMul + iF.getNumerateur();
	}
	else {
		aCoefMul = (float)_denominateur / (float)iF.getDenominateur();
		float aIFNum = 0, aIFDen = 0;
		aIFDen = aIFDen * aCoefMul;
		aIFNum = aIFNum * aCoefMul;
		_denominateur += aIFDen;
		_numerateur += aIFNum;
	}

}

/*
 * fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: Yannick KUHN
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

#include <string>

using namespace std;

class Fraction {
public:
	Fraction();
	Fraction(int n, int d);
	virtual ~Fraction();
	const int getNumerateur() const;
	const int getDenominateur() const;
	void setNumerateur(const int iNumerateur);
	void setDenominateur(const int iDenominateur);
	string afficher();

private:
	int _numerateur;
	int _denominateur;
};

#endif /* FRACTION_HPP_ */

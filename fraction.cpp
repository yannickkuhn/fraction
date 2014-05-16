/*
 * fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: Yannick KUHN
 */

#include "fraction.hpp"

fraction::fraction() {


}

fraction::~fraction() {

}

const int fraction::getNumerateur() const {
	return _numerateur;
}
const int fraction::getDenominateur() const {
	return _denominateur;
}
void fraction::setNumerateur(const int iNumerateur) {
	_numerateur = iNumerateur;
}
void fraction::setDenominateur(const int iDenominateur) {
	_denominateur = iDenominateur;
}


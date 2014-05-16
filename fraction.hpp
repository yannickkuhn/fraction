/*
 * fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: Yannick KUHN
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

class fraction {
public:
	fraction();
	virtual ~fraction();
	const int getNumerateur() const;
	const int getDenominateur() const;
	void setNumerateur(const int iNumerateur);
	void setDenominateur(const int iDenominateur);

private:
	int _numerateur;
	int _denominateur;
};

#endif /* FRACTION_HPP_ */

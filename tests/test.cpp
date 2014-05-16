/*
 * test.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: YANNICK
 */

#include <gtest/gtest.h>
#include <string>
#include "../src/fraction.hpp"

using namespace std;

TEST(fractions, tests) {
	Fraction aF1(1,2);
	EXPECT_EQ("1/2", aF1.afficher());
}

TEST(fractions, testsAdditions) {
	Fraction aF2(1,2);
	int aI1 = 6;
	aF2.addition(6);
	EXPECT_EQ("7/2", aF2.afficher());

	Fraction aF3(1,2);
	Fraction aF4(4,4);
	aF3.addition(aF4);
	EXPECT_EQ("6/4", aF3.afficher());
}

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

// Copyright 2023 Asoskov Mikhail

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Asoskov_Mikhail_ComplexNumberTest, Can_Not_Equals) {
    // Arrange
    double re1 = 1.0;
    double im1 = 2.0;
    double re2 = 3.0;
    double im2 = 4.0;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);

    // Act
    bool res = a != b;

    // Assert
    ASSERT_TRUE(res);
}

TEST(Asoskov_Mikhail_ComplexNumberTest, Can_Equals) {
    // Arrange
    double re = 1.0;
    double im = 2.0;
    ComplexNumber a(re, im);
    ComplexNumber b(re, im);

    // Act
    bool res = a == b;

    // Assert
    ASSERT_TRUE(res);
}

TEST(Asoskov_Mikhail_ComplexNumberTest, Can_Division) {
    // Arrange
    double re = 1.0;
    double im = 2.0;
    ComplexNumber a(re, im);
    ComplexNumber b(re, im);

    // Act
    ComplexNumber c = a / b;

    // Assert
    ASSERT_EQ(c.getRe(), 1.0);
    ASSERT_EQ(c.getIm(), 0.0);
}

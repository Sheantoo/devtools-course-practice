// Copyright 2023 Asoskov Mikhail

#include <gtest/gtest.h>
#include "../include/array_permutation.h"

TEST(Asoskov_Mikhail_ArrayPermutationTest, Can_find_permutation) {
    // Arrange
    std::vector<int> numbers = {1, 2, 3};
    std::vector<std::vector<int>> result;
    ArrayPermutaionGenerator::Generator(&numbers, 0, &result);

    // Act
    std::vector<std::vector<int>> expectResult = { {1, 2, 3},
                                                    {1, 3, 2},
                                                    {2, 1, 3},
                                                    {2, 3, 1},
                                                    {3, 2, 1},
                                                    {3, 1, 2}};

    // Assert
    ASSERT_EQ(result, expectResult);
}

TEST(Asoskov_Mikhail_ArrayPermutationTest,
            Can_find_permutation_with_random_array) {
    // Arrange
    int size = 3;
    std::vector<int> numbers = ArrayPermutaionGenerator::randArray(5);
    std::vector<std::vector<int>> result;
    ArrayPermutaionGenerator::Generator(&numbers, 0, &result);

    // Act
    const int countPermutation = 120;

    // Assert
    ASSERT_EQ(result.size(), countPermutation);
}

TEST(Asoskov_Mikhail_ArrayPermutationTest,
            Can_find_permutation_with_negative_numbers) {
    // Arrange
    std::vector<int> numbers = {-10, -20};
    std::vector<std::vector<int>> result;
    ArrayPermutaionGenerator::Generator(&numbers, 0, &result);

    // Act
    std::vector<std::vector<int>> expectResult = { {-10, -20}, {-20, -10} };

    // Assert
    ASSERT_EQ(result, expectResult);
}

TEST(Asoskov_Mikhail_ArrayPermutationTest,
            Can_find_permutation_with_one_numbers_in_array) {
    // Arrange
    std::vector<int> numbers = {5};
    std::vector<std::vector<int>> result;
    ArrayPermutaionGenerator::Generator(&numbers, 0, &result);

    // Act
    std::vector<std::vector<int>> expectResult = { {5} };

    // Assert
    ASSERT_EQ(result, expectResult);
}

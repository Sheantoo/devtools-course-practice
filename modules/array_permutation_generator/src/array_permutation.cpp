// Copyright 2023 Asoskov Mikhail

#include "include/array_permutation.h"

void ArrayPermutaionGenerator::Generator(std::vector<int>* numbers,
                                int start,
                                std::vector<std::vector<int>>* result) {
    const size_t countNumbers = numbers->size();


    if (start == countNumbers - 1) {
        result->push_back(*numbers);
        return;
    }

    for (int i = start; i < countNumbers; i++) {
        std::swap(numbers->at(start), numbers->at(i));
        Generator(numbers, start + 1, result);
        std::swap(numbers->at(start), numbers->at(i));
    }
}

std::vector<int> ArrayPermutaionGenerator::randArray(int size) {
    std::vector<int> array(size);
    std::random_device random_device;
    std::mt19937 generation(random_device());
    for (int i = 0; i < size; i++)
        array[i] = static_cast<int>(generation() % 10);
    return array;
}

//
//  BubbleSort.cpp
//  Sorting Algorithms
//
//  Created by Ashot Tadevosyan on 13.09.23.
//

#include "BubbleSort.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int random(int max_size)
{
    return 75 + static_cast<int>(std::rand() / (RAND_MAX / max_size + 1));
}


void bubbleSort(std::vector<int> numbers, int n)
{
    for (size_t i {}; i < n - 1; ++i)
    {
        for (size_t j {}; j < n - 1 - i; ++j)
        {
            if (numbers[j] > numbers[j+1])
            {
                int key = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = key;

            }
        }
    }
}


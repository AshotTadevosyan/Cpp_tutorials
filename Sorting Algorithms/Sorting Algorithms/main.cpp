//
//  main.cpp
//  Sorting Algorithms
//
//  Created by Ashot Tadevosyan on 13.09.23.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "BubbleSort.hpp"


int main(int argc, const char * argv[])
{
    // initialize the random function
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
    const int amount {20};
    std::vector<int> numbers;
    
    for (size_t i {}; i < amount; ++i)
    {
        numbers.push_back(random(90));
    }
    
    bubbleSort(numbers, amount);
    
    for (size_t i {}; i < amount; ++i)
    {
        std::cout << i << std::setw(5);
    }
    std::cout << std::endl;
    
    
    return 0;
}


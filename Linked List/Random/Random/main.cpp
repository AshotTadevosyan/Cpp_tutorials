//
//  main.cpp
//  Random
//
//  Created by Ashot Tadevosyan on 08.09.23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

unsigned random(size_t n)
{
    return 1 + static_cast<unsigned>(std::rand() / (RAND_MAX / n + 1));
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
    std::cout << random(10) << std::endl;
    return 0;
}

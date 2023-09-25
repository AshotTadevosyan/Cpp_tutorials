//
//  main.cpp
//  Inheritance
//
//  Created by Ashot Tadevosyan on 22.09.23.
//

#include <iostream>
#include <vector>
#include "Ex13-4.h"


int main(int argc, const char * argv[])
{
    
    std::vector<Employee> employees
    { Employee("Randy Marathon", 23, Gender::male, 34567),
      Employee("Anna Pothecary", 35, Gender::female, 34578),
      Employee("Peter Out", 34, Gender::male, 34589),
      Employee("Sheila Rangeit", 56, Gender::female, 34598),
      Employee("Jack Ittin", 66, Gender::male, 34667)
    };

      for (const auto& employee : employees)
        employee.who();

      std::cout << std::endl;

      std::vector<Executive> executives
      { Executive("Irwin Pootlemeyer", 44, Gender::male, 35567),
        Executive("Alexa Workwell", 32, Gender::female, 35578),
        Executive("Steve Stove", 42, Gender::male, 35589),
        Executive("Sue Neenuf", 33, Gender::female, 35598),
        Executive("Melanie Clair", 29, Gender::female, 35667)
      };

      for (const auto& executive : executives)
      {
        executive.who();
        executive.Employee::who();
      }
    return 0;
}

//
//  Ex13-4.h
//  Inheritance
//
//  Created by Ashot Tadevosyan on 25.09.23.
//

#ifndef Ex13_4_h
#define Ex13_4_h

#include <iostream>
#include <string>

enum class Gender {male, female};

class Person
{
private:
    int age;
    std::string name;
    Gender gender {Gender::female};
    
public:
    
    Person(std::string _name, int _age, Gender _gender)
    : name{_name}, age{_age}, gender{_gender} {}
    
    Person() = default;
    
    void who() const
    {   std::cout << "\nThis is " << name << " who is " << age << " years old." << std::endl;
    }
    
    void birthday() { ++age; }
    
protected:
    int getAge() const { return age; }
    const std::string& getName() const { return name; }
    Gender getGender() const { return gender; }
    
    bool isMale() const {return gender == Gender::male;}
    bool isFemale() const {return gender == Gender::female;}

};

class Employee : public Person
{
private:
    int ID;
    
public:
    Employee(std::string _name, int _age, Gender _gender, int _ID)
    : Person{_name, _age, _gender}, ID{_ID} {}
    
    Employee() = default;
    
    void who() const { std::cout << getName() << " is a " << (isFemale()? "female":                      "male") << " employee aged " << getAge() << "." << std::endl;
                     }
    
protected:
    int getID() {return ID;}
};

class Executive : public Employee
{
public:
    Executive(std::string _name, int _age, Gender _gender, int _ID)
    : Employee{_name, _age, _gender, _ID} {}
    
    Executive() = default;
    
    void who() const {std::cout << getName() << " is a " << (isFemale()? "female" :                                        "male") << " executive." << std::endl;
                     }
};

#endif /* Ex13_4_h */

#ifndef MULTITON_H
#define MULTITON_H

#include <iostream>
#include <string>
#include <vector>

const static int MaxObjects = 3;

class MyClass
{
public:
    int size();
    static MyClass& CreateObject();
    std::string GetName() const;
    void SetName(const std::string&);
    ~MyClass() = default;
private:
    MyClass() = default;
    int age;
    std::string name;
    static int count;
    static std::vector<MyClass*> vec;
};

int MyClass::count = 0;
std::vector<MyClass*> MyClass::vec = {};

#endif // MULTITON_H

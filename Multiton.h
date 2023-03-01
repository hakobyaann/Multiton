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

int main()
{
    MyClass& obj1 = MyClass::CreateObject();
    MyClass& obj2 = MyClass::CreateObject();
    MyClass& obj3 = MyClass::CreateObject();
    MyClass& obj4 = MyClass::CreateObject();
    MyClass& obj5 = MyClass::CreateObject();
    MyClass& obj6 = MyClass::CreateObject();
    MyClass& obj7 = MyClass::CreateObject();
    obj1.SetName("Thomas");
    obj2.SetName("Anna");
    obj3.SetName("Lily");
    obj4.SetName("Mary");
    obj7.SetName("Harry");
   std::cout << obj1.GetName() << std::endl;
   std::cout << obj2.GetName() << std::endl;
   std::cout << obj3.GetName() << std::endl;
   std::cout << obj4.GetName() << std::endl;
   std::cout << obj5.GetName() << std::endl;
   std::cout << obj6.GetName() << std::endl;
   std::cout << obj7.GetName() << std::endl;
   std::cout << obj4.GetName() << std::endl;
   std::cout << obj5.GetName() << std::endl;
   std::cout << obj6.GetName() << std::endl;
   std::cout << obj7.GetName() << std::endl;
}

#endif // MULTITON_H
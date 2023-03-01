#include <iostream>

#include "Multiton.h"

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
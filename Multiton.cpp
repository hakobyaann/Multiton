#include "Multiton.h"

int MyClass::size()
{
    return vec.size();
}

inline MyClass& MyClass::CreateObject()
{
    {
        if (vec.empty())
        {
            vec.push_back(new MyClass());
            ++count;
            return *vec[count - 1];
        }
        else if (vec.size() < 3 && count != 3)
        {
            vec.push_back(new MyClass());
            ++count;
            return *vec[count - 1];
        }
        else if (count == 3)
        {
            count = 0;
        }
        ++count;
        return *vec[count - 1];
    }
}
inline std::string MyClass::GetName() const
{
    return name;
}
inline void MyClass::SetName(const std::string& n)
{
    name = n;
}
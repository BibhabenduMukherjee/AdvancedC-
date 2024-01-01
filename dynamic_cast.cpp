#include <bits/stdc++.h>

class Base
{
public:
    virtual ~Base() {}
};

class Derived1 : public Base
{
public:
    void display()
    {
        std::cout << "Derived1 Display\n";
    }
};
class Derived2 : public Base
{
public:
    void show()
    {
        std::cout << "Derived2 Show\n";
    }
};
// dynamic_cast is a powerful tool for performing safe downcasting within class
// hierarchies when runtime type information is available
int main()
{
    Base *baseptr = new Derived1();
    Derived1 *derivedPtr1 = dynamic_cast<Derived1 *>(baseptr);

    if (derivedPtr1 != nullptr)
    {
        std::cout << "Dynamic cast to Derived1 successful\n";
        derivedPtr1->display(); // Safe to call Derived1's member function
    }
    else
    {
        std::cout << "Dynamic cast to Derived1 failed\n";
    }
    Derived2 *derivedPtr2 = dynamic_cast<Derived2 *>(baseptr);
    if (derivedPtr2 != nullptr)
    {
        std::cout << "Dynamic cast to Derived2 successful\n";
        derivedPtr2->show(); // Safe to call Derived2's member function
    }
    else
    {
        std::cout << "Dynamic cast to Derived2 failed\n";
    }

    delete baseptr;

    return 0;
}
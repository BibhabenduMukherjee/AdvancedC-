#include <bits/stdc++.h>
using namespace std;
// When a function or another class is declared as a friend of a particular class, it means it has access to that class's private and protected members,
class Base{
    int x;
    public:
        Base(){}
        Base(int x):x(x){} 
        // Can be method or class `Now fun has ability to access the private or protected members of class Base`
        friend void fun(Base &);
};

// Modifying member x values using friend function 
void fun(Base &obj){
    cout << obj.x << '\n';

}
int main(){
    Base b(10);
    fun(b);
    return 0;
}
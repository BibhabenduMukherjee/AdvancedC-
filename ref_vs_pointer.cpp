#include <bits/stdc++.h>
using namespace std;


// In C++, both references and pointers are used to indirectly access data but they 
// have some fundamental differences in how they operate and the way they're used in code.
int  main (){
   
    // REFERENCES 
    
    int x = 5;
    int& ref = x;  // Reference to variable x

    int y = 10;
    ref = y; // Changes the value of x, not reassigning the reference itself
    
    cout << ref; 

    // POINTERS

    int Y = 5;
    int* ptr = &Y;
    
    int Z = 10;
    ptr = &Z;  // can be reassinged by another object



   // 1 . References cannot be null, while pointers can be null.
   // 2 . References cannot be reseated to refer to another object after initialization, while pointers
   //     can be reassigned to point to different objects.

    return  0;
}


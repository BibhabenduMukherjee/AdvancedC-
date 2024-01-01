#include <bits/stdc++.h>
using namespace std;

void processData(int *data);
const int *getImmutableData();

int main()
{

    const int a = 10;
    int *mut = const_cast<int *>(&a);
    *mut = 20;
    cout << a << " ";

    /*

    Let's say you have a function that performs some processing and is designed to
    accept a non-const pointer:    void processData(int* data);

    However, the data you have is logically constant and should not be modified by processData.
    The external library, unfortunately, provides only a non-const interface for retrieving this data:
     const int* getImmutableData();


    In this case, getImmutableData returns a pointer to const data, but processData accepts a
     non-const pointer. To interface these components, you might use const_cast in a
     controlled and careful manner
    */

    const int *immutableData = getImmutableData(); // const pointer return type
    int *mutableData = const_cast<int *>(immutableData); // Removing constness temporarily

    processData(mutableData);  // pass mutableData after Removing constness

    return 0;
}
// NAME - SHLOKA PATEL 
// PRN - 23070123120 
// EXPERIMENT - 9(B) 

// Program to create one-dimensional array of pointers. 

#include <iostream> 
using namespace std; 

int main() 
{
    int* p=new int[7];  // Creating an array 

    for (int i=0; i<5; i++)  // Initializing the aray p[]
    {
        p[i]=10*(i+1);
    }

    cout<<*p<<"\n"; 
    cout<<*p+1<<"\n";
    cout<<*(p+1)<<"\n";
    cout<<2[p]<<"\n";
    cout<<p[2]<<"\n";
    *p++;

    cout<<*p;                 // Pointing to next location. 

    return 0; 
}

// Output 
// 10
// 11
// 20
// 30
// 30
// 20
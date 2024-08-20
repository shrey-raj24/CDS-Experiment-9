// NAME - SHREY RAJ 
// PRN - 23070123123
// EXPERIMENT - 9(A) 

// Program to illustrate pointers. 

#include <bits/stdc++.h> 
using namespace std;
void geeks()
{
    int var = 5;

    int* ptr;                  // Declaring pointer variable. 

    ptr = &var;

    cout<<"Value at ptr = "<<ptr<<"\n";
    cout<<"Value at var = " <<var<<"\n";
    cout<<"Value at *ptr = "<<*ptr<<"\n";

}

// Driver Program 

int main()
{
    geeks();
    return 0;
} 

// Output 
// Value at ptr = 0x61ff08
// Value at var = 5
// Value at *ptr = 5
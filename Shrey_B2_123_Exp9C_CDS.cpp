// NAME - SHLOKA PATEL 
// PRN - 23070123120 
// EXPERIMENT - 9(C) 

#include <iostream>
using namespace std;
int main()
{
    int *p ,b=10;
    p = &b ;
    cout <<*p << "  " << b << endl <<p <<"  "<< &b<<endl;
    p++;
    cout<<"After increment:" <<p<<endl;
    float *n, a=8.923;
    n=&a;
    cout<< endl<<*n<<"  "<<a<<endl<<n<<"  "<<&a<<endl;
    n++;
    cout<<" After increment" <<n <<endl;
    char *ch, c(10);
    c='#';
    ch=&c;
    cout<< endl<< (void*)ch<<"  "<<endl;
    ch++;
    cout<<" After increment:" << (void*)ch<<endl;
    return 0;
}

// 10  10
// 0x61ff00  0x61ff00
// After increment:0x61ff04
// 
// 8.923  8.923
// 0x61fefc  0x61fefc
//  After increment0x61ff00 
// 0x61fefb
//  After increment:0x61fefc
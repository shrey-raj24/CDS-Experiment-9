# Experiment---9 

### Aim 
To study and implement C++ Pointer basics. 

### Software Used 
Visual Studio Code <br> 

### Theory 
Pointers are symbolic representations of addresses. <br> 
They enable programs to stimulate call-by-preference as well as to create and manipulate dynamic data structures. <br> 
Iterating over elements in arrays or other data structures is one of the main use of pointers. <br> 
The address of the variable that we are working with is assigned to the pointer variable that points to the same data type. <br>  

### Code 

(A) <br> 
```
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
```

(B) <br> 
```
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
```

(C) <br> 
```
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
```

### Output 

(A) <br> 
![](https://github.com/Shloka-Patel/Experiment---9-/blob/main/Output_9A.png) 

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---9-/blob/main/Output_9B.png) 

(C) <br> 
![](https://github.com/Shloka-Patel/Experiment---9-/blob/main/Output_9C.png) 
### Conclusion 
Learnt about pointers in C++. 

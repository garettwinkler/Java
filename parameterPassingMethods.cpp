#include <iostream>
using namespace std;
void swap(int* x, int* y)
{
    int z = *x;
    *x=*y;
    *y=z;
}
void swap(int& x, int& y)
{
    int z = x;
    x=y;
    y=z;
}

int main()
{
    int a = 45;
    int b = 35;
    cout<<"Before Swap\n";
    cout<<"a="<<a<<" b="<<b<<"\n";

    swap(&a,&b);
    cout<<"After Swap with pass by pointer\n";
    cout<<"a="<<a<<" b="<<b<<"\n";

    swap(a,b);
    cout<<"After Swap with pass by reference\n";
    cout<<"a="<<a<<" b="<<b<<"\n";
}

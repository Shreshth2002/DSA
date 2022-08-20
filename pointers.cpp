#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int *p = &i;
    cout << p <<endl;
    
    float j=10.2;
    float *pj = &j;
    cout << pj <<endl;

    double k=1234.344;
    double *pk = &k;
    cout << pk <<endl;

    return 0;
}
#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex<int> a(20,10);
    Complex<int> b(20,10);
    cin >> a;
    cin >> b;
    cout<<a*b<<endl;

    return 0;
}

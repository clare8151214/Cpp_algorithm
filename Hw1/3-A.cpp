#include<iostream>
using namespace std;
int main()
{
	int n;
    int a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int i = 9;
        long long sum = 0;
        while(i <= b)
        {
            sum++;
            i = 10 * i + 9;
        }
        cout << sum*a << endl;
    }
	return 0;
}
/***
 *  a * 10 + b = a * b + a + b
 *  a * 10 = a * b + a
 *  10 = b + 1
 *  b = 9
 *  19 = 1*9+1+9
 *  29 = 2*9+2+9...
 * ***/

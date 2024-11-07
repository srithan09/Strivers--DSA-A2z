#include<bits/stdc++.h>
using namespace std;

double taylor(int x, int n)  // 1 + (x/1!) + (x^2/2!)
{
    static double p = 1;
    static double f = 1;
    if(n == 0)
    {
        return 1;
    }
    else
    {
        double r = taylor(x, n-1);
        p = p * x;
        f = f * n;
        return r + p/f;
    }
}

int main()
{
    int x, n;
    cout << "Enter the value of x and n" << endl;
    cin >> x >> n;
    double res = taylor(x, n);
    cout << res;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp_num;
    temp_num=n;
    int count = 0;
    while (n > 0)
    {
        int temp = n % 10;
        if (temp_num%temp == 0 || temp==1)
        {
            count++;
        }
        n /= 10;
    }
    cout << "Number of even digits: " << count << endl;
    return 0;
}
#include<iostream>

using namespace std;

    /*
        A 
        B C
        D E F 
        G H I J
    */

int main() 
{
    int n, i = 1;
    cin >> n;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch ;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
#include<iostream>

using namespace std;

    /*
        A B C D E
        A B C D E
        A B C D E
        A B C D E
        A B C D E
    */

int main()
{
    int n,i=1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
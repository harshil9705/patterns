#include<iostream>
using namespace std;
    /*
        1
        2 1
        3 2 1
        4 3 2 1
    */
int main()
{
    int i = 1, n;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        
        cout << endl;
        i++;
    }
    return 0;
}
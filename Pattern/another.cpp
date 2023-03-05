#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col = col + 1;
        }
        int star = (row - 1) * 2;
        while (star)
        {
            cout << "*";
            star = star - 1;
        }
        int k = n - row + 1;
        while (k)
        {
            cout << k;
            k = k - 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int rows, i, j, k;
    cout << "Welcome to my program!\n\n";
    cout << "Please enter the number of rows you want. The rows must be in an even number: ";
    cin >> rows;
    cout << endl;
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i=1; i<=rows; i++)
    {
       for (k=i; k<=rows; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

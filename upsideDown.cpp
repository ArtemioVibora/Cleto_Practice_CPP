#include <iostream>

using namespace std;

int main()
{
    int n = 7;
    int i, j;
    for (i = 0; i < n; i ++)
    {
        cout << endl;
        for (int k = i; k >= 0; k--)
        {
            cout << " ";
        }
        
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        
        for (int j = i ; j < n; j++)
        {
            cout << "*";
        }
        
    }
}

/*
 *Attempting to make a matrix using recursion
 * 
 * */


#include <iostream>

using namespace std;

void byRowEnter(int list[][3], int n, int m)
{
    if (n == 3)
    {
        cout << "END OF RECURSSION!" << endl;
    }
    else
    {
        cout << "Enter data: ";
        cin >> list[n][m];
        ++m;
        if (m == 3)
        {
            m = 0;
            ++n;
        }
        byRowEnter(list, n, m);

    }
}

void printMatrix(int list[][3], int n, int m)
{
    if (n == 3)
    {
        cout << "END OF RECURSSION!" << endl;
    }
    else
    {
        cout << list[n][m] << "  ";
        ++m;
        if (m == 3)
        {
            m = 0;
            ++n;
        }
        if (m == 0)
        {
            cout << endl;

        }
        printMatrix(list, n, m);

    }
}


int main()
{
    int list[3][3] = {0};
    byRowEnter(list, 0, 0);
    printMatrix(list, 0, 0);

}

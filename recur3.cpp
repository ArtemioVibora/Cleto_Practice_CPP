#include <iostream>

using namespace std;

void enterDetails(int list[], int n)
{
    if (n == 3)
    {
        cout << "end of recurssion" << endl;
    }
    else
    {
        cout << "What is the value: ";
        cin >> list[n];
        ++n;
        enterDetails(list, n);
    }
}

void printDetails(int list[], int n)
{
    if (n == 3)
    {
        cout << "end of recurssion" << endl;
    }
    else
    {
        cout << list[n] << endl;
        ++n;
        printDetails(list, n);
    }
}

int main()
{
    int list[3] = {};
    enterDetails(list, 0);
    printDetails(list, 0);
}

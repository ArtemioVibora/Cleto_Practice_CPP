#include <iostream>

using namespace std;

struct A
{
    int y;
};

void enterValue(A &x)
{
    cout << "Enter: ";
    cin >> x.y;
}

void printValue(A &x)
{
    cout << x.y;
}


int main()
{
    A x;
    enterValue(x);
    printValue(x);
    
}

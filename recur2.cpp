#include <iostream>

using namespace std;

void plusByOne(int n)
{
    if (n == 100)
    {
        cout << "END OF RECURSION" << endl;
    }
    else
    {
        cout << n << endl;
        plusByOne(n + 1);        
    }
}

int main()
{
    plusByOne(1);
}

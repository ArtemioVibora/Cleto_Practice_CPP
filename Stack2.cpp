#include <iostream>

using namespace std;

const int MAX_SIZE = 1000;
typedef int elementType;

bool isFull(int last)
{
    if (last == MAX_SIZE - 1)
    {
        return true;
    }

    return false;
}

bool isEmpty(int last)
{
    if (last == -1)
    {
        return true;
    }

    return false;
}

void push(elementType list[], elementType data, int &last)
{
    if (isFull(last))
    {
        cout << "Stack is already full" << endl;
    }
    else
    {
        for (int i = last; i >= 0; --i)
        {
            list[i + 1] = list[i];
        }
        list[0] = data;
        ++last;
    }
}

int pop(elementType list[], int &last)
{
    int poppedVar;
    if (isEmpty(last))
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        poppedVar = list[last];
        list[last] = 0;
        --last;
    }
    return poppedVar;
}

void printStack(elementType list[], int &last)
{
    if (isEmpty(last))
    {
        cout << "NIL" << endl;
    }
    else
    {
        cout << "{";
        for (int i = 0; i <= last; i++)
        {
            if (i != last)
            {
                cout << list[i] << ", ";
                
            }
            else
            {
                cout << list[i];
            }
        }
        cout << "}" << endl;
    }
}


int main()
{
    elementType list[MAX_SIZE];
    int last = -1;

    push(list, 1, last);
    push(list, 2, last);
    push(list, 3, last);
    push(list, 4, last);

    printStack(list, last);

    pop(list, last);
    pop(list, last);
    printStack(list, last);
    push(list, 5, last);
    printStack(list, last);

}

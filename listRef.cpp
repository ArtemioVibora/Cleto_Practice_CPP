#include <iostream>

using namespace std;

const int MAX_SIZE = 3;
typedef int ELEMENT_TYPE;

//For some reason sir wants it to be an integer
int isFull(int last)
{
    if (last == MAX_SIZE - 1)
    {
        return (1);
    }
    return (0);
}

int isEmpty(int last)
{
    //Assuming that we have declared variable of name last and assigned with -1 as
    // as its initializer
    if (last == - 1)
    {
        return (1);
    }
    return (0);
}

void addElement(ELEMENT_TYPE list[], ELEMENT_TYPE data, int pos, int &last)
{
    if(isFull(last) == 1)
    {
        cout << "List is already full" << endl;
    }
    else
    {
        // Utilization of a for loop
        // For example if last is 5 and pos is 0, the condition is true
        // it will then decrement
        for (int i = last; i >= pos; --i)
        {
            // whatever list[i] will then be moved to list[i + 1]
            list[i + 1] = list[i];
        }
        //But here is the kicker, if last is -1 the for loop will not work
        //However it would move to the next logic in which list[pos] assuming pos is zero
        list[pos] = data;
        ++last;
    }
}

void deleteElement(ELEMENT_TYPE list[], int pos, int &last)
{
    if (isEmpty(last) == 1)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        for (int i = pos; i <= last; i++)
        {
            list[i] = list[i + 1];
        }
        --last;
    }
}

void locateItem(ELEMENT_TYPE list[], ELEMENT_TYPE searchData, int last)
{
    int index = 0;
    if (isEmpty(last) == 1)
    {
        cout << "Can't locate Item because its empty" << endl;
    }
    else
    {
        while (index != last + 1 && list[index] != searchData)
        {
            ++index;
        }
        if (index != last + 1)
        {
            cout << "The item requested is Item " << index + 1 << "." << endl;
        }
        else
        {
            cout << "The item does not exist!" << endl;
        }
    }
}

void printItem(ELEMENT_TYPE list[], int last)
{
    if(isEmpty(last) == 1)
    {
        cout << "List is Empty" << endl;
    }
    else
    {
        for (int i = 0; i <= last; i++)
        {
            cout << list[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ELEMENT_TYPE list[MAX_SIZE];
    int last = -1;
    
    addElement(list, 1, 0, last);
    addElement(list, 1, 1, last);
    printItem(list, last);
    addElement(list, 69, 2, last);
    printItem(list, last);
    locateItem(list, 69, last);
    printItem(list, last);
}

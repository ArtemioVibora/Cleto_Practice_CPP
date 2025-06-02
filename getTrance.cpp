#include <iostream>

using namespace std;

void addValues(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value: ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
}

void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "  ";
        }
    }
}

void getTrance(int matrix[3][3])
{
    int sumTrance = 0;
    int tracker = 0;
    for (int i = 0; i < 3; i++)
    {
        sumTrance += matrix[i][tracker];
        ++tracker;
    }
    
    cout << endl << "tr(matrix) = " << sumTrance << endl;
}

int main()
{
    int matrix[3][3] = {0};
    addValues(matrix);
    printMatrix(matrix);
    getTrance(matrix);
}

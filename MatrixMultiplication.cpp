#include <iostream>

using namespace std;

int main()
{
    int matrix1[][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int prodMatrix[3][3] = {0};
    
    int tracker = 0;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + (matrix1[tracker][j] * matrix2[i][tracker]);
        }
        for (int k = 0; k < 3; k++)
        {
            prodMatrix[i][k] = sum;
        }
        sum = 0;
        tracker++;
    }

    for (int index = 0; index < 3; index++)
    {
        cout << endl;
        for (int index2 = 0; index2 < 3; index2++)
        {
            cout << prodMatrix[index][index2] << "  ";
        }

    }

}

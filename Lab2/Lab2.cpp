#include "pch.h"

const int N = 6;
const int M = 3;
const int FIRST_ELEMENT = 0;
const int SECOND_ELEMENT = 1;

using namespace std;

void showMatrix(int matrix[N][M])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void showArray(int array[M]) {
    for(int i = 0; i < M; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int firstMatrix[N][M];
    int secondMatrix[N][M];
    int firstMatrixColumnMax[M];
    int secondMatrixColumnMax[M];

    //Matrix input
    cout << "Enter matrix A:" << endl;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter matrix B:" << endl;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> secondMatrix[i][j];
        }
    }

    cout << "First matrix:" << endl;
    showMatrix(firstMatrix);

    cout << "Second matrix:" << endl;
    showMatrix(secondMatrix);

    for(int i = 0; i < M; i++)
    {
        int firstMatrixMax = firstMatrix[FIRST_ELEMENT][i];
        int secondMatrixMax = secondMatrix[FIRST_ELEMENT][i];
        for(int j = SECOND_ELEMENT; j < N; j++)
        {
            int firstMatrixValue = firstMatrix[j][i];
            int secondMatrixValue = secondMatrix[j][i];
            if(firstMatrixValue > firstMatrixMax)
            {
                firstMatrixMax = firstMatrixValue;
            }
            if(secondMatrixValue > secondMatrixMax)
            {
                secondMatrixMax = secondMatrixValue;
            }
        }
        firstMatrixColumnMax[i] = firstMatrixMax;
        secondMatrixColumnMax[i] = secondMatrixMax;
    }

    cout << "First matrix maximum columns: ";
    showArray(firstMatrixColumnMax);
    cout << "Second matrix maximum columns: ";
    showArray(secondMatrixColumnMax);


    return 0;
}

#include "pch.h"

array<int>^ find_max_elements_in_column(const array<int, 2>^ matrix, const int rows, const int columns)
{
    auto arr = gcnew array<int>(columns);
    for (auto j = 0; j < columns; j++)
        for (auto i = 0; i < rows; i++)
        {
            if (i == 0) arr[j] = matrix[i, j];
            else if (arr[j] < matrix[i, j])
                arr[j] = matrix[i, j];
        }
    return arr;
}


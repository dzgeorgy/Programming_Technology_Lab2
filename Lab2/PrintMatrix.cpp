#include "pch.h"

void print_matrix(const array<int, 2>^ matrix, const int rows, const int columns)
{
    for (auto i = 0; i < rows; ++i)
    {
        for (auto j = 0; j < columns; ++j)
            Console::Write("{0,4} ", matrix[i, j]);
        Console::Write("\n");
    }
}

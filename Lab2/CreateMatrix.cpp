#include "pch.h"

array<int, 2>^ create_matrix(const int rows, const int columns)
{
    const auto matrix = gcnew array<int, 2>(rows, columns);

    Console::WriteLine(L"Please fill a matrix with size {0}x{1}: ", rows, columns);
    for (auto i = 0; i < rows; ++i)
        for (auto j = 0; j < columns; ++j)
        {
            // Flag for checking is input was correct.
            bool is_correct;
            do
            {
                is_correct = true;
                try
                {
                    Console::Write(L"Element {0}x{1}:", i + 1, j + 1);
                    matrix[i, j] = Convert::ToInt32(Console::ReadLine());
                }
                catch (FormatException^)
                {
                    is_correct = false;
                    Console::WriteLine(L"You entered incorrect value!\nPlease try again...");
                }
            } while (!is_correct);
        }
    return matrix;
}

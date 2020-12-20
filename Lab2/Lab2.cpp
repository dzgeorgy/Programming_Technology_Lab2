#include "pch.h"

using namespace System;

int main(array<String ^> ^args)
{
	const auto rows = 3;
    const auto columns = 6;
    const auto matrix_a = create_matrix(rows, columns);
    const auto matrix_b = create_matrix(rows, columns);
    Console::WriteLine(L"Matrix A is");
    print_matrix(matrix_a, rows, columns);
    Console::WriteLine(L"Matrix B is");
    print_matrix(matrix_b, rows, columns);
    const auto array_c = find_max_elements_in_column(matrix_a, rows, columns);
    const auto array_d = find_max_elements_in_column(matrix_b, rows, columns);
    Console::WriteLine(L"Array C is");
    print_array(array_c);
    Console::WriteLine(L"\nArray D is");
    print_array(array_d);
}

array<int, 2>^ create_matrix(const int rows, const int columns)
{
    const auto matrix = gcnew array<int, 2>(rows, columns);
    Console::WriteLine(L"Please fill a matrix with size {0}x{1}:", rows, columns);
    for (auto i = 0; i < rows; ++i)
        for (auto j = 0; j < columns; ++j)
            matrix[i,j] = Convert::ToInt32(Console::ReadLine());
    return matrix;
}

void print_matrix(const array<int, 2>^ matrix, const int rows, const int columns)
{
    for (auto i = 0; i < rows; ++i)
    {
        for (auto j = 0; j < columns; ++j)
            Console::Write("{0,4} ", matrix[i,j]);
        Console::Write("\n");
    }
}

void print_array(const array<int>^ arr)
{
    for each (auto item in arr)
        Console::Write("{0, 4} ", item);
}

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

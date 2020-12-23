#include "pch.h"

void menu()
{
	//Printing main task
    Console::WriteLine(L"This application calculates two arrays from matrices by selecting max value from each column.\n");

	//Matrix sizes
	const auto rows = 3;
    const auto columns = 6;

	//Creating matrix
    const auto matrix_a = create_matrix(rows, columns);
    const auto matrix_b = create_matrix(rows, columns);

	//Clearing screen
    system("cls");

	//Printing matrices
    Console::WriteLine(L"Matrix A is");
    print_matrix(matrix_a, rows, columns);
    Console::WriteLine(L"Matrix B is");
    print_matrix(matrix_b, rows, columns);

	//Calculating arrays
    const auto array_c = find_max_elements_in_column(matrix_a, rows, columns);
    const auto array_d = find_max_elements_in_column(matrix_b, rows, columns);

	//Printing arrays
    Console::WriteLine(L"\nArray C is");
    print_array(array_c);
    Console::WriteLine(L"\nArray D is");
    print_array(array_d);
}

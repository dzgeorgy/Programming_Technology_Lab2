#pragma once

using namespace System;

/**
 * Handles UI and main user interaction.
 */
void menu();

/**
* Creates a matrix and returns its descriptor.
* @param rows - size of first dimension of matrix (read as quantity of lines).
* @param columns - size of second dimension of matrix (read as quantity of columns).
* @return descriptor of created matrix
*/
array<int, 2>^ create_matrix(const int rows, const int columns);

/**
* Prints out given matrix.
* @param matrix - const descriptor of matrix.
* @param rows - size of first dimension of matrix (read as quantity of lines).
* @param columns - size of second dimension of matrix (read as quantity of columns).
*/
void print_matrix(const array<int, 2>^ matrix, const int rows, const int columns);

/**
* Prints out given array.
* @param arr - const descriptor of array.
*/
void print_array(const array<int>^ arr);

/**
* Finds max element in every column of matrix and returns an array of these elements.
* @param matrix - const descriptor of matrix.
* @param rows - size of first dimension of matrix (read as quantity of lines).
* @param columns - size of second dimension of matrix (read as quantity of columns).
*/
array<int>^ find_max_elements_in_column(const array<int, 2>^ matrix, const int rows, const int columns);
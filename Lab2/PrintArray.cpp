#include "pch.h"

void print_array(const array<int>^ arr)
{
    for each (auto item in arr)
        Console::Write("{0, 4} ", item);
}

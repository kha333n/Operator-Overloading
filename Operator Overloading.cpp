// Operator Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "string.h"  // NOLINT
int main()
{
    String str1("Hello and welcome "), str2("to th World of programming.");
    // ReSharper disable CppDeclaratorNeverUsed
    String str3(str2);
    // ReSharper restore CppDeclaratorNeverUsed
    // ReSharper disable CppAssignedValueIsNeverUsed
    // ReSharper disable CppIdenticalOperandsInBinaryExpression
    str1 = str2 = str1 = str1;
    // ReSharper restore CppIdenticalOperandsInBinaryExpression
    // ReSharper restore CppAssignedValueIsNeverUsed
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// TestMethodHasReturnValueType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

std::string hello(std::string name)
{
    return "Hello " + name;
}


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
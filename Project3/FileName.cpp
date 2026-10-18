#include <iostream>
#include <Windows.h>

int sum(int a, int b)
{
    return a + b;
}


int sum(int a, int b, int c) 
{
    return a + b + c;
}


double sum(double a, double b) 
{
    return a + b;
}

int main() 
{
    std::cout << sum(2, 3) << "\n";
    std::cout << sum(2, 3, 4) << "\n";
    std::cout << sum(2.5, 3.5) << "\n";

    return 0;
}
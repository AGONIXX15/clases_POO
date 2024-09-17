#include <iostream>

int factorial(int num)
{
    if (num == 0)
    return 1;
    int a = 1;
    for(int i = 1; i <=num; i++)
    {
        a *= i;
    }
    return a;
}

int main()
{
    int num = 3;
    std::cout << factorial(num) << std::endl;
}

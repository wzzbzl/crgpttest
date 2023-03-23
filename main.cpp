#include <iostream>

int Fib(int i)
{
    if (0 == i)
        return 0;
    else if (1 == i)
        return 1;
    else
        return Fib(i - 1) + Fib(i - 2);
}

void funcTest_1()
{
    int testPara = 0;
}

int main()
{
    std::cout << "hello world!" << std::endl;

    funcTest_1();

    std::cout << "fibonacci 15 is: " << Fib(15) << std::endl;

    return 0;
}
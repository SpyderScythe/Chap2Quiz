#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer:";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int input)
{
    std::cout << "Your numbers added together are: " << input << ".\n";
}

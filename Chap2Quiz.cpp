// Quiz for chapter 2 of C++ tutorial on learncpp.com

#include <iostream>

int readNumber();
void writeAnswer();

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

int main()
{
    int answer{ readNumber() + readNumber() };
    writeAnswer(answer);
    return 0;
}

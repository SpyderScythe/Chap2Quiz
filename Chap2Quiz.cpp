// Quiz for chapter 2 of C++ tutorial on learncpp.com

#include <iostream>

int readNumber();
void writeAnswer(int input);

int main()
{
    int answer{ readNumber() + readNumber() };
    writeAnswer(answer);
    return 0;
}

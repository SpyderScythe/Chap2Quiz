// Quiz for chapter 2 of C++ tutorial on learncpp.com

#include <iostream>
#include "io.h"

int readNumber();
void writeAnswer();

int main()
{
    int answer{ readNumber() + readNumber() };
    writeAnswer(answer);
    return 0;
}

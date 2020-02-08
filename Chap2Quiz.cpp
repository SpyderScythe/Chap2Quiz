// Quiz for chapter 2 of C++ tutorial on learncpp.com

#include "io.h"
#include <iostream>

int main()
{
    int answer{ readNumber() + readNumber() };
    writeAnswer(answer);
    return 0;
}

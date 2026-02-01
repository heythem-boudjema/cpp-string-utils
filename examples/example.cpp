#include <iostream>
#include "clsString.h"

int main()
{
    clsString s("hello world from c++");

    std::cout << clsString::UpperAllString("hello") << std::endl;
    std::cout << clsString::ReverseWordsInString("one two three") << std::endl;

    s.UpperFirstLetterOfEachWord();
    std::cout << s.Value << std::endl;

    return 0;
}

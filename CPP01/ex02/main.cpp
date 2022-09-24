#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;
    
    std::cout << "Memory adress str : " << &str << std::endl;
    std::cout << "Memory adress ptr : " << stringPTR << std::endl;
    std::cout << "Memory adress ref : " << &stringREF << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Variable str : " << str << std::endl;
    std::cout << "Variable ptr : " << *stringPTR << std::endl;
    std::cout << "Variable ref : " << stringREF << std::endl;
    
    return (0);
}
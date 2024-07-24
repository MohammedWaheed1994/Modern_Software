#include "adaptor.hpp"
#include <iostream>


int main()
{
    user::Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    std::cout << "dumping the stack before test with size: " << stack.size() <<  "\n";

    std::cout << "testing poping the stack \n";
    stack.pop();
    std::cout << stack.front() << " current size: " << stack.size() << "\n";
    stack.pop();
    std::cout << stack.front() << " current size: " << stack.size() << "\n";
    stack.pop();
    std::cout << stack.front() << " current size: " << stack.size() << "\n";


    std::cout << "dumping the stack after test with size: " << stack.size() <<  "\n";


    return 0;
}
#ifndef Stack_hpp
#define Stack_hpp
#include <stdio.h>
class Stack
{
private:
    int*arr;
    int size;
public:
    Stack();
    void Push(int x);
    void Pop();
    void Print(); 
};
#endif /* Stack_hpp */

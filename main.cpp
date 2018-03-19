
#include <iostream>
#include <string>
#include "Stack.hpp"

void display()
{
    std::cout<<"Error - Стек полный";
}
int main()
{
    try
    {
        Stack st;
        st.Push(100);
        st.Push(200);
        st.Push(300);
        st.Push(400);
        st.Push(500);
        st.Pop();
        st.Push(500);
        st.Push(600);
        st.Pop();
        st.Pop();
        st.Print();
    }
    catch (Stack temp)
    {
        display();
    }
    catch (std::string p)
    {
        std::cout<<"Стек пустой";
        
    }
    
}

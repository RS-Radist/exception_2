#include "Stack.hpp"
#include <iostream>

Stack::Stack()
{
    size=0;
    arr=NULL;
}
void Stack::Push(int x)
{
    if (size==0)
    {
        arr=new int[size];// создаю с 0
        arr[size]=x; // в 0 записываю = х
        size++; // size = 1
    }
    else
    {
        int* temp; // создаем новый массив
        temp=new int[size]; // с размером 1
        temp[size]=x;  // в один записываем = х
        memcpy(temp, arr, sizeof(int)*size); // копируем в темп с арр
        //            delete [] arr;// удаляем арр
        arr=new int [size]; //выделяем новую память с размером в 1
        memcpy(arr, temp, sizeof(temp)*size);//копируем в арр с темп
        delete [] temp;// удаляем темп
        size++;// увеличиваем size = 2
        //            if (size==6)
        //            {
        //                throw Stack();  /?????
        //            }
    }
}
void Stack::Pop()
{
    size--;
    //        if (size==0)
    //        {
    //            std::string p;  ?????
    //            throw p;
    //        }
    int* temp;
    temp=new int [size];
    memcpy(temp, arr, sizeof(int)*size);
    memcpy(arr, temp, sizeof(temp)*size);
    delete [] temp;
}
void Stack::Print()
{
    for (int i=0;i<size;++i)
    {
        std::cout<<size;
        std::cout<<arr[i]<<" ";
    }
}


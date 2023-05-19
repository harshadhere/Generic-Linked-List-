#include<iostream>
using namespace std;

template class<T>;

void swap(T *x,T *y)
{
    T temp;

    temp = *x;
    *x= *y;
    *y = temp;
}

int main()
{
    int x = 10; 
    int y = 20;

    cout<<"Value of X is : " <<x<<"\n"<<"Value of Y is : "<<y;


    swap(&x, &y);

     cout<<"Value of X is : " <<x<<"\n"<<"Value of Y is : "<<y;




    return 0;
}
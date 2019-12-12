#include "Header.h"
#include "Header.cpp"

int main()
{
    my_text* first;
    cin>>T;
    cout<<"Введите количество строк:"<<T;
    input(first=nullptr,T);
    output(first);
    count(T);
    elem(T,first);
    transpotion(first);
    change(first);
    enter(T);
    vvod();
    return 0;
}

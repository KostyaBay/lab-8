#include "Header.h"
#include "Header.cpp"

  int main()
{
  int k;
  int T;
  cin>>T; 
  my_text* first;
  my_text* top = first;
    first = new my_text;
     while(T!=0)
    {
      cout<<"Введите строку:"<<" ";
    cin>>first->str;
    first->next=new my_text; 
    first=first->next;
    T--;
    }
      first->next=nullptr;
    /*  while(top!=nullptr)
    {
        cout<<top->str;
        top=top->next;
    }*/


    cout<<"Введите количество строк:";
    //input( first);
    //output(first);
    //cout<<"hgfhgf";
    cin>>k;
    switch (k){
    case 1:
    count(T);
    break;
    case 2:
    transpotion(first);
    break;
    case 3:
    change(first);
    break;
    case 4:
    enter(T);
    break;
    case 5:
    vvod(T);
    break;
    }
    
    
    
    return 0;
}

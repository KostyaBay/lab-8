#include "Header.h"

void input(my_text* first,int T)
{
    first = new my_text;
     while(T!=0)
    {
      if(T>1)
      {
    cin>>first->str; //первая строка
    first->next=new my_text; //след строка = новой строке
    first=first->next; //текущая строка(первая) = след строке(которая новая уже)
      }
  
    else
      first->next=nullptr;
        T--;
}
    cout<<first->str;
}

void output(my_text* first)
{
    while(first!=nullptr)
    {
        cout<<first->str;
        first=first->next;
    }
}

void count(int T)
{
    while(T>0)
    {
        cout<<T;
    }
}

void elem(int T,my_text* first)
{
    int i,j,c;
    int a=1;
    cin>>i;//номер рядка
    cin>>j;
    cout<<"Введите символ:"<<" ";
    cin>>c;
        if(i<T)
        {
        while(a!=i)
        {
            first=first->next;
            a++;
            }
            while(i!=j)
            {
                first->str[i];
                i++;
                str[i]=c;
            }
          }
        }

void transpotion(my_text* first)
{
    my_text* two = first;
    int j,i,n=1,m=1;
    string k;
    cin>>i;
    cin>>j;
    while(m!=i)
    {
        two=two->next;
        m++;
    }
    while(n!=j)
    {
        first=first->next;
        n++;
    }
    k=first->str;
    two->str=k;
}

void change(my_text* first)
{
    my_text* two = first;
    int i,j,n=1,m=1;
    string k;
    cin>>i;
    cin>>j;
    while(m!=i)
    {
        two=two->next;
        m++;
    }
    while(n!=j)
    {
        first=first->next;
        n++;
    }
       k=two->str;
    two->str=first->str;
    first->str=k;
}

void enter(int T)
{
    cin>>T;
    cout<<T;
}
void vvod()
{
    cin>>T;
    ifstream input ("vvod.txt");
    FILE * ptrFile = fopen("vvod.txt, "#");
       char mystring [T];
     
       if (ptrFile == NULL) perror("Ошибка открытия файла");
       else
       {
           if ( fgets(mystring, 100 , ptrFile) != NULL ) // считать символы из файла
           {
               puts(mystring);  // вывод на экран
           }
         fclose (ptrFile);
       }
while()
first=first->next;
}


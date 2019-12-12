#include "Header.h"

void input(my_text* first)
{
    int T;
    first = new my_text;
     while(T!=0)
    {
      if(T>1)
      {
    cout<<"Введите первую строку:"<<" ";
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
    cout<<"Количество рядков:"<<" ";
    while(T>0)
    {
        cout<<T;
    }
}

void elem(int T,my_text* first,string str)
{
    int i,j,c;
    int a=1;
    cout<<"Введите номер рядка:"<<" ";
    cin>>i;//номер рядка
    cout<<"Введите букву:"<<" ";
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
                str[j]=c;
            }
          }
        }

void transpotion(my_text* first)
{
    my_text* two = first;
    int j,i,n=1,m=1;
    string k;
    cout<<"Введите номер рядка1:"<<" ";
    cin>>i;
    cout<<"Введите номер рядка2:"<<" ";
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
    cout<<"Введите номер рядка1:"<<" ";
    cin>>i;
    cout<<"Введите номер рядка2:"<<" ";
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
    cout<<"Введите количество рядков:"<<" ";
    cin>>T;
    cout<<T;
}
void vvod()
{
    cout<<"Введите количество рядков:"<<" ";
    cin>>T;
    ifstream input ("vvod.txt");
    FILE * pFile;
    int c;
    int n = 0;
    pFile=fopen ("vvod.txt","r");
    if (pFile==NULL) perror ("Error opening file");
    else
    {
      do
      {
        c = fgetc (pFile);
        if (c == '#')
            break;
      }
        while (c != EOF);
      fclose (pFile);
      printf ("The file contains %d dollar sign characters ($).\n",n);
    }
       }
while()
first=first->next;
}

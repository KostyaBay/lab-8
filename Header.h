#ifndef Header_h
#define Header_h

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;
int T;
struct my_text
{
    string str;
    my_text* first;
    my_text* next;
};
    my_text* EnterList();


#endif /* Header_h */

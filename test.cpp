#include<iostream>
using namespace std;
long GetNumber(long int Number)
{
    return --Number;
}
float GetNumber(int Number)
{
    return ++Number;
}
int main()
{
    int x = 20;
    int y = 30;
    cout<< GetNumber(x) << " ";
    cout<< GetNumber(y) ;
    return 0;
}


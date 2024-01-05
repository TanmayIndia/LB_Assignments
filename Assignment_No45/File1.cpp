#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iSize; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}
#include<iostream>
using namespace std;

template <class T>
T AddElements(T *Arr, int iSize)
{
    int iCnt = 0;
    T Ans=0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        Ans = Ans+Arr[iCnt];
    }
    return Ans;    
}

int main()
{
    int iRet = 0;
    int iArr[] = {11,21,32,41,51};
    iRet = AddElements(iArr, 5); 

    cout<<"The summation of integers: "<<iRet<<endl;


    float fRet = 0;
    float fArr[] = {11.67,21.45,32.3,41.45,51.1};
    fRet = AddElements(fArr, 5); 

    cout<<"The summation of float: "<<fRet<<endl;
    return 0;
}
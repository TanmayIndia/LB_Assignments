#include<iostream>
using namespace std;

template <class T>
T Max(T *Arr, int iSize)
{
    int iCnt = 0;
    T Largest = Arr[0];
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
       if(Largest<Arr[iCnt])
            Largest = Arr[iCnt];
    }
    return Largest;    
}

int main()
{
    int iRet = 0;
    int iArr[] = {51,21,32,41,71};
    
    iRet = Max(iArr, 5); 
    cout<<"The Largest of integers: "<<iRet<<endl;

    float fRet = 0;
    
    float fArr[] = {11.67,21.45,42.3,41.45,1.1};
    fRet = Max(fArr, 5); 

    cout<<"The Largest of float: "<<fRet<<endl;
    return 0;
}
#include<iostream>
using namespace std;

template <class T>
int Frequency(T *Arr,int iSize, T Value)
{
   int iFreqency = 0;
   int iCnt = 0;

   for(iCnt = 0; iCnt<iSize; iCnt++)
   {
        if(Arr[iCnt] == Value)
            iFreqency++;
   }
   return iFreqency;
}

int main()
{
    int iArr[] = {6,3,47,6,446,6,7,6,234,7,80,47};
    double dArr[] = {1.3423,3.476446,6.12114,7.782,3.476446,234.78787,7.42335,3.476446,47.34235,3.476446,45.45345,3.476446};
    int iRet = 0;
    double dRet = 0.0;

    iRet = Frequency(iArr,12,6);
    cout<<"Frequecy of given value is : "<<iRet<<endl;

    dRet = Frequency(dArr,12,3.476446);
    cout<<"Frequency of given value is : "<<dRet<<endl;

    return 0;
}
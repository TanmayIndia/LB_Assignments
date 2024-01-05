#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *Arr,int iSize, T Value)
{
   int iPos = -1;
   int iCnt = 0;

   for(iCnt = 0; iCnt<iSize; iCnt++)
   {
        if(Arr[iCnt] == Value)
        {
            iPos = iCnt+1;
            break;
        }
   }
   return iPos;
}

int main()
{
    int iArr[] = {6,3,47,6,446,6,7,6,234,7,80,47};
    double dArr[] = {1.3423,3.476446,6.12114,7.782,3.476446,234.78787,7.42335,3.476446,47.34235,3.476446,45.45345,3.476446};
    int iRet = 0;
    double dRet = 0.0;

    iRet = SearchFirst(iArr,12,446);
    cout<<"First occurence of given value is : "<<iRet<<endl;

    dRet = SearchFirst(dArr,12,778.42335);
    cout<<"First occurence of given value is : "<<dRet<<endl;

    return 0;
}
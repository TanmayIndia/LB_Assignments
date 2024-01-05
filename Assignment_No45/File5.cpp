#include<iostream>
using namespace std;

template <class T>
void Reverse(T *Arr,int iSize)//Swapping technique
{
    T temp;
    int i = 0, j = iSize-1;
     
    while(i<j) // swapping
    {
        temp = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int iArr[] = {10,20,30,10,30,40,10,40,10};
    char cArr[] = {'a','b','c','d','e','f','g','h','i'};
   
    int iCnt = 0;
    
    //Original Array
    for(iCnt = 0; iCnt<9; iCnt++)
    {
        cout<<iArr[iCnt]<<"\t";
    }
    cout<<endl;

    Reverse(iArr,9);

    //Reversed Array
    for(iCnt = 0; iCnt<9; iCnt++)
    {
        cout<<iArr[iCnt]<<"\t";
    }
    cout<<endl;

    for(iCnt = 0; iCnt<9; iCnt++)
    {
        cout<<cArr[iCnt]<<"\t";
    }
    cout<<endl;

    Reverse(cArr,9);

    //Reversed Array
    for(iCnt = 0; iCnt<9; iCnt++)
    {
        cout<<cArr[iCnt]<<"\t";
    }
    cout<<endl;

    return 0;
}
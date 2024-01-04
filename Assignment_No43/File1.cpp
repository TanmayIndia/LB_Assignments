#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int iSize;
    public:
        Array(int iValue = 10)
        {
            this->iSize = iValue;
                this->Arr = new int[iSize];
        }
        Array(Array &ref)
        {
            this->iSize = ref.iSize;
            this->Arr = new int[this->iSize];
            
            for(int i=0;i<iSize;i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }
        ~Array()
        {
       
            delete []Arr;
        }
        inline void Accept();
        inline void Display();
};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i<this->iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are\n";

    for(int i=0 ; i<this->iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;
}

class ArrSearch : public Array
{
    public: 
        ArrSearch(int no = 10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch::SearchFirst(int iValue)
{
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iValue)
        {
            break;
        }
    }

    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch::Frequency(int iValue)
{
    int iCnt = 0;

    for(int i = 0; i<iSize; i++)
    {
        if(Arr[i] == iValue)
        {
            iCnt++;
        }
    }
    
    return iCnt;
}

int ArrSearch::SearchLast(int iValue)
{
 int i = 0, iPos = -1;
 
     for(i = 0; i<iSize ; i++)
     {
        if(Arr[i] == iValue)
        {
            iPos = i;
        }
     }


   if(iPos == -1)
   {
    return -1;
   }
   else
   {
    return iPos+1; 
   }
}

int ArrSearch::EvenCount()
{
    int iEvnCnt = 0;

    for(int i = 0; i<iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iEvnCnt++;
        }
    }

    return iEvnCnt;
}

int ArrSearch::OddCount()
{
    int iOddCnt = 0;

    for(int i = 0; i<iSize; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iOddCnt++;
        }
    }
    return iOddCnt;
}

int ArrSearch::SumAll()
{
    int iSumAll = 0;

    for(int i = 0; i<iSize; i++)
    {
        iSumAll = iSumAll+Arr[i];
    }

    return iSumAll;
}

int main()
{
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.Frequency(11);

    cout<<"Frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);

    cout<<"First occurence is "<<iRet<<"\n";

    iRet = sobj1.SearchLast(111);

    cout<<"Last occurence is "<<iRet<<"\n";

    iRet = sobj1.EvenCount();

    cout<<"Count of even elements\n"<<iRet<<"\n";

    iRet = sobj1.OddCount();

    cout<<"Count of odd elements\n"<<iRet<<"\n";

    iRet = sobj1.SumAll();

    cout<<"Sum of all elements\n"<<iRet<<"\n";

    return 0;
}
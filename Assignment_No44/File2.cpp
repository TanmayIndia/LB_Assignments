#include<iostream>
using namespace std;

template <class T>
class FindMax
{
    private:
        T No1,No2,No3;
    public:
        FindMax(T Value1,T Value2, T Value3);
        T Max();
};

template <class T>
FindMax<T>::FindMax(T Value1,T Value2, T Value3)
{
    this->No1 = Value1;
    this->No2 = Value2;
    this->No3 = Value3;
}

template <class T>
T FindMax<T>::Max()
{
    if((No1>No2) && (No1>No3))
        return No1;
    else if((No2>No1) && (No2>No3))
        return No2;
    else
        return No3;
}

int main()
{
    FindMax<int> iObj(13,8,23);
    int iRet = iObj.Max();
    cout<<"Max integer : "<<iRet<<endl;
    
    FindMax<float> fObj(11.23f,56.7f,23.3f);
    float fRet = fObj.Max();
    cout<<"Max float : "<<fRet<<endl;

    FindMax<double> dObj(12.5647,12.4534,12.1235);
    double dRet = dObj.Max();
    cout<<"Max double : "<<dRet<<endl;
}
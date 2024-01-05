#include<iostream>
using namespace std;

template <class T>
class Calculation
{
    private:
        T Ans;
    public:
        T Multiply(T No1, T No2);
};

template <class T>
T Calculation<T>::Multiply(T No1, T No2)
{
    Ans = No1*No2;
    return Ans;
}

int main()
{
    Calculation<int> iObj;
    int iRet = iObj.Multiply(10,20);
    cout<<"iRet : "<<iRet<<endl;
    
    Calculation<float> fObj;
    float fRet = fObj.Multiply(10.2f,20.3f);
    cout<<"fRet : "<<fRet<<endl;
}
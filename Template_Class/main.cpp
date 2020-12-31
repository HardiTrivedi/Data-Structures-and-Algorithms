#include <iostream>

using namespace std;

template<class T>
class arithmetic
{
private:
    T a;
    T b;
public:
    arithmetic(T, T);
    T add();
    T sub();
};
template<class T>
arithmetic<T>::arithmetic(T a1, T b1)
{
    a=a1;
    b=b1;
}
template<class T>
T arithmetic<T>::add()
{
    return a+b;
}
template<class T>
T arithmetic<T>::sub()
{
    return a-b;
}
int main()
{
    arithmetic <int> ar(1,5);
    cout<<ar.add()<<endl;

    arithmetic <float> ar1(1.5f,5.0f);
    cout<<ar1.add()<<endl;

    arithmetic <double> ar2(1.5,5.0);
    cout<<ar2.add()<<endl;
    return 0;
}

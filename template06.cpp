#include<iostream>
using namespace std;
template<class T>
T Swap(T &a,T &b)
{
T temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int a=10,b=20;
float f1=23.45,f2=45.25;
char c1='A',c2='B';

cout<<"The value Before swapping...."<<endl;
cout<<"a= "<<a<<" b= "<<b<<endl;
cout<<"f1= "<<f1<<" f2= "<<f2<<endl;
cout<<"ch1= "<<c1<<" ch2= "<<c2<<endl;
Swap(a,b);
Swap(f1,f2);
Swap(c1,c2);
cout<<"The value After swapping...."<<endl;
cout<<"a= "<<a<<" b= "<<b<<endl;
cout<<"f1= "<<f1<<" f2= "<<f2<<endl;
cout<<"ch1= "<<c1<<" ch2= "<<c2<<endl;
}

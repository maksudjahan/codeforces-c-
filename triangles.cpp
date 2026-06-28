#include<iostream>
using namespace std;
int main()

{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)<=c)
    cout<<"NO"<<endl;
    else if((b+c)<=a)
    cout<<"NO"<<endl;
    else if((a+c<=b))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}

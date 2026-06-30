#include<iostream>
using namespace std;
int main()
{
    int n;
    if (n>=1)
        cin>>n;
        int a=n%100;
        int b=n%20;
        int c=n%10;
        int d=n%5;
    cout<<(n/100+a/20+b/10+c/5+d)<<endl;
    return 0;
}

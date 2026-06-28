#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    long int x;
    cin>>x;
    if(x>=1&&x%5==0)
    cout<<x/5<<endl;
    else if(x>=1&&x%5!=0)
    cout<<x/5+1<<endl;
    return 0;
}

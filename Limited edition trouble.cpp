#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    long long int k,n,w,need,total;
    cin>>k>>n>>w;
    total=(w*(w+1)/2)*k;
    if (total>n)
    cout<<total-n<<endl;
    else
    cout<<"0"<<endl;

    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    long long int a,b;
    cin>>a>>b;
    int n=0;
    for(n=0;a<=b;n++){
        a=a*3;
        b=b*2;
    }
        cout<<n<<endl;
}



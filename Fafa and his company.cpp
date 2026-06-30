#include<iostream>
using namespace std;
int main()
{
    int n,l=1,i=0;
        cin>>n;
        for(l=1;l<=n-1;l++){
                if((n-l)%l==0)
        i++;
        }
        cout<<i<<endl;
        return 0;

}

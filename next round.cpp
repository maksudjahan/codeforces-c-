
#include<iostream>
using namespace std;
int main()
{
    int n,k,i=0;
    cin>>n>>k;
    int p[100];
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    int l=p[k-1],m=0;
    for(i=0;i<n;i++){
    if(p[i]>=l&p[i]>0){
            m++;
    }}
cout<<m<<endl;
return 0;

}

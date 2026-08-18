#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,p,q,i,j,k;
    cin>>n;
    int arr[n][2];
 for(i=0;i<n;i++){
    for(j=0;j<2;j++){
        cin>>arr[i][j];
    }
 }
 for(i=0;i<n;i++){
        int sum=0;
            p=arr[i][0]-arr[i][1];
     q=abs(p);
     if(q%10==0)
    sum=sum+q/10;
    else sum=sum+q/10+1;
    cout<<sum<<endl;
 }

    }

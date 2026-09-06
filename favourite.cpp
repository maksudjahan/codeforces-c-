#include<iostream>
using namespace std;
int sqnc()
{
    int n,i,a,t,*p;
    cin>>n;
    int arr[n],ans[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        }
        int l=0,r=n-1;
   for(i=0;i<n;i++){
    if(n%2==0) {ans[i]=arr[l];
    l++;}
    else {ans[i]=arr[r];
        r--;
    }}
    for(i=0;i<n;i++){
            cout<<a[i]<<"  ";
    }
             cout<<endl;
    }
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        sqnc();
    }
return 0;
}

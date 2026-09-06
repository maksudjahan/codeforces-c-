#include<iostream>
using namespace std;
void mt(){
int n,i,o=0,e=0,e2=0;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            o++;
        }
        if(arr[i]%2==0){
            int t=arr[i]/2;
        if(t%2==0) e++;
        else e2++;
        }
    }
    if(e>=e2&&e>o) cout<<e<<"  ";
   else if(e2>e&&e2>o) cout<<e2<<"  ";
   else if(o>e2&&o>e) cout<<o<<"  ";
else if(e==o&&o==e2) cout<<e<<"  ";
     else if(e==e2) cout<<e<<"  ";
    else if(o==e2) cout<<o<<"  ";
    else if(e==o) cout<<e<<"  ";
        cout<<"\n";
}
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++){
        mt();
    }
}

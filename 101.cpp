#include<iostream>
using namespace std;
void ab(){
int n,i,j;
cin>>n;
int arr[n],ans[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
    if(arr[i]==1||arr[i]==-1) break;
}
int t=i;
for( j=n-1;j>=0;j--){
    if(arr[j]==1||arr[j]==-1) break;
}
int s=j;
for(i=0;i<n;i++){
    if(arr[0]==1&&arr[i]==-1&&arr[n-1]==1) arr[i]=0;
    if(arr[i]==-1&&i==t) arr[i]=1;
    if(arr[i]==-1&&i==s) arr[i]=1;
    if(arr[i]==-1) arr[i]=0;
}
for(i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
cout<<"\n";

}
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        ab();
    }
}

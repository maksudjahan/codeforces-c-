#include<iostream>
using namespace std;
int main(){
int arr[1000],n,i=0,j=0,k=0,p=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max=arr[0];
int min=arr[0];
for(i;i<n;i++){
    if(arr[i]>max){
            max=arr[i];
    p++;
}

   else if(arr[i]<min) {
    min=arr[i];
    p++;
}
}
cout<<p<<endl;
}

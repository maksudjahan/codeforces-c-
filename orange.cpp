#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0,per;
    cin>>n;
    int arr[n];
 if(n>=1){
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
 }
 for(i=0;i<n;i++){
    sum=sum+arr[i];

 }

  per=sum/n;
  cout.precision(12);
 cout<<per<<endl;
 return 0;
}

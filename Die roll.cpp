#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int Y,W;
    float ans;
    cin>>Y>>W;
    int z=max(W,Y);
    ans=(6-z+1);
    if(ans==1)cout<<"1/6"<<endl;
   else if(ans==0)    cout<<"0/1"<<endl;
   else if(ans==2)     cout<<"1/3"<<endl;
    else if(ans==3)    cout<<"1/2"<<endl;
     else if(ans==4)   cout<<"2/3"<<endl;
     else if(ans==5)   cout<<"5/6"<<endl;
     else if(ans==6)   cout<<"1/1"<<endl;


}

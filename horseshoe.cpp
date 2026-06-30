#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int s[4];
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
        sort(s,s+4);
        auto last=unique(s,s+4);
        int unique_colors=last-s;
        cout<<4-unique_colors<<endl;
        return 0;
}

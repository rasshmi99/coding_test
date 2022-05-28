#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp, res;
    cin>>n;
    int i=10000;
    temp=n;
    while(i>=1){
       res=temp/i;
       if(res==9){
        cout<<0;
       }
       else{
        cout<<(res+1);
       }
       temp=temp%i;
       i=i/10;

    }

    return 0;
}

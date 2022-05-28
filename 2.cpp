#include <iostream>

using namespace std;

int main()
{
    int n;
    int r;
    cin>>n;
    int i=1;
    while(n>0){
        r=n%10;
        cout<<r<<"*"<<i<<endl;
        n=n/10;
        i=i*10;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<j<<" ";
        }
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
    }
    return 0;
}

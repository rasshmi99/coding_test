#include <iostream>

using namespace std;

int main()
{
    int l,u;
    cout<<"Enter the lower bound:\n";
    cin>>l;
    cout<<"Enter the upper bound:\n";
    cin>>u;
    for(int i=l;i<=u;i++){

        if(i==2 || i==3 || i==5 || i==7){
            cout<<i<<" ";
        }
        else if((i%2==0)||(i%3==0)||(i%5==0)||(i%7==0)){

        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}

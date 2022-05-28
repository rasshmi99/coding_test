#include <bits/stdc++.h>

using namespace std;

int main()
{
    char pswd[20];
    int count1=0,count2=0;
    cin>>pswd;
    for(int i=0;pswd[i];i++){
        if(pswd[i] >= 48 && pswd[i] <= 57)
            count1++;
        else if((pswd[i] >= 65 && pswd[i] <= 90)
        || (pswd[i] >= 97 && pswd[i] <= 122));
        else
            count2++;

    }
    if(count1>0 && count2>0){
        cout<<"Strong";
    }else if(count1>0){
        cout<<"Moderate";
    }else{
        cout<<"Weak";
    }
    return 0;
}

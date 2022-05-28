#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int> m;
    string arr;
    cin>>arr;
    for(int i=0;arr[i];i++){
        if(m.find(arr[i])==m.end()){
            m.insert(make_pair(arr[i],1));
        }
        else{
            m[arr[i]]++;
        }
    }
    for(int i=0;arr[i];i++){
        if(m[arr[i]]<3){
            cout<<arr[i];
        }
    }

    return 0;
}

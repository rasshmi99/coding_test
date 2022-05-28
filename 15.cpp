#include <bits/stdc++.h>

using namespace std;

void bubbleSort1(int a[], int n){

    int i,j,temp;
    for(i=0;i<=(n/2);i++){
        for(j=0;j<=(n/2)-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=(n/2)+1;i<n;i++){
        for(j=(n/2)+1;j<n-1;j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }
    }
}
}

int main()
{
    int arr[]={3,7,1,0,19,56,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

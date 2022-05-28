#include <bits/stdc++.h>
#include<stdlib.h>

using namespace std;

struct node{
    char *data;
    struct node *backward;
    struct node *ahead;
};

struct node *head=NULL;

int main()
{
    char *s = "HOME";
    struct node *cur;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=s;
    //cout<<temp->data;
    head->ahead=NULL;
    head->backward=NULL;

    cur=head;

    int n;
    cin>>n;
    char *op;
    for(int i=0;i<n;i++){
        cin>>op;

        if(op=="forward"){ if(cur->ahead==NULL){
                                cout<<"HOME"<<endl;
                            }
                            else{
                                cur=cur->ahead;
                                cout<<cur->data<<endl;
                            }
        }


    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
 struct node *next;
};
struct node *head,*newnode,*temp;
int main(){
head=NULL;
int n;
while(n){
newnode=(struct node*)malloc(sizeof(struct node));
cout<<"Enter value:";
cin>>newnode->data;
newnode->next=NULL;
if(head==NULL)
{
    head=newnode;
    temp=newnode;

}
else{
    temp->next=newnode;
    temp=newnode;
}
cout<<"Do you want to continue(0,1):";
cin>>n;
}
temp=head;
while(temp->next !=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<temp->data;
return 0;
}


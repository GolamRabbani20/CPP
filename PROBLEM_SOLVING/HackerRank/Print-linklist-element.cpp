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
cin>>n;
while(n){
newnode=(struct node*)malloc(sizeof(struct node));
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
n--;
}
temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;
}
return 0;
}



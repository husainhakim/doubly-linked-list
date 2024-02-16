#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
Node* prev;
int data;
};
int main()
{
Node* n1=new Node();
Node* n2=new Node();
Node* n3=new Node();
Node* n4=new Node();
n1->data=1;
n1->prev=NULL;
n1->next=n2;
n2->data=2;
n2->prev=n1;
n2->next=n3;
n3->data=3;
n3->prev=n2;
n3->next=n4;
n4->data=4;
n4->prev=n3;
n4->next=NULL;
cout<<"Before deleting the last element"<<endl;
Node* ptr=n1;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
int value=2;
ptr=n1;
Node* n5=new Node();
n5->data=5;

}




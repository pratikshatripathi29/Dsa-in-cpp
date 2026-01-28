#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
class List{
    Node* head;
    Node *tail;
public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        } else{
            newNode->next=head;
            head=newNode;

        }
    }
    void printLL(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void push_back(int val){
        Node* newNode =new Node(val);
        if(head==NULL){
            head=tail=newNode;

        }else{
            tail->next=newNode;
            tail=newNode;
        }

    }
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty";
            return;
        }
        Node* temp;
        temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
};
int main(){
    List l;
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    l.push_front(8);
    l.push_front(9);
    l.push_back(5);
    l.pop_front();
    l.printLL();

    return 0;

}
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node * next;
    
    //constructor
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node * &head, int val){
    Node * newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node * tmp = head;
    while(tmp->next != NULL){
        tmp=tmp->next;
    }
}

void print_linked_list(Node * head){
    cout<<head->val;
}

int main(){
    Node * head = NULL;
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Please enter value: ";
    int val;
    cin>>val; //input=1
    insert_at_tail(head, val);
    
    cout<<"Your Linked List value: ";
    print_linked_list(head);
    return 0;
}
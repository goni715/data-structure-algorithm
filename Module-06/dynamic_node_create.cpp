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
int main(){
    //Node head(10);
    Node * head = new Node(10); //dynamic object--first node is called head
    Node * a = new Node(20); //dynamic object

    head->next=a;

    cout<<head->val<<endl; //10
    cout<<a->val<<endl; //20
    cout<<head->next->val<<endl; //20 (head er maddhome a er val)

    cout<<(*(*head).next).val<<endl;
    return 0;
}
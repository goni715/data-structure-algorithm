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
    Node a(10);
    Node b(20);

    a.next = &b;

    cout<<a.val<<endl; //10
    cout<<b.val<<endl; //20

    cout<<(*a.next).val<<endl; //20
    //or
    cout<<a.next->val; //20
    return 0;
}
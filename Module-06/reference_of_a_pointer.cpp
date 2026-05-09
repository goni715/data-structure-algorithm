#include<bits/stdc++.h>
using namespace std;

void fun1(int *p){
    p = NULL;
}
void fun2(int * &p){ //reference of a pointer
    p = NULL;
}

int main(){
    int val = 10;
    int *ptr = &val;
    fun2(ptr);
    cout << ptr << endl; //0
    
    return 0;
}
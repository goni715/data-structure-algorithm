#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[6] = {10, 20, 2, 15, 25, 5};
    //search the value = 15
    // is the item found?
    // if yes then what's the position?

    int value = 15;
    int position = -1;

    for(int i=0; i<6; i++){
        if(value == num[i]){
            position = i+1;
            break;
        }
    }

    if(position== -1){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"The Position of "<<value<<" is "<<position;
    }

    //output
    //The Position of 15 is 4

    return 0;
}
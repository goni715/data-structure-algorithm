#include<bits/stdc++.h>
using namespace std;

int main(){
    //assign
    // vector<int> v={10, 20, 30};
    // vector<int> x={1, 2, 3};
    // v=x;
    // for(int i=0; i < v.size(); i++){
    //     cout<<v[i]<<" "; //1 2 3
    // }


    //pop-up
    vector<int> v={10, 20, 30, 40};
    v.pop_back();
    v.pop_back();
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" "; //10 20
    }


    return 0;
}
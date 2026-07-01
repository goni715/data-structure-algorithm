#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>v;
    //cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl; //0
    v.push_back(10);
    cout<<v.size()<<endl; //1
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<v.size()<<endl; //5

    //v.clear();
    //cout<<v.size()<<endl; //0
    //cout<<v[2]<<endl;  //30


    v.resize(2);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";  //10 20
    }

    cout<<endl;

    v.resize(7, 45);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";  //10 20 45 45 45 45 45
    }
    cout<<endl;
    return 0;
}
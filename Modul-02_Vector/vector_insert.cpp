#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v={ 1, 2, 3, 4, 5 };
    // v.insert(v.begin()+2, 10); //single value insert
    // for(int x:v){
    //     cout<<x<<" ";  //output = 1 2 10 3 4 5
    // }


    vector<int> v={ 1, 2, 3, 4, 5 };
    vector<int> v2 = {101, 102, 103, 104};
    v.insert(v.begin()+2, v2.begin(), v2.end()); 
    for(int x:v){
        cout<<x<<" ";  //output = 1 2 101 102 103 104 3 4 5
    }
    return 0;
}
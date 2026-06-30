#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //there are different types of vector

    /*type-01*/
    // vector<int>v;
    // cout<<v.size()<<endl; //output=0


    //type-02 
    /*
    vector<int>v(5);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    */
    // output = 0 0 0 0 0 
    // size = 5



    //type-03
    /*
    vector<int>v(5, 10);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    */
    // output = 10 10 10 10 10 
    // size = 5


    
    //type-04 --> copy vector
    /*
    vector<int>v2(5, 100);
    vector<int>v(v2);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    */
    // output = 1 2 3 4 5 6
    // size = 5



    //type-05 --> array converted into vector
    /*
    int a[6]= {1, 2, 3, 4, 5, 6};
    vector<int>v(a, a+6);

    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    */
    // output = 100 100 100 100 100 
    // size = 5


    vector<int> v={ 2, 10, 3};
    
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<v.size()<<endl;
    //output
    //2 10 3 
    //3
    return 0;
}
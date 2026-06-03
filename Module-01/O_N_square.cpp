#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // for(int i=0; i <=n; i++){  // O(N*N)
    //     for(int j=0; j <=n; j++){
    //         cout<<"hello"<<endl;
    //     }
    // }


    for(int i=0; i <=n-1; i++){  // O(N*N)
        for(int j=i+1; j <n; j++){
            cout<<"hello"<<endl;
        }
    }



    return 0;
}

/* output 25 times
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
*/
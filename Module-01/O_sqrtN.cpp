#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; // n=36

    // for(int i=1; i<=sqrt(n); i++){ // O(sqrt(N)) // 
    //     if(n%i == 0){
    //         cout<<i<<" ";
    //         if(n/i !=i){ //ignore duplicate divisor
    //             cout<<n/i<<endl;
    //         }
    //     }
    // }


    for(int i=1; i*i <=n; i++){ // O(sqrt(N)) // 
        if(n%i == 0){
            cout<<i<<" ";
            if(n/i !=i){ //ignore duplicate divisor
                cout<<n/i<<endl;
            }
        }
    }
    return 0;
}

/*output
1 36
2 18
3 12
4 9
6 
*/
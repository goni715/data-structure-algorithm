#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    //find digit from integer
    while(n>0){ //যতক্ষণ n শূন্যের চেয়ে বড়, লুপ চলবে। O(logN)
        int digit = n%10; //%10 দিয়ে সংখ্যার শেষ অঙ্ক বের করা হয়। যেমন n = 1234, তাহলে: 1234 % 10 = 4 অর্থাৎ digit = 4
        cout<<digit<<endl;
        n/=10; /* n/=10;  শেষ অঙ্ক বাদ দেয়*/
    }
    return 0;

    /*
    akhane n=100 hole
    for(int i=1; i<n; i++){ //O(N)
        cout<<i<<endl;
    }
    for(int i=1; i<n; i=i+2){ //O(N) = karon plus kore kore jasce
        cout<<i<<endl;
    }
    for(int i=1; i<n; i=i*2){ //O(logN) = karon onek step kome jabe
        cout<<i<<endl;
    }
    */
}


/*
 n/=10;
শেষ অঙ্ক বাদ দেয়।

যেমন:

1234 / 10 = 123
123 / 10 = 12
12 / 10 = 1
*/


/*
output
4
3
2
1
*/
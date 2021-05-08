//Link: https://www.codechef.com/MAY21C/problems/XOREQUAL

/*
For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕ denotes the bitwise XOR operator.

Since the number of valid x can be large, output it modulo 109+7.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains a single integer N.
Output
For each test case, output in a single line the answer to the problem modulo 109+7.

Constraints
1≤T≤105
1≤N≤105
Subtasks
Subtask #1 (100 points): Original Constraints

Sample Input
2
1
2
Sample Output
1
2
*/



#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long long int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        
        long long int ans;
        if(n==1) cout<<"1\n";
        else{
            n--;
            unsigned long long a=2 , ans = 1;
            while(n>0){
                if(n & 1) ans = ans * a % 1000000007;
                a =a *a%1000000007;
                n>>=1;
            }
            cout<<ans<<endl;
        }
    }
}



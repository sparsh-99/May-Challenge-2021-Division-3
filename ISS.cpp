#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;

    if(a==b) return a;

    if(a>b) return gcd(a-b,b);

    return gcd(a,b-a);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int temp =2*k+1;
        int a[temp];
        int j=1;
        for(int i=0;i<temp;i++,j++){
            a[i] = k + j*j;
        }
        //for(int i=0;i<temp;i++){
        //    cout<<a[i]<<" ";
        //}

        int sum=0;
        for(int i=0;i<temp-1;i++){
            sum += gcd(a[i],a[i+1]);
        }
        cout<<sum<<endl;
    }
}

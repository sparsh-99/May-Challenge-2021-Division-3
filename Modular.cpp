#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a,b,c=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                a = ((m % i) % j);
                b = ((m % j) % i);
                if(a==b)
                    c++;
            }
        }
        cout<<c<<endl;
    }
}

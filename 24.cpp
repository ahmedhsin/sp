#include <iostream>
#include <algorithm>
using namespace std;
void fib(int x){
    int f = 0,s = 1;
    if(x < 2)
        cout<<f;
    else{
        cout<<f<<" "<<s<<" ";
        x-=2;
        while(x--){
            int n = f + s;
            f = s;
            s = n;
            cout<<n<<" ";
        }
    }
}
main()
{
    int x;cin>>x;
    fib(x);
    /*
    b
    هتعمل نفس الي قولناه ف كل حلول ال b الي فاتت 
    */
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
//لو مش عارف ال gcd سيرش عنه
int gcd (int x,int y){
    for(int i = min(x,y);i!=0;i--){
        if(x % i == 0 and y % i == 0)
            return i;
    }
}
main()
{
    int x,y;cin>>x>>y;
    cout<<gcd(x,y);
    /*
    دالحل المفروض 
    b
    المفروض متعملش ري تيرن 
    خزن القيم ف اريي وابعتها
    arr[j++] = i;
    مثلا
    */
    return 0;
}

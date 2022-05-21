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
void reduce(int num,int denom){
    int temp = gcd(num,denom);
    cout<<num/temp<<" "<<denom/temp;
}
main()
{
    int x,y;cin>>x>>y;
    reduce(x,y);
    /*
    الفرق هتخلي تقريبا تقريبا انك هتابصي ال بارميترو رفيرنس وفالفنكشن تعدلها للاصلي وبعدين ترجع تعرض 
    ال x,y 
    فالمين 
    */
    return 0;
}

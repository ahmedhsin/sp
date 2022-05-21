#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    char ar1[5],ar2[5],ar3[5],ar4[5];
    cin>>ar1>>ar2>>ar3>>ar4;
    cout<<"enter char search for ";
    char x;cin>>x;
    string ans; int occ = 0;
    int cnt = 0;
    for(int i = 0;i<5;i++){
        if(ar1[i] == x)
            cnt++;
        else
            cnt = 0;
        if(cnt > occ){
            occ = cnt;
            ans = ar1;
        }
    }
    cnt = 0;
    for(int i = 0;i<5;i++){
        if(ar2[i] == x)
            cnt++;
        else
            cnt = 0;
        if(cnt > occ){
            occ = cnt;
            ans = ar2;
        }
    }
    cnt = 0;
    for(int i = 0;i<5;i++){
        if(ar3[i] == x)
            cnt++;
        else
            cnt = 0;
        if(cnt > occ){
            occ = cnt;
            ans = ar3;
        }
    }
    cnt = 0;
    for(int i = 0;i<5;i++){
        if(ar4[i] == x)
            cnt++;
        else
            cnt = 0;
        if(cnt > occ){
            occ = cnt;
            ans = ar4;
        }
    }
    cout<<"Character a occurred a maximum of "<<occ<<" consecutive times in this sequence "<<ans;
    return 0;
}

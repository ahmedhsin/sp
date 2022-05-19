#include <iostream>
using namespace std;
int arr[10];
int geto(int n){
    int cnt = 0;
    for(int i = 0;i<10;i++)
        if(arr[i] == n) cnt++;
    return cnt;
}
void getoc(int n,int a){
    int cnt = 0;
    for(int i = 0;i<10;i++)
        if(arr[i] == n) arr[i] = a;
}
int main()
{
    for(int i = 0;i<10;i++)
        cin>>arr[i];
    int n,a;cin>>n>>a;
    cout<<geto(n);
    return 0;
}

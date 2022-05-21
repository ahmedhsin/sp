#include <iostream>
#include <algorithm>
using namespace std;
void histo(int n,char x){
    for(int i = 0;i<n;i++)
        cout<<x;
    cout<<endl;
}
main()
{
    cout<<"enter size : ";
    int n;cin>>n;
    cout<<"enter char : ";
    char x;cin>>x;
    cout<<"enter array elements : ";
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        histo(arr[i],x);
    }
    return 0;
}
/*
الحمدلله 
*/

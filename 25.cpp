#include <iostream>
#include <algorithm>
using namespace std;
//ابحث عن prefix sum
void display(float arr[],int n){
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
}
void subtotal(float arr[],int n){
    for(int i = 1;i<n;i++)
        arr[i] += arr[i-1];
    display(arr,n);
}
main()
{
    int n;cin>>n;
    float arr[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    subtotal(arr,n);
    return 0;
}

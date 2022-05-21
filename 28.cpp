#include <iostream>
#include <algorithm>
using namespace std;
double calcmean(int arr[],int n){
    double mean = 0;
    for(int i = 0;i<n;i++){
        mean+=arr[i];
    }
    return mean/n;
}
main()
{
    int n;cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    double mean = calcmean(arr,n);
    cout<<mean;
    return 0;
}

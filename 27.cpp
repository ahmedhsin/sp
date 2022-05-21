#include <iostream>
#include <algorithm>
using namespace std;
int outOfOrder(double arr[],int n){
    for(int i = 1;i<n;i++){
        if(arr[i] < arr[i-1])
            return i;
    }
    return -1;
}
main()
{
    int n;cin>>n;
    double *arr = new double[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int temp = outOfOrder(arr,n);
    if(temp != -1)
        cout<<"out of order : "<<temp;
    else
        cout<<"none is out of order";
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
//we will use freq array again
int freq[1000];
int calcmode(int arr[],int n){
    int minn = -1;
    int ans;
    for(int i = 0;i<n;i++){
        if(freq[arr[i]] > minn)
            {
                minn = freq[arr[i]];
                ans = arr[i];
            }
    }
    return ans;
}
main()
{
    int n;cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int mode = calcmode(arr,n);
    cout<<mode;
    return 0;
}

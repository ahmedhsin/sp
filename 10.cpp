#include <iostream>
#include <cmath>
using namespace std;
//check if arry sorted or not 
bool check(int arr[]){
    bool isok = true;
    for(int i = 1;i<10;i++){
        if(arr[i] < arr[i-1])
            isok = false;
    }
    return isok;
}
//sort array by using swap
void sortt(int arr[]){
    while(!check(arr))
    for(int i = 1;i<10;i++){
            if(arr[i] < arr[i-1])
                swap(arr[i],arr[i-1]);
    }
}
int main()
{
    int arr[10];
    int odd=0,even=0;
    for(int i = 0;i<10;i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout<<"Even Numbers:"<<even<<endl;
    cout<<"Odd Numbers:"<<odd<<endl;
    sortt(arr);
    for(int i = 0;i<10;i++)
        cout<<arr[i]<<" ";
    ////////////////////////////////////////////////
    return 0;
}

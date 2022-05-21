#include <iostream>
#include <algorithm>
using namespace std;
//دور علي شرح لل frequency array وبعدين حل السؤال معرفتش تعالي كمل
int freq [10000];

int main()
{
    int n;cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int i = 1;i<=n;i++){
        int temp = freq[i];
        if(temp == 0)
            cout<<"Missing: "<<i<<endl;
        else if(temp > 1)
            cout<<"Duplicate:"<<i<<" ("<<temp<<" times)"<<endl;
    }
    cout<<"All Done";
    return 0;
}

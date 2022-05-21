#include <iostream>
#include <algorithm>
using namespace std;
struct sale{
    int id;
    string name;
    float amount;
    float commission;
};
//اعتقد في مشكله فال samples الي ف الشيت

void Commission(sale arr[]){
    for(int i = 0;i<3;i++){
        arr[i].commission = arr[i].amount*10/100 + 50;
    }
}
main()
{
    sale arr[3];
    for(int i = 0;i<3;i++){
        cin>>arr[i].name>>arr[i].id>>arr[i].amount;
    }
    Commission(arr);
    cout<<"Commissions are:"<<endl;
    float total = 0;
    for(int i = 0;i<3;i++){
        cout<<arr[i].id<<'\t'<<arr[i].commission<<endl;
        total += arr[i].commission;
    }
    cout<<"total : "<<total<<endl;
    return 0;
}

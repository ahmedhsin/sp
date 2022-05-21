#include <iostream>
#include <cmath>
using namespace std;
struct candies{
   string name;
   int price,calories;
};

int main()
{
    candies arr[5];
    for(int i = 0;i<5;i++){
        cin>>arr[i].name>>arr[i].price>>arr[i].calories;
    }
    cout<<"Enter how many calories you want to consume:"<<endl;
    int cal;cin>>cal;
    int min_price = 10000;
    for(int i = 0;i<5;i++){
        if(arr[i].calories == cal){
            cout<<arr[i].name<<" "<<arr[i].price<<endl;
            min_price = min(min_price,arr[i].price);
        }
    }
    for(int i = 0;i<5;i++){
        if(arr[i].calories == cal and arr[i].price == min_price)
        {
            cout<<"best  price is : "<<arr[i].name<<" "<<arr[i].price;
        }
    }
    return 0;
}

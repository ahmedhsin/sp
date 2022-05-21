#include <iostream>
using namespace std;
float calc(int unit){
    float total = 0;
    if(unit <= 100)
        total = unit * 60;
    else if(unit <= 300)
        total = 100*60 + (unit-100)*80;
    else
        total = 100*60 + 200*80 + (unit-300)*90;
    total = total / 100;
    if(total <= 50)
        return 50;
    else if(total > 300)
        return total + 15.0/100 * total;
}
struct consumer{
    string name;
    int unit;
    float amount;
};
int main()
{
    consumer arr[3];
    for(int i  = 0;i<3;i++){
        cout<<"Costumer#"<<i+1<<": ";
        cin>>arr[i].name>>arr[i].unit;
        arr[i].amount = calc(arr[i].unit);
    }
    for(int i  = 0;i<3;i++){
        cout<<arr[i].name<<" is required to pay "<<arr[i].amount<<"$"<<endl;
    }
    return 0;
}

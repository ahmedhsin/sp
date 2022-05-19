#include <iostream>
using namespace std;
struct emp{
    int id;
    string name;
    double hours;
    double overtime;
    double overall;
};
void calc(emp arr[],int n,float rate){
    for(int i = 0;i<n;i++){
        arr[i].overall = arr[i].hours * rate + 1.5 * arr[i].overtime * rate;
        cout<<arr[i].id<<" "<<arr[i].name<<" "<<arr[i].overall<<endl;
    }
}
int main()
{
    emp arr[1000];
    int n;cin>>n;
    float rate;cin>>rate;
    for(int i = 0;i<n;i++){
        cin>>arr[i].id>>arr[i].name>>arr[i].hours>>arr[i].overtime;
    }
    calc(arr,n,rate);

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
struct athlete{
    int id;
    string name;
    float record[3];
    float total = 0;

};
athlete arr[3];

void firstAndLastStud(){
    int idx_min,idx_max;
    float minn = 1000,maxx = 0;
    for(int i = 0;i<3;i++){
        if(arr[i].total < minn){
            minn = arr[i].total;
            idx_min = i;
        }
        if(arr[i].total > maxx){
            maxx = arr[i].total;
            idx_max = i;
        }
    }
    cout<<"The athlete with highest score is "<<arr[idx_max].name<<" with total "<<arr[idx_max].total<<endl;
    cout<<"The athlete with lowest score is "<<arr[idx_max].name<<" with total "<<arr[idx_min].total<<endl;
}
main()
{
    for(int i = 0;i<3;i++){
        cout<<"id :";
        cin>>arr[i].id;
        cout<<"name :";
        cin.ignore();
        getline(cin,arr[i].name); //الاسم من مقطعين
        for(int j = 0;j<3;j++){
            cout<<j+1<<" record : ";cin>>arr[i].record[j];
            arr[i].total+= arr[i].record[j];
        }
    }
    for(int i = 0;i<3;i++){
        cout<<arr[i].name<<" "<<arr[i].total<<endl;
    }
    firstAndLastStud();
    return 0;
}

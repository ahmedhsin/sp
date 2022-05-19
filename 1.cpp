#include <iostream>
using namespace std;
void display(int arr[3][4]){
        for(int i = 0;i<3;i++){
    cout<<"account #"<<i+1<<endl;
        for(int j = 1;j<4;j++)
            cout<<arr[i][j]<<" ";
    cout<<endl;
    }
}
void Transaction(int arr[3][4]){
    for(int i = 0;i<3;i++){
        arr[i][3] = arr[i][1];
    }
    for(int i = 0;i<3;i++){
        arr[i][3] -= arr[i][2];
    }

}
int main()
{
    /* arr[rows][columns]
(0,0) (0,1) (0,2) (0,3)
(1,0) (1,1) (1,2) (1,3)
(2,0) (2,1) (2,2) (2,3)
    */
    int arr[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 1;j<3;j++)
            cin>>arr[i][j];
    }
    Transaction(arr);
    display(arr);
    return 0;
}

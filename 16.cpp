#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int ar1[5][5],ar2[5][5];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>ar1[i][j];
            ar2[j][i] = ar1[i][j];
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++)
            cout<<ar2[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Give the scalar number: ";
    int x;cin>>x;
        for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            ar2[i][j] *= x;
            cout<<ar2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int iacc,dep,wit;
    cout<<"Please enter your account initial amount, deposited amount and the withdrawal amount:"<<endl;
    cin>>iacc>>dep>>wit;
    iacc+=dep-wit;
    cout<<"ur bal : "<<iacc;
    return 0;
}

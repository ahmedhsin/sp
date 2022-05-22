#include <iostream>
using namespace std;
/*
انا حاسس في مشكله فالسؤال عشان مينفعش
***
**
*
دي تبقي علي شكل مثلث متساوي السافين
فا هشتغل كدا
***
**
*

*/
int main()
{
    int n;
    do{
        cout<<"enter number : ";
        cin>>n;
        for(int i = n;i > 0;i--){
            for(int j = 1;j<=i;j++)
                cout<<'*';
        cout<<endl;
        }
    }while(n >= 0);
    return 0;
}

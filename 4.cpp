#include <iostream>
#include <algorithm>
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
main()
{
    int n;
    do{
        cout<<"enter number : ";
        cin>>n;
        if(n != -1){
        for(int i = n;i!=0;i--){
            for(int j = 1;j<=i;j++)
                cout<<'*';
        cout<<endl;
        }
        }
    }while(n != -1);
    return 0;
}

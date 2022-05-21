#include <iostream>
#include <algorithm>
using namespace std;
void menu(){
    cout<<"1- rice 2- pizza 3- salad 4- kofta 5- soup 6-icecream 7-bread"<<endl;
}
string chosse(int n){
    ///we can use switch statment
    //بس انامش هعملها عشان ال if  فوق
    if(n == 1)
        return "rice";
    if(n == 2)
        return "pizza";
    if(n == 3)
        return "salad";
    if(n == 4)
        return "Kofta";
    if(n == 5)
        return "soup";
    if(n == 6)
        return "icecream";
    if(n == 7)
        return "breed";
    else
        return "null";
}
main()
{
    string all = "";
    char ch;
    do{
        menu();
        int n;cin>>n;
        if(chosse(n) == "null")
            cout<<"wrong ? ";
        else
            all+= chosse(n)+'\n';
        cout<<"would you like another dish? ";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
    cout<<all;
    cout<<"thanl yuuu"<<endl;

    /*
    problem b)
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++)
            cout<<i;
        cout<<endl;
    }
    */
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
string binary(int n){
    string num = "";
    while(n){
        if(n % 2 == 0)
            num += '0';
        else
            num += '1';
        n/=2;
    }
    reverse(num.begin(),num.end());// كان ممكن اعمل لوب تعكس الاسترينج بس كسلت بصراحه
    if(n == 0) return '0';
    return num;
}
int binary2(int n){ //// دي فانكشن تانيه تجيب بيها الباينري غير الاولي 
    int binary = 0, remainder, product = 1;
      while (n != 0) {
        remainder = n % 2;
        binary = binary + (remainder * product);
        n = n / 2;
        product *= 10;
      }
}
int main()
{
    int arr[10];
    for(int i = 0;i<10;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<10;i++){
        cout<<arr[i]<<'\t'<<binary(arr[i])<<endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int location_of_largest(int arr[],int n){
    int maxx=0;
    int idx;
    for(int i = 0;i<n;i++){
        if(arr[i] > maxx){
            maxx = arr[i];
            idx = i;
        }
    }
    return idx;
}
int location_of_lowest(int arr[],int n){
    int mann=10000;
    int idx;
    for(int i = 0;i<n;i++){
        if(arr[i] < mann){
            mann = arr[i];
            idx = i;
        }
    }
    return idx;
}
main()
{
    int arr[1000];
    int n;cin>>n;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cout<<"idx of largest is :"<<location_of_largest(arr,n)<<endl;
    cout<<"idx of lowers is :"<<location_of_lowest(arr,n)<<endl;
    /*
    سؤال b
    كسلان اعمله بصراحه حله انك بعد ما تجيب اكبر رقم
    تعمل لوب تقارن الارقام بيه ولو لقيت زيه تخزن الانديكس ف اريي مثلا ونفس الحوار للمينمم
    */
    return 0;
}

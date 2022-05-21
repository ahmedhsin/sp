#include <iostream>
#include <algorithm>
using namespace std;
int freq[10000];
int result[10000];
int siz = 0;
//هنستخدم ال frequency array تانييييي
// بصراحه مش عارف حلي اكيد صح ولا لا عشان حوار الفانكشن الي هترجع ارري دي
// بس الاوت بوت تمام يبقا مش مهم الكيفيه ههه
void RemoveDuplicate(int arr[],int n){
    int j = 0;
    for(int i = 0;i<n;i++){
        if(freq[arr[i]] == 1)
            result[j++] = arr[i];
    }
    siz = j;

}
int main()
{
    int n;cin>>n;
    int arr[1000];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    RemoveDuplicate(arr,n);
    for(int i = 0;i<siz;i++)
        cout<<result[i]<<" ";
    return 0;
}

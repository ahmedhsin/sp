#include <iostream>
using namespace std;
bool isprime(int n){
    bool isok = true;
    if(n == 1) return false;
    for(int i = 2;i<n;i++){
        if(n % i == 0){
            isok = false;
            break;
        }
    }
    return isok;
}
int main()
{
    int n;cin>>n;
    int numbers[1000];
    int primes[1000];
    int j = 0;
    for(int i = 0;i<n;i++) {
        cin>>numbers[i];
        if(isprime(numbers[i]))
            primes[j++] = numbers[i];
    }
    if(j == 0)
        cout<<"No prime numbers ";
    else
        for(int i = 0;i<j;i++)
            cout<<primes[i]<<" ";

    return 0;
}

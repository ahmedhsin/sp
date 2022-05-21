#include <iostream>
#include <cmath>
using namespace std;
struct time{
    int seconds , minutes, hours;
};
time secs_to_hms(int total){
    time t1;
    t1.hours = total/(60*60);
    total = total%(60*60);
    t1.minutes = total/60;
    total = total % 60;
    t1.seconds = total;
    return t1;
}
int main()
{
    int total;cin>>total;
    time t1;
    t1 = secs_to_hms(total);
    cout<<t1.hours<<" "<<t1.minutes<<" "<<t1.seconds<<endl;
    return 0;
}

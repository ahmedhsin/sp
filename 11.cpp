    #include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
        int n;cin>>n;
        int*arr = new int[n];
        int sum = 0;
        for(int i = 0;i<n;i++)
            cin>>arr[i];
        int s,e;cin>>s>>e;
        bool isok = false;
        for(int i = 0;i<n;i++){
            if(s == arr[i])
                isok = true;
            else if(e == arr[i])
                if(isok) break; //ممكن النهايه تيجي فالاري قبل البدايه فا بتاكد اني لقيت البدايه الاول 
            if(isok){
                sum+=arr[i];
            }
        }
        sum -= s;
        cout<<"Sum of the numbers between "<<s<<","<<e<<" is:"<<sum<<endl;
        return 0;
    }

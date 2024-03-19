#include <iostream>
using namespace std;

int main(){
    bool flag=1;
    int total =0;
    while(flag!=0){
        int sleep; 
        int regular_job;
        cout<<"Enter the number of hours you need to sleep";
        cin>>sleep;
        cout<<sleep<<"hours of sleep";
        cout<<"Enter the number of hours you need to work your 9-5";
        cin>>regular_job;
        cout<<regular_job<<"hours of your 9-5";
        total=total+sleep+regular_job;
        cout<<total;
        break;

    }

    return 0;
}
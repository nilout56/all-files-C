#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Input a number:";
    cin>>x;
    if(x<0){
        x = x*(-1);
    }
    cout<<"absolute value is:"<<x;
    return 0;
}


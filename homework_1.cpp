#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"input_1::";
    cin>>y;
    cout<<"input_2::";
    cin>>z;

    for(x=1; x<=z; x++){
    	
        cout<<y<<"x"<<x<<"="<<x*y<<"\n";
    }
    return 0;
}

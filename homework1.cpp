#include <iostream>
using namespace std;

int main()
{
    int input_1,input_2;
    cout<<"input_1::";
    cin>>input_1;
    cout<<"input_2::";
    cin>>input_2;

    for(input_2;input_1<=input_2;input_2++){
        cout<<input_1<<"x"<<input_2<<"="<<input_2*input_1<<"\n";
        
        if(input_2 == 10){
       	break;
	}
        
    
        
    }
    return 0;
}

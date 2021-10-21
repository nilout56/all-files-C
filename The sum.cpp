#include<iostream>
using namespace std;
    int main(){
    	int x,y,z,num = 0,tnum;
    	cout<<"Input the value:";
    	cin>>z;
    for(x=1;x<=z;x++){
    	
    	tnum = 0;
    	for(y=1;y<=x;y++){
    		
    		num +=y;
    		tnum +=y;
    		cout<<y;
    		if(y<x){
    			cout<<"+";
			}
		}
		cout<<"="<<tnum<<"\n";
		
    	
	}
	cout<<"THE NUMBER IS:"<<num;
	
	

	}

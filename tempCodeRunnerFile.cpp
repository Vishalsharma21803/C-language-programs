#include <iostream>
using namespace std;
int main(){
	int x;
	int count=0;
	cout<<"enter a number: ";
	cin>>x;
	for(int i=0;i<x;i++){
		if (x%i==0){
			count=count+1;
		}
		
	}
	if (count==0){
		cout<<"prime number"<<endl;
		
	}
	else{
		cout<<"not a prime number"<<endl;
	}
	
	
	
	
	return 0;
}
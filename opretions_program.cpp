#include<iostream>
using namespace std;

void sum(int num1,int num2){
	
	cout<<"Sum of number 1 and 2 is : "<<num1+num2;
}

void sub(int num1,int num2){
	
	cout<<"\nSubtraction of number 1 and 2 is : "<<num1-num2;
}

void multi(int num1,int num2){
	
	cout<<"\nMultiplication of number 1 and 2 is : "<<num1*num2;
}

void div(int num1,int num2){
	
	cout<<"\nDiviasion of number 1 and 2 is : "<<num1/num2;
}
int main(){
	int n1,n2;
	char op;
	cout<<"Enter a first Number:";
	cin>>n1;
	cout<<"Enter Second NUmber:";
	cin>>n2;
	cout<<"Enter the operation symbol:";
	cin>>op;
	
	if(op=='+'){
		sum(n1,n2);
	}
	else if(op=='-'){
		sub(n1,n2);
	}
	else if(op=='*'){
		multi(n1,n2);	
	}
	else if(op=='/'){
		div(n1,n2);
		
	}
	else{
		cout<<"Invalid Input";
	}

}


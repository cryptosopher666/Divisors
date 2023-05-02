#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a;
	cout<<"Enter number: ";
	cin>>a;
	cout<<"Divisors = "<<endl;
	for(int i=1;i<=a;i++){
		if(a%i==0)
		cout<<i<<endl;
	}
	getch();
}

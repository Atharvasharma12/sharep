#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void DtoB(int num){
	int a;
	vector<int> bn;
	while(num>0){
		a=num%2;
		num=num/2;
		bn.push_back(a);
	}
	reverse(bn.begin(), bn.end());
	for(int i=0;i<bn.size();i++){
		cout<<bn[i];}
		cout<<".";
	
}

void BtoD(long num){
	int a,p=0,sum=0;
	while(num!=0){
		a=num%10;
		num=num/10;
		sum=sum+a*pow(2,p);
		p++;
	}
	cout<<"decimal number is = "<<sum;
	
}



int main(){
long b1,b2,b3,b4;
int choice;
cout<<"IP address converter"<<endl;
do{
cout<<"Enter your choices"<<endl;
cout<<"1. Decimal to Binary IP address"<<endl;
cout<<"2. Binary to Decimal IP address"<<endl;
cout<<"3. Exit"<<endl;
cin>>choice;

switch(choice){
	case 1 : {cout<<"Enter the IP address in Decimal -> ";
				cin>>b1>>b2>>b3>>b4;
				DtoB(b1);DtoB(b2);DtoB(b3);DtoB(b4);
				cout<<endl<<endl;
					
		break;
	}
	case 2 : {cout<<"Enter the IP address in Binary -> ";
				cin>>b1>>b2>>b3>>b4;
				BtoD(b1);BtoD(b2);BtoD(b3);BtoD(b4);
				cout<<endl<<endl;
					
		break;
	}
}
}
while(choice!=3);
	cout<<endl<<"\n***Thank you***";
return 0;
}

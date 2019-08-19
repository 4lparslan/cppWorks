#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void delay( int second ){ 
    clock_t endwait; 
    endwait = clock () + second * CLOCKS_PER_SEC ; 
    while (clock() < endwait) {} 
} 

int main(){
	int i=0;
		for(int temp=1;i<temp && temp!=11;temp++){
			system("clear");
			for(int b=1;b<temp;b++){
				cout<<" ";
			}
			cout<<"%"<<temp*10<<endl;
			for(int a=0;a<temp;a++){
				cout<<"|";
			}
			cout<<endl<<".........."<<endl<<"·LOADING··"<<endl<<"··········"<<endl;
			delay(1);
		}
		system("clear");
		cout<<"READY!!"<<endl;
}
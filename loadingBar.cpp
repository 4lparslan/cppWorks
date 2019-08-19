#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void wait( int second ){ 
    clock_t endwait; 
    endwait = clock () + second * CLOCKS_PER_SEC ; 
    while (clock() < endwait) {} 
} 

int main(){
	int i=0;
		for(int temp=1;i<temp && temp!=10;temp++){
			system("clear");
			for(int a=0;a<temp;a++){
				cout<<"|";
			}
			cout<<endl;
			wait(1);
		}
}
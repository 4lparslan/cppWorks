#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void wait( int second )//Standby setter function
  { 
    clock_t endwait; 
    endwait = clock () + second * CLOCKS_PER_SEC ; 
    while (clock() < endwait) {} 
  } 

int dollar(){
	srand ((unsigned)time(0));
	return (rand() % 3) + 9;//Dollar value is changing between 9-10-11
}

int gold(){
	srand ((unsigned)time(0));
	return (rand() % 6) + 150;//Gold value is changing between 150-156 
}

int main(){
	int i=1;
	while(1){
		system("clear");//This line clears the screen each time
		cout<<"    "<<i++<<". AY"<<endl<<endl;	
		cout<<"-> DOLAR: "<<dollar()<<endl;
		cout<<"-> ALTIN: "<<gold()<<endl;
		
		wait(15*60);//Wait for the next month, 15 minutes
		cout << '\a';//Beep sound 
	}
}

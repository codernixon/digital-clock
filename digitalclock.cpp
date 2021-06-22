#include<iostream>
#include<windows.h>
#include<time.h>

using namespace std;

void gotoxy(int x,int y){
COORD V={x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), V);
}

void zero(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || i==9 || j==1 || j==5){
				cout<<"*";
			}else{
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void one(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(j==3){
				cout<<"*";
			}else{
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void two(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || (i<5 && j==5) || (j==1 && i>5) ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void three(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==5 ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void four(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if( i==5 || j==5  || (j==1 && i<5) ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void five(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || (i>5 && j==5) || (j==1 && i<5) ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void six(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==1 || (j==5 && i>5) ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void seven(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || j==5 ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void eight(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==1 || j==5 ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
		y++;
		x=x-5;
		cout<<"\n";
	}
}

void nine(int x, int y){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if( j==5 || i==5 || i==9 || i==1 || (j==1 && i<5) ){
				cout<<"*";
			}else{
				
				cout<<" ";
			}
			x++;
		}
			y++;
		x=x-5;
		cout<<"\n";
	}
}

void colon(int x,int y){
		int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			gotoxy(x,y);
			if((j==3 && i==3) || (j==3 && i==7) ){
				cout<<"||";
			}else{
				
				cout<<" ";
			}
			x++;
		}
	    y++;
		x=x-5;
		cout<<"\n";
	}
	
}

void call(int digit, int x, int y){
	switch(digit){
		case 1: 
				one(x,y);
				break;
		case 2: 
				two(x,y);
				break;
		case 3: 
				three(x,y);
				break;	
		case 4: 
				four(x,y);
				break;
		case 5: 
				five(x,y);
				break;
		case 6: 
				six(x,y);
				break;
		case 7: 
				seven(x,y);
				break;
		case 8: 
				eight(x,y);
				break;
		case 9: 
				nine(x,y);
				break;	
		default : 
		         zero(x,y);										
	}
}
void getTime(){
	int hours=11;
	int minute = 45;
	int second = 10;
	
	time_t currentTime;
    struct tm *localTime;

     time( &currentTime );                   // Get the current time
     localTime = localtime( &currentTime );  // Convert the current time to the local time

     int Hour   = localTime->tm_hour;
     int Min    = localTime->tm_min;
     int Sec    = localTime->tm_sec;
     
     hours=Hour;
     minute=Min;
     second=Sec;
	call(hours/10,10,7);
	call(hours%10,19,7);
	colon(25,7);
	call(minute/10,31,7);
	call(minute%10,40,7);
	colon(46,7);
	call(second/10,52,7);
	call(second%10,61,7);
}

int main()
{
       while(1){
       	getTime();
       	Sleep(1000);
	   }
	
	
	return 0;

	
}

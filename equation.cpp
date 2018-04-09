#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int diskriminant(int a,int b,int c);
int main (){
	int a,b,c,disk;
	printf("ax^2+bx+c=0\n");
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	disk = diskriminant(a,b,c);
	if( disk >= 0){
		int kok1 = (- b - sqrt(disk))/2*a;
		int kok2 = (-b+sqrt(disk))/2*a;
		printf("kok1:%d\nkok2:%d\n",kok1,kok2); 
	}	else{
		printf("Bu denklemin gercek koku yoktur.\n");
	}
}

int diskriminant(int a,int b,int c){
	return b*b-4*a*c;
}

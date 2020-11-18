#include<stdio.h>
#include<math.h>

int main() {
	
	int x,y,z;
	
	printf(" Write x>25: ");
	scanf ("%d", &x );
	
	printf("Write y>14: ");
	scanf ("%d", &y );
	
	printf(" Write Z: ");
	scanf ("%d", &z);	
	
	if (x>25 && y>14) {
		printf("X and Y are fit \n");
	}
	else {
		printf("X and Y are not fit \n");
	}

	
	if (x>y && x>z){
		printf("max=X\n");
	} 
	else if(y>x && y>z){
		printf("max=Y\n");
	}
	else if (z>x && z>y) {
		printf("max=Z\n");
	}
	
	
	if (x<y && x<z){
		printf("min=X\n");
	} 
	else if(y<x && y<z){
		printf("min=Y\n");
	}
	else if (z<x && z<y) {
		printf("min=Z\n");
	}
	
	return 0;
}

#include<stdio.h>
#include<algorithm>

int main() {
	int c;
	char boggle[5][6];
	
	scanf("%d", &c);
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<=5; j++) {
			scanf("%c", &boggle[i][j]);
		}
	}
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<=5; j++) {
			printf("%c", boggle[i][j]);
		}
	}
	
}

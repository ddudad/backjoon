#include<stdio.h>

int main() {
	int size=0;
	int i, j, score=1, max=0;
	char arr[51][51];
		
	scanf("%d", &size);
	
	for(i=0; i<size; i++) {
		for(j=0; j<=size; j++) {
			scanf("%c", &arr[i][j]);
		}
	}
	
	for(i=0; i<size; i++) {
		score=1;
		for(j=0; j<=size; j++) {
			if(arr[i][j]==arr[i][j+1]) {
				score++;
				
			}
			else {
				if(score>max) {
					max=score;
				}
				score=1;
			}
		}
	}
	
	/*
	for(j=0; j<size; j++) {
		score=1;
		for(i=0; i<size; i++) {
			
			if(arr[i][j]==arr[i+1][j]) {
				printf("*");
				score++;
				if(score>max) {
					max=score;
				}
			}
			else {
				printf("%c", arr[i][j]);
				score=1;
			}
		}
		printf("\n");
	}
	*/
	printf("max: %d\n", max);
}

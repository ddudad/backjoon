#include<stdio.h>

int main() {
	int x, y, wcnt, bcnt, wmin=0, bmin=0;
	char arr[50][50];
	char whiteFirst[9][9]={ "WBWBWBWB",
							"BWBWBWBW",
							"WBWBWBWB",
							"BWBWBWBW",
							"WBWBWBWB",
							"BWBWBWBW",
							"WBWBWBWB",
							"BWBWBWBW"};
							
	char blackFirst[9][9]={ "BWBWBWBW",
							"WBWBWBWB",
							"BWBWBWBW",
							"WBWBWBWB",
							"BWBWBWBW",
							"WBWBWBWB",
							"BWBWBWBW",
							"WBWBWBWB"};
	
	scanf("%d %d", &y, &x);
	
	for(int i=0; i<y; i++) {
		for(int j=0; j<=x; j++) {
			scanf("%c", &arr[i][j]);
		}
	}
	
	for(int i=0; i<y; i++) {
		for(int j=0; j<=x; j++) {
			wcnt=0;
			bcnt=0;
			for(int k=0; k<8; k++) {
				for(int l=0; l<8; l++) {
					if(whiteFirst[k][j]!=arr[i][j]) {
						wcnt++;
					}
					if(blackFirst[k][j]!=arr[i][j]) {
						bcnt++;
					}
				}
			}
		}
	}
}

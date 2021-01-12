#include<stdio.h>
#include<algorithm>

int main() {
	int n, zeroCnt=0, oneCnt=0, sum=0;
	char arr[1000001], arr1[1000001];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		zeroCnt=0;
		oneCnt=0;
		sum=0;
		
		scanf("%s", arr);
		scanf("%s", arr1);
		
		for(int j=0; arr[j]!='\0'; j++) {
			if(arr[j]!=arr1[j]) {
				if(arr[j]=='1') {
					oneCnt++;
				}
				else {
					zeroCnt++;
				}
			}
		}
		
		sum=std::min(zeroCnt, oneCnt) + abs(zeroCnt-oneCnt);
		printf("%d\n", sum);
	}
}

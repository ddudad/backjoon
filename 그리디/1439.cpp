#include<stdio.h>
#include<algorithm>

int main() {
	char arr[1000001];
	int zeroCnt=0, oneCnt=0, i=0;
	bool flag=false;
	
	scanf("%s", arr);
	
	if(arr[0]=='0') {
		zeroCnt++;
	}
	else {
		oneCnt++;
	}
	
	for(i=1; arr[i]!='\0'; i++) {
		if(arr[i-1]!=arr[i]) {
			if(arr[i]=='0') {
				zeroCnt++;
			}
			else {
				oneCnt++;
			}
		}
	}
	
	printf("%d\n", std::min(zeroCnt, oneCnt));
}

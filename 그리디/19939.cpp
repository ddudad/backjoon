#include<stdio.h>
#include<algorithm>

int main() {
	int n, k, sum=0;
	
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<=k; i++) {
		sum+=i;
	}
	
	if(sum>n) {
		printf("-1\n");
		return 0;
	}
	
	n-=sum;
	
	//n==0으로 했지만 이는 1부터 시작할 때만 가능 
	//2부터 시작하는 수의 경우 n%k로 해야 가능 
	if(n%k==0) {
		printf("%d\n", k-1);
	}
	else {
		printf("%d\n", k);
	}
}

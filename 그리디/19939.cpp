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
	
	//n==0���� ������ �̴� 1���� ������ ���� ���� 
	//2���� �����ϴ� ���� ��� n%k�� �ؾ� ���� 
	if(n%k==0) {
		printf("%d\n", k-1);
	}
	else {
		printf("%d\n", k);
	}
}

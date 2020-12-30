#include<stdio.h>

int main() {
	int milk[3]={0,1,2};
	int i=0, n, cnt=0;
	
	scanf("%d", &n);
	
	for(int j=0; j<n; j++) {
		int tmp;
		scanf("%d", &tmp);
		
		if(tmp==milk[i]) {
			cnt++;
			i++;
		}
		if(i>2) {
			i=0;
		}
	}
	printf("%d", cnt);
}

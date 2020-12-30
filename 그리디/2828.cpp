#include<stdio.h>

int main() {
	int n, m, j, pos=0, cnt=0;
	int left=0, right=0;
	
	scanf("%d %d", &n, &m);
	scanf("%d", &j);
	
	left=0;
	right=left+m-1;
	
	for(int i=0; i<j; i++) {
		int tmp;
		scanf("%d", &tmp);
		tmp--;
		
		if(tmp>right) {
			cnt+=tmp-right;
			right=tmp;
			left=tmp-(m-1);
		}
		else if(tmp<left) {
			cnt+=left-tmp;
			left=tmp;
			right=tmp+(m-1);
		}	
	}
	printf("%d", cnt);
}

#include<stdio.h>
#include<algorithm>

int main() {
	int l, p, v, sum=0, i=1;
	
	while(1) {
		sum=0;
		
		scanf("%d %d %d", &l, &p, &v);
		
		if(l==0 && p==0 && v==0) {
			break;
		}
		
		sum+=(v/p)*l;
		
		if(v%p < l) {
			sum+=v%p;
		}
		else {
			sum+=l;
		}
		
		//printf("v/p=%d v&p=%d\n", v/p, v%p);
		
		printf("Case %d: %d\n", i++, sum);
	}
}

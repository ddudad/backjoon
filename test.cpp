#include<stdio.h>
#include<algorithm>
#include<math.h>

int main() {
	int l, p, v, max=0, i=0;
	
	while(1) {
		scanf("%d %d %d", &l, &p, &v);
		
		if(l==0 && p==0 && v==0) {
			break;
		}
		
		max=(v/p)*l;
		
		if( (v%p) < l) {
			max+=v%p;
		}
		else {
			max+=l;
		}
		printf("Case %d: %d\n", ++i, max);
	}
}

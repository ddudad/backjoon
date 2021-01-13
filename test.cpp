#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<ctype.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		printf("#%d %d %d\n", i, a/b, a%b);
	}
}

#include<stdio.h>
#include<algorithm>

int main() {
	long long x, y, sum=0;
	
	scanf("%d %d", &x, &y);
	
	if(x<y)
		std::swap(x,y);
	
	sum=x+y+(y/10);

	printf("%d\n", sum);
}

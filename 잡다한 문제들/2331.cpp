#include<stdio.h>

int main() {
	int i=0, j=0, sum=0, num=0;
	
	scanf("%d", &num);
	
	while(1) {
		sum=0;
		sum+=i;
		j=i;
		
		while(j!=0) {
		int tmp=j%10;
		sum+=tmp;
		j/=10;
		}
		if(num==sum) {
			break;
		}
		
		//i�� 1�鸸�� �Ѿ�� ���� ���. 
		if(i>1000000) {
			i=0;
			break;
		}
		i++;
	}
	
	printf("%d\n", i);
}

#include<stdio.h>

int calc(int total, int *arr) {
	int i,j,k;
	
	for(i=1; i<45; i++) {
		for(j=1; j<45; j++) {
			for(k=1; k<45; k++) {
				if(arr[i]+arr[j]+arr[k]==total) {
					//printf("%d %d %d\n", arr[i], arr[j], arr[k]);
					return 1;
				}
			}
		}
	}
	
	return 0;
}

int main() {
	int num, arr[45];
	scanf("%d", &num);
	
	for(int i=0; i<45; i++) {
		arr[i]=(i*(i+1))/2;
		//printf("%d ", arr[i]);
	}
	
	for(int i=0; i<num; i++) {
		int tmp;
		scanf("%d", &tmp);
		printf("%d\n", calc(tmp, arr));
	}
}

#include<stdio.h>
#include<algorithm>
#include<math.h>

struct mystr {
	int start;
	int end;
};

int main() {
	 int n, max=-1, min=999999999;
	 struct mystr arr[100000];
	 
	 scanf("%d", &n);
	 
	 for(int i=0; i<n; i++) {
	 	scanf("%d %d", &arr[i].start, &arr[i].end);
	 }
	 
	 for(int i=0; i<n; i++) {
	 	if(arr[i].start>max) {
	 		max=arr[i].start;
	 	}
	 	if(arr[i].end<min) {
	 		min=arr[i].end;
	 	}
	 }
	 //printf("max=%d min=%d\n", max, min);
	 if(max-min<0) {
	 	printf("0\n");
	 }
	 else {
	 	printf("%d\n", max-min);
	 }
}

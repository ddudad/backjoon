#include<stdio.h>

struct mystr {
	int weigh;
	int height;
};

int main() {
	int n;
	struct mystr arr[50];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d %d", &arr[i].weigh, &arr[i].height);
	}
	
	for(int i=0; i<n; i++) {
		int tmp=1;
		
		for(int j=0; j<n; j++) {
			if(arr[i].height<arr[j].height && arr[i].weigh<arr[j].weigh) {
				tmp++;
			}
		}
		printf("%d ", tmp);
	}
}


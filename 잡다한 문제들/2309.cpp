#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int i,j,k, arr[9], sum=0;
	
	for(i=0; i<9; i++) {
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	
	sort(arr, arr+9);
	
	for(i=0; i<9; i++) {
		for(j=i+1; j<9; j++) {
			if(sum-arr[i]-arr[j]==100) {
				for(k=0; k<9; k++) {
					if(k!=i && k!=j) {
						printf("%d\n", arr[k]);
					}
				}
				return 0;
			}
		}
	}	
}

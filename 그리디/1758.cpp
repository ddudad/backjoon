#include<iostream>
#include<string>
#include<algorithm>

bool compare(int i, int j) {
	return j<i;
}
/*
//왜 틀렸는지 모르겠음. 
생각했던 돈 - (받은 등수 - 1) 
*/
int main() {
	int n;
	int arr[100000];
	long long sum=0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n, compare);
	
	for(int i=0; i<n; i++) {
		if(arr[i]-i<=0) {
			break;
		}
		sum+=arr[i]-i;
	}
	printf("%d\n", sum);
}

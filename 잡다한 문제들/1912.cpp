#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int a,i;
	int arr[100001];
	scanf("%d", &a);
	
	for(i=0; i<a; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+a);
	
	printf("%d\n", arr[a-1]+arr[a-2]);
}

#include<stdio.h>
#include<algorithm>

struct myClass {
	int start;
	int end;
	int rank;
};

bool compare(myClass a, myClass b) {
	if(a.end == b.end) {
		return a.start<b.start;
	}
	else {
		return a.end<b.end;
	}
}

int main() {
	struct myClass arr[100000];
	int n, time=0, cnt=0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d %d", &arr[i].start, &arr[i].end);
	}
	
	std::sort(arr, arr+n, compare);
	
	for(int i=0; i<n; i++) {
		if(time<=arr[i].start) {
			cnt++;
		}
		time=arr[i].end;
	}
	printf("%d", cnt);
}

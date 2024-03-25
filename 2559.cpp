#include<bits/stdc++.h>
using namespace std;

/*
	누적합 기법을 잘 이용할 것
	최대, 최소값을 구할 때 비교하는 값(max_sum)의 초기값은 제일 크거나 제일 작도록 설정할 것 
*/

int temper[100001];
int sum[100001];
int n;
int k;
int max_sum = -100000000;

int main() {
	cin >> n >> k;
	
	for(int i=1; i<=n; i++) {
		cin >> temper[i];
		sum[i] = sum[i-1]+temper[i];
	}
	
	for(int i=k; i<=n; i++) {
		int tmp = sum[i] - sum[i-k];
		if(tmp>max_sum) 
			max_sum = tmp;			
	}
	
	cout << max_sum;
}

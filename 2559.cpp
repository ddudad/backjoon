#include<bits/stdc++.h>
using namespace std;

/*
	������ ����� �� �̿��� ��
	�ִ�, �ּҰ��� ���� �� ���ϴ� ��(max_sum)�� �ʱⰪ�� ���� ũ�ų� ���� �۵��� ������ �� 
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

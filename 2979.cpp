#include<bits/stdc++.h>
using namespace std;

int my_time[101];
int sum;
int main() 
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	for(int i=0; i<3; i++) {
		int start, end;
		cin >> start >> end;
		
		for(int j=start; j<end; j++) {
			my_time[j]++;	
		}
	}
	
	for(int i=0; i<101; i++) {
		if(my_time[i] == 1)
			sum+=(my_time[i]*a);
		if(my_time[i] == 2)
			sum+=(my_time[i]*b);
		if(my_time[i] == 3)
			sum+=(my_time[i]*c);
	}
	cout << sum;
}

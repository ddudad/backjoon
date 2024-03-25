#include<bits/stdc++.h>
using namespace std;

int n, m, j, pos, my_left, my_right, cnt;

int main() {
	cin >> n >> m >> j;
	
	my_left = 1;
	
	for(int i=0; i<j; i++) {
		my_right = my_left + m - 1;
		
		cin >>	pos;
		
		if(pos >= my_left && pos <= my_right) {
			continue;
		}
		else {
			if(pos < my_left) {
				cnt += (my_left - pos);
				my_left = pos;
			}
			else {
				my_left += (pos - my_right);
				cnt += (pos - my_right);
			}
			
		}
		
	}
	cout << cnt << '\n';
}

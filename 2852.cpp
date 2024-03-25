#include<bits/stdc++.h>
using namespace std;

int n, goal, team1, team2;
string str, prev_;
int time1sum, time2sum;
string m, s;


int changeToInt(string s) {
	return atoi(s.substr(0, 2).c_str()) * 60 + atoi(s.substr(3, 5).c_str());
}

void print(int t) {
	string d = "00" + to_string(t/60);
	string e = "00" + to_string(t%60);
	string ans = d.substr(d.size() - 2, 2) + ':' + e.substr(e.size() - 2, 2);
	cout << ans << "\n";
}

int main() {
	cin >> n;
	
	prev_ = "00:00";
	
	for(int i=0; i<n; i++) {
		cin >> goal >> str;
		
		
		if(team1>team2)
			time1sum += changeToInt(str) - changeToInt(prev_);
		if(team2>team1)
			time2sum += changeToInt(str) - changeToInt(prev_);
			
		if(goal == 1)
			team1++;
		else
			team2++;
			
		prev_ = str;
	}
	
	if(team1 > team2)
		time1sum += changeToInt("48:00") - changeToInt(prev_); 
	if(team2 > team1)
		time2sum += changeToInt("48:00") - changeToInt(prev_);

	print(time1sum);
	print(time2sum);
}

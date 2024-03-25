#include<bits/stdc++.h>
using namespace std;

/*
	예외처리가 부족해서 해결을 못함
	output[0].length + output[1].length > b.length 인 경우
	
	aaa*bbb 가 조건이고
	ab 가 입력으로 들어올 경우
	ab는 크기가 2인데 aaa는 크기가 3이라서 2이상인 인덱스로 접근하는 경우가 생김 
*/

vector<string> split(string input, string delimiter) {
	vector<string> ret;
	long long pos;
	string token = "";
	
	while((pos=input.find(delimiter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos+delimiter.length());
	}
	ret.push_back(input);
	
	return ret;
}

int main() {
	int n;
	vector<string> b;
	string a;
	string delimiter = "*";
	
	cin >> n;
	cin >> a;
	
	vector<string> output = split(a, delimiter);

	for(int i=0; i<n; i++) {
		string tmp;
		cin >> tmp;
		b.push_back(tmp);
	}

	for(int i=0; i<n; i++) {
		string pre;
		string suf;
		
		if(output[0].length() + output[1].length() > b[i].length())
			cout << "NE" << endl;
		else {
			pre = b[i].substr(0, output[0].length());
			suf = b[i].substr(b[i].length() - output[1].length());
		
			if(output[0] == pre && output[1] == suf)
				cout << "DA" << endl;
			else
				cout << "NE" << endl;
		}		
	}	
}

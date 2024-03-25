#include<bits/stdc++.h>
using namespace std;

/*
	����ó���� �����ؼ� �ذ��� ����
	output[0].length + output[1].length > b.length �� ���
	
	aaa*bbb �� �����̰�
	ab �� �Է����� ���� ���
	ab�� ũ�Ⱑ 2�ε� aaa�� ũ�Ⱑ 3�̶� 2�̻��� �ε����� �����ϴ� ��찡 ���� 
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

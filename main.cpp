#include<iostream>
#include<vector>
using namespace std;

bool flag = true;

int subLine() {
	int w1, d1, w2, d2;
	cin >> w1 >> d1 >> w2 >> d2;
	if (w1 == 0) {
		w1 = subLine();
	}
	if (w2 == 0) {
		w2 = subLine();
	}
	if (w1*d1 != w2*d2) {
		flag = false;
	}
	return w1 + w2;
		
	
}

int main() {
	int c;
	cin >> c;
	vector <bool> v;
	for (int i = 0; i < c; i++) {
		flag = true;
		subLine();
		if (flag) {
			v.push_back(true);
		}
			
		else {
			v.push_back(false);
		}
		
			
	}
	while (!v.empty()) {
		if (v.front())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		v.pop_back();
		if (!v.empty())
			cout << endl;
	}
	return 0;
}

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
	bool *r = new bool[c];
	for (int i = 0; i < c; i++) {
		flag = true;
		subLine();
		if (flag) {
			r[i] = 1;
		}
			
		else {
			r[i] = 0;
		}
		
			
	}
	for (int i = 0; i < c; i++) {
		if (r[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		if (i < c - 1)
			cout << endl;
	}
	return 0;
}

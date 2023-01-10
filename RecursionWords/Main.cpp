#include <iostream>
#include<vector>

using namespace std;

string generateWords(int n) {
	vector<string> t;
	t.push_back("b");
	t.push_back("a");
	for (int i = 2; i < n; i++) {
		t.push_back(t[i - 1] + t[i - 2]);
	}
	if (n == 2)
		return "b, a";
	else if (n < 2)
		return "invalid";
	else {
		return generateWords(n - 1) + ", " + t[n - 1];
	}
}



int main() {
	int num = 15;

	string output = generateWords(num);

	cout << output << endl;
}
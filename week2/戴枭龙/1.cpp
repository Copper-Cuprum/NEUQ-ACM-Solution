#include <bits/stdc++.h>
using namespace std;

void hannuota(int n, string A, string B, string C) {
	if (n == 1) {
		cout << A << "->" << C << endl;//�ڶ��� �����һ�����Ӵ�A�ƶ���C
	} else {
		hannuota(n - 1, A, C, B);//��һ�� ��n-1�����Ӵ�A�ƶ���B
		cout << A << "->" << C << endl;
		hannuota(n - 1, B, A, C);//������ ��n-1�����Ӵ�B�ƶ���C
	}
}

int main() {
	int n;
	string  a1, b1, c1;
	cin >> n >> a1 >> b1 >> c1;
	hannuota(n, a1, b1, c1);
	return 0;
}
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n, m, a, b, k, cs[10010];
vector<int> v[10010];//����һ���µ�����

// �ж��Ƿ�ÿ�����ж��Ѿ�����
// ���ȫ������ ����true
//v[i].size()������С:
bool t1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            // �����ĳ��� = û���ݻ� �� û�����ӵĳ���
            if (cs[i] == 0 && cs[v[i][j]] == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        v[a].push_back(b); //β����������b��
        v[b].push_back(a);//β����������a��
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        // cs[i] == 1 ��ʾi�ų����ѱ��ݻ�
        memset(cs, 0, sizeof(cs));
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> a;
            cs[a] = 1; // �ݻٱ��
        }
        if (t1(n) == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;

}
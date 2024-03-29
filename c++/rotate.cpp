#include <iostream>
#include <vector>
using namespace std;

/* 90度回転 */
vector<vector<int>> rotate(vector<vector<int>> a) {
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n));
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) res[j][n - 1 - i] = a[i][j];
    return res;
}

//回答
//コツ：
//一つでもOKがあるようなら出力する系の問題は、条件に使われる変数の初期値ををtrueにしておく
//そして、条件に満たさないことがあれば次に行く

//https://atcoder.jp/contests/abc298/tasks/abc298_b


int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i < n; i++) for (int j=0; j < n; j++) cin >> a[i][j];

    vector<vector<int>> b(n, vector<int>(n));
    for (int i=0; i < n; i++) for (int j=0; j < n; j++) cin >> b[i][j];

    for( int _ = 0; _ < 4; _++) {
        bool ok = true;
        for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && b[i][j] == 0) {
                ok = false;
            }
        }
        if (ok) {
            cout << "Yes\n";
            return 0;
        }
        a = rotate(a);
    }
    cout << "No\n";

}

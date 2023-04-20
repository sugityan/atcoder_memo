#include <iostream>
#include <vector>
using namespace std;

const int N = 200010;
const int M = 200010;
vector<vector<int>> box(N, vector<int>());
vector<vector<int>> card(M, vector<int>());


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> ans;
    // qが0になるまで
    while (q--) {
        int t;
        // pythonのように一行に入力を求める必要はない
        cin >> t;
        if (t == 1) {
            int i, j;
            cin >> i >> j;
            card[i].push_back(j);
            box[j].push_back(i);
        }
        else if (t == 2) {
            int i;
            cin >> i;
            // sort
            sort(box[i].begin(), box[i].end());
            for (int j = 0; j < box[i].size(); j++) {
                //以下のコードは、文字の間に空白を入れて、最後の要素の後に改行を入れる
                // "\n"[j + 1 != box[i].size()]
                cout << box[i][j] << "\n "[j + 1 != box[i].size()];
                // cout <<"出力"<< (j + 1 != box[i].size()) << endl;
                // cout <<"出力2:" << (box[i].size()) << " " << j+1 << endl;
            }
        }
        else {
            int i;
            cin >> i;
            sort(card[i].begin(), card[i].end());
            // unique()で重複を消す
            // erase()で後ろのゴミを消す
            card[i].erase(unique(card[i].begin(), card[i].end()), card[i].end());
            for (int j = 0; j < card[i].size(); j++) {
                cout << card[i][j] << "\n "[j + 1 != card[i].size()];
            }
        }

    }
    
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// const int N = 200010;
// const int M = 200010;
// vector<vector<int>> box(N, vector<int>());
// vector<vector<int>> card(M, vector<int>());

// int main() {
// 	int n, q;
// 	cin >> n >> q;
// 	vector<vector<int>> ans;
// 	while (q--) {
// 		int t;
// 		cin >> t;
// 		if (t == 1) {
// 			int i, j;
// 			cin >> i >> j;
// 			card[i].push_back(j);
// 			box[j].push_back(i);
// 		}
// 		else if (t == 2) {
// 			int i;
// 			cin >> i;
// 			sort(box[i].begin(), box[i].end());
// 			for (int j = 0; j < box[i].size(); j++) {
// 				cout << box[i][j] << "\n "[j + 1 != box[i].size()];
// 			}
// 		}
// 		else {
// 			int i;
// 			cin >> i;
// 			sort(card[i].begin(), card[i].end());
// 			card[i].erase(unique(card[i].begin(), card[i].end()), card[i].end());
// 			for (int j = 0; j < card[i].size(); j++) {
// 				cout << card[i][j] << "\n "[j + 1 != card[i].size()];
// 			}
// 		}
// 	}
// }

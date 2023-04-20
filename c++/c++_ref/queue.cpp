#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> que;

    //要素を追加
    que.push(1);
    que.push(2);
    que.push(3);

    while (!que.empty()) {
        cout << que.front() << " "; //先頭要素を参照する
        que.pop(); //先頭要素を削除
    }
}
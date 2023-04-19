//標準ライブラリのインクルード
#include <bits/stdc++.h>

using namespace std;


int main(){

        // 二次元配列を作る
    vector<vector<int>> data = {
        {7, 4, 0, 8},
        {2, 0, 3, 5},
        {6, 1, 7, 0}
    };


    // int型の2次元配列(3×4要素の)の宣言
     vector<vector<int>> data2(3, vector<int>(4));
    // arrayを用いた2次元配列
    array<array<int, 4>, 3> data3 = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> data2.at(i).at(j);
        }
    }

    // 0の個数を数える
    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {

            //上からi番目、左からj番目の画素が0かを判定
            if (data2.at(i).at(j) == 0) {
                count++;
            }

        }
    }

    cout << count << endl;
    
}
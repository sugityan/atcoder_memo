// 以下のコマンドで実行可能
// $ g++ -O2 -std=c++14 $fileName && ./a.out

//標準ライブラリのインクルード
#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int main() {
    int a, b, c;
    string s = "Hello World";
    
    // 入力
    // cin >> s;
    cout << "数字を3つ入力してください" << endl;
    //　入力の時は <の方向は逆となる.
    cin >> a >> b >> c;

    // cout << "Hello World" << endl;

    

    cout << ( a + b + c ) << " " << s << endl;

    //文字列の長さ
    cout << s.size() << endl;
    cout << s.length() << endl;

    //6番目の文字
    cout << s.at(6) << endl;
    cout << s[6] << endl;

    return 0;
}

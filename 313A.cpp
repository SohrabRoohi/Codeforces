/*
  Sohrab Roohi
*/

#include <bits/stdc++.h>

using namespace std;

const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

//If you are looking at my solution this is just a shortcut method and is not always used
vector<string> split(string input, char c) {
    stringstream test(input);
    string segment;
    vector<string> list;
    while(getline(test, segment, c))
    {
        list.push_back(segment);
    }
    return list;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int64 n;
    cin >> n;
    if(n > 0) {
        cout << n;
        return 0;
    }
    string num = to_string(n);
    if(num.length() == 2) {
        cout << 0;
        return 0;
    }
    n *= -1;
    int ones = n % 10;
    int hun = (n % 100) / 10;
    if(ones >= hun) {
        num.pop_back();
    }
    else {
        num[num.length() - 2] = num[num.length() - 1];
        num.pop_back();
    }
    cout << stoi(num);

    return 0;
}
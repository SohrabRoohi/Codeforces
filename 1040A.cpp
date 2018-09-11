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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    int prices[2] = {a, b};
    VI numbers;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    int price = 0;
    for(int i = 0; i < n / 2; i++) {
        if(numbers[i] != numbers[numbers.size() - 1 - i] && numbers[i] != 2 && numbers[numbers.size() - 1 - i] != 2) {
            cout << -1;
            return 0;
        }
        else if(numbers[i] == 2 && numbers[numbers.size() - 1 - i] != 2) {
            price += prices[numbers[numbers.size() - 1 - i]];
        }
        else if(numbers[i] != 2 && numbers[numbers.size() - 1 - i] == 2) {
            price += prices[numbers[i]];
        }
        else if(numbers[i] == 2 && numbers[numbers.size() - 1 - i] == 2) {
            price += 2 * min(prices[0],prices[1]);
        }
    }
    if(numbers.size() % 2 == 1 && numbers[numbers.size() / 2] == 2) {
        price += min(prices[0],prices[1]);
    }
    cout << price;
    return 0;

}
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

/*
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    VI shops;
    for(int i = 0; i < n; i++) {
        int shop;
        cin >> shop;
        shops.push_back(shop);
    }
    sort(shops.begin(), shops.end());
    int dp[100001] = {};
    int count = 0;
    int shopsIndex = 0;
    for(int i = 1; i <= 100000; i++) {
        if(shopsIndex < n) {
            while (shops[shopsIndex] == i) {
                count++;
                shopsIndex++;
            }
        }
        dp[i] = count;
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int coins;
        cin >> coins;
        coins = min(coins, 100000);
        cout << dp[coins] << endl;
    }
    return 0;
}
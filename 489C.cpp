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
    string lans, sans;
    int m, s;
    cin >> m >> s;
    int numLeft = s;
    int mCopy = m;
    string largest = "";
    while(numLeft > 0) {
        int subtract = min(9, numLeft);
        largest += to_string(subtract);
        numLeft -= subtract;
        mCopy--;
    }
    while(mCopy > 0 && largest != "") {
        largest += '0';
        mCopy--;
    }
    lans = largest.size() != m ? "-1" : largest;
    int needed = s / 9;
    int leftover = s % 9;
    string smallest = "";
    mCopy = m;
    smallest += leftover != 0 ? to_string(leftover) : "";
    mCopy--;
    for(int i = 0; i < needed; i++) {
        smallest += '9';
        mCopy--;
    }
    while(mCopy > 0 && smallest != "") {
        smallest += '0';
        mCopy--;
    }
    if(smallest.empty()) {
        smallest = "-1";
    }
    cout << smallest << " " << lans;
    return 0;
}
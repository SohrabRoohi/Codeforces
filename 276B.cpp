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

bool isPalindrome(const map<char,int> m, int length) {
    if(length % 2 == 0) {
        for(auto p : m) {
            if(p.second % 2 != 0) {
                return false;
            }
        }
    }
    else {
        bool found = false;
        for(auto p : m) {
            if(p.second % 2 != 0) {
                if(!found) {
                    found = true;
                }
                else {
                    return false;
                }
            }
        }
    }
    return true;
}

void deleteOptimal(map<char,int> *m) {
    for(auto it = (*m).begin(); it != (*m).end(); it++) {
        if(it->second % 2 == 1) {
            it->second--;
            return;
        }
    }
    for(auto it = (*m).begin(); it != (*m).end(); it++) {
        if(it->second % 2 == 0 && it->second > 0) {
            it->second--;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    map<char,int> m;
    int length = s.length();
    for(char c : s) {
        m[c]++;
    }
    while(true) {
        if(isPalindrome(m, length)) {
            cout << "First";
            return 0;
        }
        deleteOptimal(&m);
        length--;
        if(isPalindrome(m,length)) {
            cout << "Second";
            return 0;
        }
        deleteOptimal(&m);
        length--;
    }
    return 0;
}
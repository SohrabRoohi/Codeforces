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
    
    int64 n, b;
    cin >> n >> b;
    int64 zeroes = n;
    int64 base = b;
    for (int64 i = 2; i * i <= b ; i++)
    {
        if (base % i == 0)
        {
            int64 x = 0;
            int64 y = n;
            int64 factors=0;
            while (base % i == 0)
            {
                factors++;
                base /= i;
            }
            while (y / i > 0)
            {
                x += y / i;
                y /= i;
            }
            zeroes = min(zeroes, x / factors);
        }
    }
    if(base > 1) {
        int64 x = 0;
        int64 y = n;
        int64 factors=0;
        int64 bCopy = base;
        while (base % bCopy == 0)
        {
            factors++;
            base /= bCopy;
        }
        while (y / base > 0)
        {
            x += y / bCopy;
            y /= bCopy;
        }
        zeroes = min(zeroes, x / factors);
    }
    cout << zeroes;
    return 0;
}
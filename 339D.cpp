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
class SegmentTree {
public:
    int64 n;
    vector<int64> tree;

    void build(vector<int64> arr)
    {
        for (int i=0; i<n; i++)
            tree[n+i] = arr[i];

        bool x = false;
        for (int64 i = n - 1; i > 0; --i) {
            if (!x) {
                tree[i] = tree[i << 1] | tree[i << 1 | 1];
            } else {
                tree[i] = tree[i << 1] ^ tree[i << 1 | 1];
            }
            if (log2(i) == (int) log2(i)) {
                x = !x;
            }
        }
    }

    void updateTreeNode(int p, int value)
    {
        tree[p+n] = value;
        p = p+n;

        bool x = false;
        for (int i=p; i > 1; i >>= 1) {
            if (!x) {
                tree[i >> 1] = tree[i] | tree[i ^ 1];
            } else {
                tree[i >> 1] = tree[i] ^ tree[i ^ 1];
            }
            x = !x;
        }
    }

    SegmentTree(int64 n) {
        tree.assign(2 * (1<<n), 0);
        this->n = 1<<n;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int64 n, m;
    cin >> n >> m;
    vector<int64> a;
    for(int i = 0; i < ((int64)1<<n); i++) {
        int64 ai;
        cin >> ai;
        a.push_back(ai);
    }
    SegmentTree s(n);
    s.build(a);
    for(int i = 0; i < m; i++) {
        int64 p, b;
        cin >> p >> b;
        s.updateTreeNode(p-1, b);
        cout << s.tree[1] << endl;
    }
    return 0;
}
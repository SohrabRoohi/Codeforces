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
    map<string,int> shapes;
    shapes["Tetrahedron"] = 4;
    shapes["Cube"] = 6;
    shapes["Octahedron"] = 8;
    shapes["Dodecahedron" ] = 12;
    shapes["Icosahedron"] = 20;

    int n;
    cin >> n;

    int faces = 0;
    for(int i = 0; i < n ;i++) {
        string s;
        cin >> s;
        faces += shapes[s];
    }
    cout << faces;
    
    return 0;
}
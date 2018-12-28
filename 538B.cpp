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
    vector<int> binary;
    for(int i = 1; i <= 65; i++) {
        string cur = bitset<32>(i).to_string();
        while(cur[0] == '0') {
            cur.erase(cur.begin());
        }
        binary.push_back(stoi(cur));
    }
    vector<int> nums(n+1);
    vector<int> prev(n+1);
    nums[1] = 1;
    prev[1] = 0;
    for(int i = 2; i <= n; i++) {
        int minV = INT_MAX;
        int minIndex = 0;
        for(int j = 0; binary[j] <= i && j < binary.size(); j++) {
            if(nums[i-binary[j]] <= minV && i != binary[j]) {
                minV = nums[i-binary[j]];
                nums[i] = minV + 1;
                prev[i] = binary[j];
            }
            else if(binary[j] == i) {
                nums[i] = 1;
                prev[i] = 0;
            }
        }
    }
    cout << nums[n] << endl;
    int index = n;
    while(prev[index] != 0) {
        cout << prev[index] << " ";
        index -= prev[index];
    }
    cout << index;
    return 0;
}
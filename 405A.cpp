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

    int n;
    cin >> n;
    int array[n][100] = {};
    for(int i = 0; i < n; i++) {
        int cubes;
        cin >> cubes;
        for(int j = 0; j < cubes; j++) {
            array[i][j] = 1;
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < 100; j++) {
            if(array[i][j] == 1) {
                int column = i;
                array[i][j] = 0;
                while(column < n - 1 && array[column+1][j] == 0) {
                    column++;
                }
                array[column][j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < 100; j++) {
            sum += array[i][j];
        }
        cout << sum << " ";
    }
    return 0;
}
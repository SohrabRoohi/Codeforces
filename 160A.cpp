/*
  Sohrab Roohi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

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
    int sum = 0;
    VI coins;
    for(int i = 0; i < n; i++) {
        int coin;
        cin >> coin;
        sum += coin;
        coins.push_back(coin);
    }
    int taken = 0;
    int moves = 0;
    while(taken <= sum) {
        int max = 0;
        int maxIndex = 0;
        for (int i = 0; i < n; i++) {
            if (coins[i] > max) {
                max = coins[i];
                maxIndex = i;
            }
        }
        sum -= max;
        taken += max;
        moves++;
        coins[maxIndex] = 0;
    }
    cout << moves;

    return 0;
}
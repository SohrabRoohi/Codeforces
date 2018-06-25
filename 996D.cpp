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

#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
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

bool check(VI people) {
    for(int i = 0; i < people.size(); i++) {
        if(i % 2 == 0) {
            if(people[i] != people[i+1]) {
                return false;
            }
        }
    }
    return true;
}

VI findIndexes(VI people, int group) {
    VI output;
    for(int i = 0; i < people.size(); i++) {
        if(people[i] == group) {
            output.push_back(people[i]);
        }
    }
    return output;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    VI people;
    int steps = 0;
    for(int i = 0; i < 2*n; i++) {
        int p;
        cin >> p;
        people.push_back(p);
    }
    if(check(people)) {
        cout << 0;
        return 0;
    }
    while(!check(people)) {
        for(int i = 1; i <= n; i++) {
            VI initialIndex = findIndexes(people, i);
            if(initialIndex[0] == initialIndex[1] - 1 || initialIndex[0] == initialIndex[1] + 1) {
                continue;
            }
            int leftIndex0otherDist;
            int rightIndex0otherDist;
            int leftIndex1otherDist;
            int rightIndex1otherDist;
            bool leftIndex0Optimal = false;
            bool rightIndex0Optimal = false;
            bool leftIndex1Optimal = false;
            bool rightIndex1Optimal = false;
            /*if(initialIndex[0] > 1) {
                int leftIndex0other;
                VI leftIndex0 = findIndexes(people, initialIndex[0] - 1);
                for(int i = 0; i < leftIndex0.size(); i++) {
                    if(leftIndex0[i] !=initialIndex[0] - 1) {
                        leftIndex0other = i;
                    }
                }
                if(leftIndex0other > initialIndex[0] - 1) {
                    leftIndex0Optimal = true;
                    leftIndex0otherDist = abs(leftIndex0other - ( initialIndex[0]) - 1);
                }
            }*/
            if(initialIndex[0] < n - 1) {
                int rightIndex0other;
                VI rightIndex0 = findIndexes(people, initialIndex[0] + 1);
                for(int i = 0; i < rightIndex0.size(); i++) {
                    if(rightIndex0[i] != initialIndex[0] + 1) {
                        rightIndex0other = i;
                    }
                }
                if(rightIndex0other < initialIndex[0] + 1) {
                    rightIndex0Optimal = true;
                    rightIndex0otherDist = abs(rightIndex0other - ( initialIndex[0]) + 1);
                }
            }
            if(initialIndex[1] > 1) {
                int leftIndex1other;
                VI leftIndex1 = findIndexes(people, initialIndex[1] - 1);
                for(int i = 0; i < leftIndex1.size(); i++) {
                    if(leftIndex1[i] !=initialIndex[1] - 1) {
                        leftIndex1other = i;
                    }
                }
                if(leftIndex1other > initialIndex[1] - 1) {
                    leftIndex1Optimal = true;
                    leftIndex1otherDist = abs(leftIndex1other - ( initialIndex[1]) - 1);
                }
            }
            /*if(initialIndex[1] < n - 1) {
                int rightIndex1other;
                VI rightIndex1 = findIndexes(people, initialIndex[1] + 1);
                for(int i = 0; i < rightIndex1.size(); i++) {
                    if(rightIndex1[i] != initialIndex[1] + 1) {
                        rightIndex1other = i;
                    }
                }
                if(rightIndex1other > initialIndex[1] + 1) {
                    rightIndex1Optimal = true;
                    rightIndex1otherDist = abs(rightIndex1other - ( initialIndex[1]) + 1);
                }
            }*/

            pair<bool,int> left0 = make_pair(leftIndex0Optimal, leftIndex0otherDist);
            pair<bool,int> left1 = make_pair(leftIndex1Optimal, leftIndex1otherDist);
            pair<bool,int> right0 = make_pair(rightIndex0Optimal, rightIndex0otherDist);
            pair<bool,int> right1 = make_pair(rightIndex1Optimal, rightIndex1otherDist);
            pair<bool, int> array[4] = {left0, left1, right0, right1};

            int optimalIndex = 2;
            int optimalDistance = 10000;
            for(int i = 0; i < 4; i++) {
                if(array[i].first) {
                    if(array[i].second <= optimalDistance) {
                        optimalDistance ==  array[i].second;
                        optimalIndex = i;
                    }
                }
            }
            if(optimalIndex == 0) {
                int temp;
                temp = people[initialIndex[0]];
                people[initialIndex[0]] = people[initialIndex[0] - 1];
                people[initialIndex[0] - 1] = temp;
            }
            else if(optimalIndex == 1) {
                int temp;
                temp = people[initialIndex[1]];
                people[initialIndex[1]] = people[initialIndex[1] - 1];
                people[initialIndex[1] - 1] = temp;
            }
            else if(optimalIndex == 2) {
                int temp;
                temp = people[initialIndex[0]];
                people[initialIndex[0]] = people[initialIndex[0] + 1];
                people[initialIndex[0] + 1] = temp;
            }
            else if(optimalIndex == 3) {
                int temp;
                temp = people[initialIndex[1]];
                people[initialIndex[1]] = people[initialIndex[1] + 1];
                people[initialIndex[1] + 1] = temp;
            }
            steps++;

        }
    }
    cout << steps;
    return 0;
}
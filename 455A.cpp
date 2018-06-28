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
    cout << fixed;

    int64 n;
    cin >> n;
    int64 counts[100002] = {};
    for(int i = 0; i < n; i++) {
        int64 value;
        cin >> value;
        counts[value]++;
    }
    vector<int64> dp(100007);
    dp[0] = 0;
    dp[1] = counts[1];
    for(int64 i = 2; i <= 100001; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + i * counts[i]);
    }
    cout << dp[100001];
    /*
     * Let me explain this solution in case I ever forget and/or get confused
     * and also if anyone happens to look at this.
     *
     * Firstly, I misread the statement and it took me over a day of thinking about the
     * problem to find my mistake.
     *
     * The statement says select an element ak and delete ALL elements equal to ak + 1 and ak - 1.
     * For some reason, I interpreted this as delete the element in the position to the right of ak and left of ak
     * which is wrong. It means to delete ALL elements equal to ak + 1 or ak - 1.
     *
     * Next comes the recursive part, you need to take the counts of all the numbers and store them in
     * an array or something of the sort. Why? Because let's say if you have three 10's in the sequence, if
     * you happen to pick one of the 10s that would delete all of the (10-1) = 9 and (10+1) = 11 . So
     * taking another 10 would not actually delete anything else and there's no reason to not take the other ones.
     *
     * Now, let's start from the bottom and find what our maximum score can be if we do the algorithm
     * up to a certain number. To clarify, this means we find the maximum on a subset of the numbers we
     * are given. So for instance, if we are given [10 3 4 5 7] we only look at [3 4 5 7] and ignore 10.
     *
     * So the for loop in the example is doing that with the vector dp finding the maximum sum using those numbers.
     * dp[0] means if the only numbers we can pick are up to 0, and obviously this would be 0 because the inputs can not be 0.
     * dp[1] means if the numbers we can pick up to are 1, and this will be the count of the number 1 since if we pick
     * the number 1 over and over until there are none left it will be equal to the count.
     * Please note that ak + 1 and ak - 1 does not matter here because if we pick 1 we would delete (1-0) = 0 and there are no 0s,
     * and ak + 1 which is 2 but since we are only looking up to 1 it does not matter, since this implies we would not pick any 2s.
     *
     * Now dp[i] where i >= 2 can be seen as taking the maximum of 2 things.
     * dp[i-1] which is the maximum up to the number one less than i. The reason for this is if we pick the number i-1, we are deleting the number i, due to ak + 1.
     * dp[i-2] + i * count[i], so this part may be confusing but basically it is saying take the maximum sum of i-2, in doing so we delete ak - 1 = i - 3 and ak + 1 = i - 1.
     * But since all elements i are not deleted we are free to pick it. The additional sum is represented as i * count[i] where i is the number and count[i] is how many of that number there is.
     * So picking i whatever number count[i] results in i * counts[i] points.
     *
     * The Dynamic Programming aspect of it is to store the values and reduce the number of computations done which would otherwise result in a Time Limit Exceeded.
     */
    return 0;
}
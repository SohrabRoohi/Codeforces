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
struct Node {
    Node* next;
    int val;

    Node(int v) {
        this->val = v;
    }
};

class LinkedList {
private:
    Node* head;
    Node* back;
public:
    LinkedList() {
        head = NULL;
        back = NULL;
    }

    void push_front(int v) {
        Node* cur = new Node(v);
        cur->next = head;
        if(back == NULL) {
            back = cur;
            back->next = NULL;
        }
        head = cur;
    }

    void push_back(int v) {
        Node* cur = new Node(v);
        if(back == NULL) {
            head = cur;
            head->next = NULL;
            back = cur;
            back->next = NULL;
        }
        else {
            back->next = cur;
            back = cur;
            back->next = NULL;
        }
    }

    void print() {
        Node* cur = head;
        while(cur != NULL) {
            cout << cur->val << "\n";
            cur = cur->next;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    LinkedList l;
    l.push_back(s.length());
    for(int i = s.length() - 1; i >= 1; i--) {
        if(s[i-1] == 'l') {
            l.push_back(i);
        }
        else {
            l.push_front(i);
        }
    }
    l.print();
    return 0;
}
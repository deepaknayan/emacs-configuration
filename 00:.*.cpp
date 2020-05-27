/********************************************************************
* author : deepak nayan
* file   : `(buffer-file-name)`
* time   : `(current-time-string)`
* quest  : $1
********************************************************************/
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <ctime>
#include <cstdlib>

#define traverse(container, it) for(typeof((container).begin()) it = (container).begin(); it != (container).end(); ++it)
#define asc_sort(container) sort((container).begin(), (container).end())
#define des_sort(container) sort((container).rbegin(), (container).rend())
#define range(i, start, end) for(int i = start; i != end; ++i)
#define rev_for(i, start, end) for (int i = end - 1; i >= start; --i)
#define for_each(it, container) for(auto it: container)
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define endl "\n"

typedef long long int lli;

using namespace std;

template <typename T>
void input_vector(vector <T> & store, int n) {
    T temp = 0;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        store.push_back(temp);
    }
}

template <typename T>
void input_set(set <T> & store, int n) {
    T temp = 0;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        store.insert(temp);
    }
}

template <typename T>
void output(const vector <T> & store) {
    for_each(it, store) {
        cout << (*it) << " ";
    }
    cout << "\n";
}

template <typename T>
void output(vector<T> arr) {
  T temp;
  for(auto x: arr) cout << x << " ";
  cout << "\n";
}

lli exponent(lli num, lli base) {
  if(base == 0)
    return 1;

  if(base % 2)
    return (num % MOD * exponent(num, base - 1) % MOD) % MOD;
  else {
    lli x = exponent(num, base / 2);
    x = (x * x) % MOD;
    return x;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  $2
  return 0;
}


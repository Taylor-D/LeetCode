#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <iterator>
#include <numeric>
#include <bitset>

using namespace std;

static int __initialSetup = [] {
    ios::sync_with_stdio(false); // toggle off cout & cin, instead, use printf & scanf
    cin.tie(nullptr);            // untie cin & cout
    return 0;
}();

class Solution
{
  public:
    int maxDistToClosest(vector<int> &seats)
    {
        int pre = -1, ans = 0;
        for (int i = 0; i < seats.size(); ++i)
            if (seats[i])
            {
                ans = max(ans, pre >= 0 ? (i - pre) / 2 : i);
                pre = i;
            }
        return max(ans, (int)seats.size() - 1 - pre);
    }
};
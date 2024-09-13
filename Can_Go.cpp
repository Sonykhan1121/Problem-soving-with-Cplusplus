#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
long long int dis[N];
vector<pair<int, long long int>> ar[N];

class cmp {
public:
    bool operator()(pair<int, long long int> a, pair<int, long long int> b) {
        return a.second > b.second;
    }
};

void dijkstra(int src) {
    priority_queue<pair<int, long long int>, vector<pair<int, long long int>>, cmp> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty()) {
        pair<int, long long int> parent = q.top();
        q.pop();
        if (parent.second > dis[parent.first]) continue;
        for (auto child : ar[parent.first]) {
            int childnode = child.first;
            long long int childcost = child.second;
            if (parent.second + childcost < dis[childnode]) {
                dis[childnode] = parent.second + childcost;
                q.push({childnode, dis[childnode]});
            }
        }
    }
}

int main() {
    int n, e;
    std::cin >> n >> e;
    while (e--) {
        int a, b;
        long long int w;
        std::cin >> a >> b >> w;
        ar[a].push_back({b, w});
    }
    int src;
    cin >> src;

    for (int i = 1; i <= n; i++) {
        dis[i] = 1e18+5;
    }

    dijkstra(src);

    int q;
    cin >> q;
    while (q--) {
        int v;
        long long int w;
        cin >> v >> w;
        if (dis[v] <= w) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

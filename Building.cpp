#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 1; i <= n; i++) {
        par[i] = i;
        group_size[i] = 1;
    }
}

int find(int x) {
    if (par[x] == x) {
        return x;
    }
    par[x] = find(par[x]);
    return par[x];
}

void Union_by_size(int u, int v) {
    int leadA = find(u);
    int leadB = find(v);
    if (leadA != leadB) {
        if (group_size[leadA] > group_size[leadB]) {
            par[leadB] = leadA;
            group_size[leadA] += group_size[leadB];
        } else {
            par[leadA] = leadB;
            group_size[leadB] += group_size[leadA];
        }
    }
}

class Edge {
public:
    int u, v;
    long long c;
    Edge(int u, int v, long long c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

bool cmp(Edge e1, Edge e2) {
    return e1.c < e2.c;
}

int main() {
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgelist;

    while (e--) {
        int u, v;
        long long c;
        cin >> u >> v >> c;
        if (u != v) {
            edgelist.push_back(Edge(u, v, c));
        }
    }

    sort(edgelist.begin(), edgelist.end(), cmp);
    
    long long totalcost = 0;
    int number_of_connected_edge = 0;

    for (auto i : edgelist) {
        int left = find(i.u);
        int right = find(i.v);
        if (left != right) {
            Union_by_size(i.u, i.v);
            totalcost += i.c;
            number_of_connected_edge++;
        }
    }

    if (number_of_connected_edge == n - 1) {
        cout << totalcost << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}


#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

 

int main() {

    int t;

    cin>>t;

    while (t--) {

        int n, m;

        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; i++)

            for (int j = 0; j < m; j++)

                cin >> a[i][j];

        

        if (n == 1 && m == 1) {

            cout << -1 << endl;

            continue;

        }

        

        vector<int> elements;

        for (int i = 0; i < n; i++)

            for (int j = 0; j < m; j++)

                elements.push_back(a[i][j]);

        

        rotate(elements.begin(), elements.begin() + 1, elements.end());

        

        vector<vector<int>> b(n, vector<int>(m));

        int idx = 0;

        for (int i = 0; i < n; i++)

            for (int j = 0; j < m; j++)

                b[i][j] = elements[idx++];

        

        bool valid = true;

        for (int i = 0; i < n && valid; i++)

            for (int j = 0; j < m; j++)

                if (a[i][j] == b[i][j])

                    valid = false;

        

        if (!valid) {

            cout << -1 << endl;

        } else {

            for (int i = 0; i < n; i++) {

                for (int j = 0; j < m; j++) {

                    cout << b[i][j] << " ";

                }

                cout << endl;

            }

        }

    }

    return 0;

} 
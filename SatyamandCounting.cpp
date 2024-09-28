#include <iostream>
#include <vector>
#include <set>
typedef long long ll;

using namespace std;

// Check for upright or upside-down triangles
bool isUprightTriangle(const vector<int>& p1, const vector<int>& p2, const vector<int>& p3) {
    if (p1[0] == p2[0] && p1[1] != p2[1]) {
        
            return true;
        
    }
    if(p1[0] == p3[0] && p1[1] != p3[1]){
        return true;
    }
    if(p2[0] == p3[0] && p2[1] != p3[1]){
        return true;
    }
    return false;
}

// Check for diagonal right triangle like (x, 0), (x+1, 1), (x+2, 0)
bool isDiagonalRightTriangle(const vector<int>& p1, const vector<int>& p2, const vector<int>& p3) {
    if (p1[1] == 0 && p2[1] == 1 && p3[1] == 0) {
        if (p1[0] + 1 == p2[0] && p2[0] + 1 == p3[0]) {
            return true;
        }
    }
    return false;
}

int countRightAngleTriangles(const vector<vector<int>>& vertices) {
    int count = 0;

    // Set for efficient lookups
    set<vector<int>> vertexSet(vertices.begin(), vertices.end());

    // Generate combinations of three vertices
    for (size_t i = 0; i < vertices.size(); ++i) {
        for (size_t j = i + 1; j < vertices.size(); ++j) {
            for (size_t k = j + 1; k < vertices.size(); ++k) {
                const vector<int>& p1 = vertices[i];
                const vector<int>& p2 = vertices[j];
                const vector<int>& p3 = vertices[k];

                // Check for both types of right triangles
                if (isUprightTriangle(p1, p2, p3) || isUprightTriangle(p1, p3, p2) || 
                    isUprightTriangle(p2, p1, p3) || isDiagonalRightTriangle(p1, p2, p3) || 
                    isDiagonalRightTriangle(p1, p3, p2) || isDiagonalRightTriangle(p2, p1, p3)) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    ll y;
    cin >> y;

    // Only proceed if y is 1
    if (y == 1) {
        ll n;
        cin >> n;

        vector<vector<int>> vertices(n, vector<int>(2));

        // Input the vertices
        for (int i = 0; i < n; i++) {
            cin >> vertices[i][0] >> vertices[i][1];
        }

        // Count and output the number of right-angled triangles
        int result = countRightAngleTriangles(vertices);
        cout << result << endl;
    } else {
        cout << 0 << endl; // If y is 0, output 0
    }

    return 0;
}

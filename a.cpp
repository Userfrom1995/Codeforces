#include <bits/stdc++.h>
using namespace std;

bool isSortable(int size, vector<int>& sequence, int transformVal) {
    if (size == 0) return true;

    int prevMin = min(sequence[0], transformVal - sequence[0]);

    for (int index = 1; index < size; index++) {
        int currElement = sequence[index];
        int optionA = currElement;
        int optionB = transformVal - currElement;
        vector<int> possibleValues;

        if (optionA >= prevMin) possibleValues.push_back(optionA);
        if (optionB >= prevMin) possibleValues.push_back(optionB);

        if (possibleValues.empty()) return false;

        prevMin = *min_element(possibleValues.begin(), possibleValues.end());
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int sequenceSize, transformSize;
        cin >> sequenceSize >> transformSize;
        
        vector<int> sequence(sequenceSize), transformList(transformSize);
        for (int i = 0; i < sequenceSize; i++) cin >> sequence[i];
        for (int i = 0; i < transformSize; i++) cin >> transformList[i];

        int transformValue = transformList[0];

        if (isSortable(sequenceSize, sequence, transformValue)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

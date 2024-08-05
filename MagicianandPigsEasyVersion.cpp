#include <iostream>
#include <stack>
using namespace std;

// Function definition
void function(int n, int arr1[], int arr2[], stack<int>& myStack, stack<int>& modifiedStack) {
    if (arr1[n] == 1) {
        myStack.push(arr2[n]);
    } else if (arr1[n] == 2) {
        // Transfer elements from myStack to modifiedStack with modification
        while (!myStack.empty()) {
            int element = myStack.top(); // Access the top element
            myStack.pop(); // Remove the top element

            element -= arr2[n]; // Subtract arr2[n] from the element

            modifiedStack.push(element); // Push the modified element onto the new stack
        }
    } else {
        arr2[n] = 0;
        for (int i = 0; i < n; i++) {
            function(i, arr1, arr2, myStack, modifiedStack); // Recursive call
        }
    }
}

// Function to count positive values in the stack
int countPositiveValues(const stack<int>& s) {
    stack<int> temp = s; // Create a copy of the stack
    int count = 0;

    while (!temp.empty()) {
        if (temp.top() > 0) {
            count++; // Increment count if the value is positive
        }
        temp.pop(); // Remove the top element
    }

    return count;
}

// Function to print the stack
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << ' '; // Print the top element
        s.pop(); // Remove the top element
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;
    int arr1[a];
    int arr2[a];
    stack<int> myStack;
    stack<int> modifiedStack;

    // Input processing
    for (int i = 0; i < a; i++) {
        cin >> arr1[i];
        if (arr1[i] == 1) {
            cin >> arr2[i];
        } else if (arr1[i] == 2) {
            cin >> arr2[i];
        } else {
            arr2[i] = 0;
        }
    }

    // Process each element using function
    for (int i = 0; i < a; i++) {
        function(i, arr1, arr2, myStack, modifiedStack);
    }

    // Output
    cout << "Modified stack: ";
    printStack(modifiedStack);
    printStack(myStack);

    cout << "Number of positive values: " << countPositiveValues(modifiedStack) << endl;

    return 0;
}

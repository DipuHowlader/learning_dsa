#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, a, q; // Number of subscribers, initial online, notifications
        cin >> n >> a >> q;

        string notifications;
        cin >> notifications;

        int numPlus = 0; // Count '+' signs
        for (char character : notifications) {
            if (character == '+') {
                numPlus++;
            }
        }
        int numMinus = q - numPlus; // Count '-' signs

        // Check if all subscribers can't read (a + numPlus < n - numMinus)
        if (a + numPlus < n - numMinus) {
            cout << "NO" << endl;
            continue; // Skip to the next test case
        }

        int currentOnline = a;

        // Check if guaranteed read or maybe
        bool guaranteedRead = false;
        for (char notification : notifications) {
            if (notification == '-') {
                currentOnline--;
                if (currentOnline < 0) {
                    break; // No need to continue loop
                }
            } else {
                currentOnline++;
            }
            if (currentOnline == n) {
                guaranteedRead = true;
                break; // All online at some point
            }
        }

        // Output the result
        if (guaranteedRead) {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}

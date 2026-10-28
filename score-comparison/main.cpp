
#include <iostream>
#include <array>

using namespace std;

array<int, 2> calculate_scores(const array<int, 3>& alice,const array<int, 3>& bob) {
    int alice_score = 0;
    int bob_score = 0;

    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i]) {
            alice_score++;
        } else if (alice[i] < bob[i]) {
            bob_score++;
        }
    }

    return {alice_score, bob_score};
}

int main() {
    array<int, 3> alice;
    array<int, 3> bob;

    for (int i = 0; i < 3; i++) {
        if (!(cin >> alice[i])) {
            return 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (!(cin >> bob[i])) {
            return 1;
        }
    }

    array<int, 2> scores = calculate_scores(alice, bob);

    cout << scores[0] << " " << scores[1] << '\n';

    return 0;
}

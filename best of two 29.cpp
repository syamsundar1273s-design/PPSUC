#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    // Alice sorting logic to find top 2
    int alice_max1 = A1, alice_max2;
    if (A2 > alice_max1) {
        alice_max2 = alice_max1;
        alice_max1 = A2;
    } else {
        alice_max2 = A2;
    }
    if (A3 > alice_max1) {
        alice_max2 = alice_max1;
        alice_max1 = A3;
    } else if (A3 > alice_max2) {
        alice_max2 = A3;
    }
    int alice_score = alice_max1 + alice_max2;

    // Bob sorting logic to find top 2
    int bob_max1 = B1, bob_max2;
    if (B2 > bob_max1) {
        bob_max2 = bob_max1;
        bob_max1 = B2;
    } else {
        bob_max2 = B2;
    }
    if (B3 > bob_max1) {
        bob_max2 = bob_max1;
        bob_max1 = B3;
    } else if (B3 > bob_max2) {
        bob_max2 = B3;
    }
    int bob_score = bob_max1 + bob_max2;

    // Determine result
    if (alice_score > bob_score)
        printf("Alice");
    else if (bob_score > alice_score)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void moveDisk(int disk, char fromRod, char toRod) {
    printf("Chuyển đĩa %d từ cọc %c sang cọc %c\n", disk, fromRod, toRod);
}

void hanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        moveDisk(n, fromRod, toRod);
        return;
    }
    hanoi(n - 1, fromRod, auxRod, toRod);  // n - 1 A to B
    moveDisk(n, fromRod, toRod);           // n A to C
    hanoi(n - 1, auxRod, toRod, fromRod);  // n - 1 B to C
}

int main() {
    int n; 
    printf("Nhập số đĩa: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'C', 'B');

    return 0;
}

//ASHIQ ALI N K 24100673
#include <stdio.h>

int largest(int m1, int m2, int m3) {
    if (m1 > m2 && m1 > m3) {
        return m1;
    } else if (m2 > m3) {
        return m2;
    } else {
        return m3;
    }
}

int smallest(int m1, int m2, int m3) {
    if (m1 < m2 && m1 < m3) {
        return m1;
    } else if (m2 < m3) {
        return m2;
    } else {
        return m3;
    }
}

int average(int largest, int smallest, int third_no) {
    int avg = (largest + smallest) / 2;
    return avg > third_no ? 1 : 0;
}

int main() {
    int m1, m2, m3;
    int largest_no, smallest_no, third_no, avg_no, var;

    printf("Enter marks of three subjects (m1, m2, m3): ");
    scanf("%d %d %d", &m1, &m2, &m3);

    largest_no = largest(m1, m2, m3);
    smallest_no = smallest(m1, m2, m3);
    third_no = (m1 + m2 + m3) - (largest_no + smallest_no);

    var = average(largest_no, smallest_no, third_no);

    printf("var is %d\n", var);
    
    return 0;
}

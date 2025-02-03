#include <stdio.h>
#include <math.h>

void nonStart(const char s1[], const char s2[]) {
    for (int i = 1; s1[i] != '\0'; i++) printf("%c", s1[i]);
    for (int i = 1; s2[i] != '\0'; i++) printf("%c", s2[i]);
}

void reverse(int arr[],  size_t n) {
    unsigned int left = 0, right = n - 1;
    while (left < right) {
        const int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        ++left;
        --right;
    }
}

double mean(const int data[], size_t length) {
    if (length < 1) return 0.0;
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += data[i];
    }
    return (double) sum / length;
}
int max_abs(const int data[], size_t length) {
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (max < abs(data[i])) max = abs(data[i]);
    }
    return max;
}

size_t in_between(const int data[], size_t length, int val_1, int val_2) {
    size_t count = 0;
    for (int i = 0; i < length; i++) {
        if (val_1 <= data[i] <= val_2) ++count;
    }
    return count;
}

int minimum(const int data[][10], const size_t n) {
    int min = data[n][0];
    for (int i = 1; i < 10; i++) {
        if (data[n][i] < min) min = data[n][i];
    }
    return min;
}

size_t count_even(const int data [][7], const size_t n) {
    size_t count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            if (data[i][j] % 2 == 0) ++count;
        }
    }
    return count;
}

int main(void) {
    return 0;
}
#include <stdio.h>
#include <math.h>

/* Task 4 */
void nonStart(const char s1[], const char s2[]) {
    for (int i = 1; s1[i] != '\0'; i++) printf("%c", s1[i]);
    for (int i = 1; s2[i] != '\0'; i++) printf("%c", s2[i]);
}

/* Task 5 */
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

/* Task 6 */
double mean(const int data[], size_t length) {
    if (length < 1) return 0.0;
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += data[i];
    }
    return (double) sum / length;
}

/* Task 7 */
int max_abs(const int data[], size_t length) {
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (max < abs(data[i])) max = abs(data[i]);
    }
    return max;
}

/* Task 8 */
size_t in_between(const int data[], size_t length, int val_1, int val_2) {
    size_t count = 0;
    for (int i = 0; i < length; i++) {
        if (val_1 <= data[i] <= val_2) ++count;
    }
    return count;
}

/* Task 9 */
int minimum(const int data[][10], const size_t n) {
    int min = data[n][0];
    for (int i = 1; i < 10; i++) {
        if (data[n][i] < min) min = data[n][i];
    }
    return min;
}

/* Task 10 */
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
    // Task 4
    nonStart("Hello", "world");
    printf("\n");

    // Task5
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    // Task 6
    printf("Mean: %lf\n", mean(arr, 10));

    // Task 7
    printf("Max abs: %d\n", max_abs(arr, 10));

    // Task 8
    printf("%llu\n", in_between (arr, 10, 6, 9));

    // Task 9
    printf("minimum:%d \n", minimum(arr, 10));

    // Task 10
    printf("count_even: %llu\n", count_even(arr, 10));
    return 0;
}
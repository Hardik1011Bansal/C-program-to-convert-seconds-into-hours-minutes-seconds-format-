#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    // Input seconds
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Conversion
    hours = seconds / 3600;                 // 1 hour = 3600 seconds
    remainingSeconds = seconds % 3600;      // Remaining seconds after hours
    minutes = remainingSeconds / 60;        // 1 minute = 60 seconds
    remainingSeconds = remainingSeconds % 60;

    // Output
    printf("Time = %d:%d:%d\n", hours, minutes, remainingSeconds);

    return 0;
}

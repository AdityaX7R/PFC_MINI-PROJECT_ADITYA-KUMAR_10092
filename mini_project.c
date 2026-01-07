#include <stdio.h>
int main() {
    // ADITYA KUMAR 10092
    int n, original, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;   
    while (n > 0) {
        digit = n % 10;   
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;   
        }
        sum = sum + fact;  
        n = n / 10;        
    }
    if (sum == original)
        printf("Strong Number\n");
    else
        printf("Not Strong\n");
    return 0;
}

// output

// Enter a number: 145
// Strong Number

// Enter a number: 156
// Not Strong

#include <stdio.h>

int main() {
    
    int count = 1;
    int num, max;

    
    printf("Enter number %d: ", count);
    scanf("%d", &num);
    
    
    max = num;

    
    do {
        count++;
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        
        if (num > max) {
            max = num;
        }

    } while (count < 5);  

    
    printf("The maximum number is: %d\n", max);

    return 0;
}

#include <stdio.h>
int main() {
    float distance, total = 0;
    int i;
    for(i = 1; i <= 30; i++) {
        printf("Enter distance walked on day %d(km): ", i);
        scanf("%f", &distance);
        total += distance; 
    }
    printf("\nTotal distance walked = %.2f km\n", total);
    return 0;
}
/*OUTPUT
Enter distance walked on day 1 (km): 7
Enter distance walked on day 2 (km): 7.5
Enter distance walked on day 3 (km): 8
Enter distance walked on day 4 (km): 7.8
Enter distance walked on day 5 (km): 8.1
Enter distance walked on day 6 (km): 8.5
Enter distance walked on day 7 (km): 9 
Enter distance walked on day 8 (km): 8.8
Enter distance walked on day 9 (km): 9.1
Enter distance walked on day 10 (km): 9.5
Enter distance walked on day 11 (km): 8.8
Enter distance walked on day 12 (km): 9.4 
Enter distance walked on day 13 (km): 7.6
Enter distance walked on day 14 (km): 8.7
Enter distance walked on day 15 (km): 9
Enter distance walked on day 16 (km): 9.2
Enter distance walked on day 17 (km): 9.3
Enter distance walked on day 18 (km): 8.9
Enter distance walked on day 19 (km): 9.
Enter distance walked on day 20 (km): 8.5
Enter distance walked on day 21 (km): 8.8
Enter distance walked on day 22 (km): 9
Enter distance walked on day 23 (km): 7.9
Enter distance walked on day 24 (km): 8 
Enter distance walked on day 25 (km): 8.9
Enter distance walked on day 26 (km): 9
Enter distance walked on day 27 (km): 10
Enter distance walked on day 28 (km): 7.5
Enter distance walked on day 29 (km): 7.8
Enter distance walked on day 30 (km): 9.9
Total distance walked in the month = 258.50 km */
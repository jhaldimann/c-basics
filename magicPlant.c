#include <stdio.h>
//https://www.reddit.com/r/dailyprogrammer/comments/3twuwf/20151123_challenge_242_easy_funny_plant/

int countFruits(int person, int plants) {
    int weeks = 1;
    int fruits = 0;

    for(weeks; fruits < person; weeks++) {
        plants = fruits + plants;
        fruits = plants + fruits;
    }

    return weeks;
}

int main() {
    int x,y;
    printf("Number of player: ");
    scanf("%d", &x);
    printf("Number of plants: ");
    scanf("%d", &y);

    printf("Weeks: %d\n",countFruits(x,y));
    return 0;
}
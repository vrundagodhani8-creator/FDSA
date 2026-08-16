#include <stdio.h>
#include <string.h>

int linearSearch(char plates[][20], int n, char target[]) {
    int i;

    for(i = 0; i < n; i++) {
        if(strcmp(plates[i], target) == 0)
            return i;
    }

    return -1;
}

int main() {
    char plates[5][20] = {
        "GJ01AB1234",
        "GJ05CD5678",
        "GJ10EF9999",
        "GJ22GH1111",
        "GJ30XY5555"
    };

    char target[20];
    int pos;
    int n = 5;

    printf("Enter license plate: ");
    scanf("%s", target);

    pos = linearSearch(plates, n, target);

    if(pos != -1)
        printf("Found at position %d\n", pos);
    else
        printf("Not Found\n");

    return 0;
}
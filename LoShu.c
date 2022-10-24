#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool check(int fs[3][3]);

int main()
{
    int ils[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}};

    int nls[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    time_t t;
    srand((unsigned)time(&t));
    int pick = 0;

    int cpu[3][3] = {(rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1};

    if (check(ils))
    {
        printf("A is ls\n");
    }
    else
    {
        printf("A is not ls\n");
    }

    if (check(nls))
    {
        printf("B is ls\n");
    }
    else
    {
        printf("B is not ls\n");
    }

    int index = 0;

    while (check(cpu) == false)
    {
        index++;
        int new[3][3] = {(rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1, (rand() %9) + 1};
        cpu[0][0] = new[0][0];
        while (new[0][1] == new[0][0]) {
            new[0][1] = (rand() %9) + 1;
        }
        cpu[0][1] = new[0][1];
        while (new[0][2] == new[0][0] || new[0][2] == new[0][1]) {
            new[0][2] = (rand() %9) + 1;
        }
        cpu[0][2] = new[0][2];
        while (new[1][0] == new[0][0] || new[1][0] == new[0][1] || new[1][0] == new[0][2]) {
            new[1][0] = (rand() %9) + 1;
        }
        cpu[1][0] = new[1][0];
        while (new[1][1] == new[0][0] || new[1][1] == new[0][1] || new[1][1] == new[0][2] || new[1][1] == new[1][0]) {
            new[1][1] = (rand() %9) + 1;
        }
        cpu[1][1] = new[1][1];
        while (new[1][2] == new[0][0] || new[1][2] == new[0][1] || new[1][2] == new[0][2] || new[1][2] == new[1][0] || new[1][2] == new[1][1]) {
            new[1][2] = (rand() %9) + 1;
        }
        cpu[1][2] = new[1][2];
        while (new[2][0] == new[0][0] || new[2][0] == new[0][1] || new[2][0] == new[0][2] || new[2][0] == new[1][0] || new[2][0] == new[1][1] || new[2][0] == new[1][2]) {
            new[2][0] = (rand() %9) + 1;
        }
        cpu[2][0] = new[2][0];
        while (new[2][1] == new[0][0] || new[2][1] == new[0][1] || new[2][1] == new[0][2] || new[2][1] == new[1][0] || new[2][1] == new[1][1] || new[2][1] == new[1][2] || new[2][1] == new[2][0]) {
            new[2][1] = (rand() %9) + 1;
        }
        cpu[2][1] = new[2][1];
        while (new[2][2] == new[0][0] || new[2][2] == new[0][1] || new[2][2] == new[0][2] || new[2][2] == new[1][0] || new[2][2] == new[1][1] || new[2][2] == new[1][2] || new[2][2] == new[2][0] || new[2][2] == new[2][1]) {
            new[2][2] = (rand() %9) + 1;
        }
        cpu[2][2] = new[2][2];
    }

    printf("Number of squares tested: %d\n", index);
    printf("Successful square:\n");
    printf("[ %d %d %d ]\n", cpu[0][0], cpu[0][1], cpu[0][2]);
    printf("[ %d %d %d ]\n", cpu[1][0], cpu[1][1], cpu[1][2]);
    printf("[ %d %d %d ]\n", cpu[2][0], cpu[2][1], cpu[2][2]);

    return EXIT_SUCCESS;
}

bool check(int fs[3][3])
{
    bool result;
    int sA = fs[0][0] + fs[0][1] + fs[0][2];
    int sB = fs[1][0] + fs[1][1] + fs[1][2];
    int sC = fs[2][0] + fs[2][1] + fs[2][2];
    int sD = fs[0][0] + fs[1][0] + fs[2][0];
    int sE = fs[0][1] + fs[1][1] + fs[2][1];
    int sF = fs[0][2] + fs[1][2] + fs[2][2];
    int sG = fs[0][0] + fs[1][1] + fs[2][2];
    int sH = fs[0][2] + fs[1][1] + fs[2][0];

    if (sA == sB && sA == sC && sA == sD && sA == sE && sA == sF && sA == sG && sA == sH)
    {
        result = true;
    }
    else
    {
        result = false;
    } // end if

    return result;
}
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

    int rand[3][3];

    return EXIT_SUCCESS;
}

bool check(int fs[3][3])
{
    bool result;
    int sumA = fs[0][0] + fs[0][1] + fs[0][2];
    int sumB = fs[1][0] + fs[1][1] + fs[1][2];
    int sumC = fs[2][0] + fs[2][1] + fs[2][2];
    int sumD = fs[0][0] + fs[1][0] + fs[2][0];
    int sumE = fs[0][1] + fs[1][1] + fs[2][1];
    int sumF = fs[0][2] + fs[1][2] + fs[2][2];
    int sumG = fs[0][0] + fs[1][1] + fs[2][2];
    int sumH = fs[0][2] + fs[1][1] + fs[2][0];

    if (sumA == sumB && sumA == sumC && sumA == sumD && sumA == sumE && sumA == sumF && sumA == sumG && sumA == sumH) {
        result = true;
    }
    else {
        result = false;
    } //end if
}
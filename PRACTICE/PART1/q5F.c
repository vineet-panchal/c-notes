#include <stdio.h>
#include "q5F.h"
int seqSum(int num1, int num2) {
        int sum = (num2 - num1 + 1) * ((num1 + num2) / 2);
        return sum;
}


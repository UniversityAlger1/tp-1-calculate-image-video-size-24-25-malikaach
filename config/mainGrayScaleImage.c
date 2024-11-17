// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "grayScaleImage.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, float output) {
    char message[100];
    float result = grayScaleImage(input1, input2);
    sprintf(message, "Inputs (%d, %d). Expected output should be %f. Actual output = %f", input1, input2, output, result);
    assert_with_message(result == output, message);
    return 1;
}

int main() {
    // Test 1
    testMethod(2, 2, 4);

    // Test 2
    testMethod(20, 6, 120);

    printf("All tests passed for grayscale image size!\n");
    return 0;
}
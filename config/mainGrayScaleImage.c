//mainGrayScaleImage
// config.c 
#include <stdio.h> 
#include <assert.h> 
#include <stdlib.h> 
 
#include "grayScaleImage.h" 
#include "assert_with_message.h" 
 
int testMethod(int input1, int input2, float output){ 
    char message[100]; 
    float result = grayScaleImage(input1, input2); 
    sprintf(message, "Inputs (%d, %d). Expected output should be %f. Actuel output = %f", input1, input2, output, result); 
    assert_with_message(result == output, message); 
} 
 
int main() { 
    // Test 1 
    testMethod(2, 2, 4); 
 
    // Test 1 
    testMethod(20, 6, 120); 
    return 0; 
}
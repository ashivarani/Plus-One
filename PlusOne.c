/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int k = digitsSize;
    *returnSize = digitsSize;
    for (int i = k - 1; i >= 0; i--) {
        if(digits[i] != 9) {
            digits[i] += 1;
            return digits;
        } 
        digits[i] = 0;
    }
    digits = (int*)calloc((digitsSize + 1) , sizeof(int));
    digits[0] = 1;
    *returnSize = digitsSize + 1;
    for (int i = 1; i < digitsSize + 1; i++) {
        digits[i] = 0;
    }
    return digits;
}
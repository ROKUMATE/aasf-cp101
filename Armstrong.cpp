bool isArmstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    return result == num;
}
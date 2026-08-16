//Example 1:

//Input: x = 121
//Output: true
//Explanation: 121 reads as 121 from left to right and from right to left.

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x);

int main(){
int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(isPalindrome(x)){
        printf("true\n");
    }
    else{
        printf("false\n ");
    }
}

bool isPalindrome(int x) {
    int rem;
    long rev = 0, n;
    n = x;

    while (x > 0) {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    if (n == rev) {
        return true;
    } else {
        return false;
    }
    return 0;
}


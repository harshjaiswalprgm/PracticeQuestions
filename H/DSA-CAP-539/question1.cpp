// take the input as a string and print the first non repeated character and prit it out.
#include <stdio.h>
#include <string.h>

// void findFirstNonRepeatedChar(char str[]) {
//     int charCount[256] = {0};
//     int length = strlen(str);

//     for (int i = 0; i < length; i++) {
//         charCount[str[i]]++;
//     }

//     for (int i = 0; i < length; i++) {
//         if (charCount[str[i]] == 1) {
//             printf("First non-repeated character: %c\n", str[i]);
//             return;
//         }
//     }

//     printf("No non-repeated characters found.\n");
// }

//now make a same function to find out the occurrence of all the character in the taken string.

// void findCharOccurrences(char str[]) {
//     int charCount[256] = {0};
//     int length = strlen(str);

//     for (int i = 0; i < length; i++) {
//         charCount[str[i]]++;
//     }

//     printf("Character occurrences:\n");
//     for (int i = 0; i < length; i++) {
//         if (charCount[str[i]] > 0) {
//             printf("%c: %d\n", str[i], charCount[str[i]]);
//         }
//     }
// }

// //main function where we take the input as a string and print the first non repeated character and prit it out.

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%[^\n]", str);
//     // findFirstNonRepeatedChar(str);
//     findCharOccurrences(str);

//     return 0;
// }


// I have to create a program to swap the element of the array using two pointers fro example {1, 2, 3, 4} 1 exchange with 4 , 2 exchange with 3 and so on

//given an array of integers move all zeros to the end while mainting the relative order of non-zero elements. {0, 1, 0, 3, 12}

#include<stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i]!= 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeros to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, n);
    return 0;
}



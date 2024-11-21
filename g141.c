/*Raksha is developing a program to compare the lengths and content of two strings. She wants to write a program that takes two strings without any spaces as input and determines if they have the same length using the strlen function and content using the strcmp function. 



The program should print the length of each string and whether the strings are the same or not.

Input format :
The first line of input consists of a string, str1 representing the first string.

The second line of input consists of a string, str2 representing the second string.

Output format :
The first line displays "Length of Str1 is " followed by an integer representing the length of the first string.

The second line displays "Length of Str2 is " followed by an integer representing the length of the second string.

The third line of output displays "The strings are the same" if they have the same content. Otherwise, it displays "The strings are not the same".

*/

#include <stdio.h>
#include <string.h>

int main() {
    char Str1[21], Str2[21];

    scanf("%s", Str1);

    scanf("%s", Str2);

    int n = strlen(Str1);
    int r = strlen(Str2);

    printf("Length of Str1 is %d\n", n);
    printf("Length of Str2 is %d\n", r);

    int result = strcmp(Str1, Str2);

    if (result == 0)
        printf("The strings are the same");
    else
        printf("The strings are not the same");

    return 0;
}

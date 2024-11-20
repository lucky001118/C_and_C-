#include <stdio.h>  
#include <string.h>  
void convert12(char* str) // Take the time array  
{  
    int h1 = (int)str[0] - '0'; // Get the first digit of hour in 24 hour format  
    int h2 = (int)str[1] - '0'; // Get the second digit of hour in 24 hour format  
    int hh = h1 * 10 + h2; // Caluclate hour as an integer value  
    char Meridien[2]; // Make the AM or PM array  
    if (hh < 12) { // If the time is less than 12 hour it is AM  
        Meridien[0] = 'A';  
        Meridien[1] = 'M';  
    }  
    else {  
        Meridien[0] = 'P'; // When the time is 24 hour it is PM  
        Meridien[1] = 'M';  
    }  
  
    hh %= 12; // Calculate the 12 hour time  
  
    // Handle 00 and 12 case separately  
    if (hh == 0) {  
        printf("12"); // Base format as 00 in 24-hour is 12 in 12-hour  
  
        // Printing minutes and seconds  
        for (int i = 2; i < 8; ++i) {  
            printf("%c", str[i]);  
        }  
    }  
    else {  
        printf("%d", hh);  
        // Printing minutes and seconds  
        for (int i = 2; i < 8; ++i) {  
            printf("%c", str[i]);  
        }  
    }  
  
    // After time is printed Meridien  
    printf(" %c%c", Meridien[0], Meridien[1]);  
}  
  
int main()  
{  
  
    char str[8] = "17:35:20"; // array containing the time  
  
    convert12(str); // Call the function  
  
    return 0;  
}  
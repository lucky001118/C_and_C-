#include <stdio.h>
#include <conio.h>
void menu();
void celsious();
void fahrenheit();
void kelvin();
void rankin();
void reaumur();
void main()
{
    printf("***------------- The Temprature Conversion Calculator -------------***\n");
    menu();
}

void menu()
{
    int chose;
    printf("choose your conversion type:\n1. Celsious to other calculations\n2. Fahrenhite to other calculations\n3. Kelvine to other calculations\n4. Rankine to other calculations\n5. Reaumur to other calculations\nEnter the you choise: ");
    scanf("%d", &chose);
    switch (chose)
    {
    case 1:
        celsious();
        break;

    case 2:
        fahrenheit();
        break;

    case 3:
        kelvin();
        break;

    case 4:
        rankin();
        break;

    case 5:
        reaumur();
        break;

    default:
        break;
    }
}
void celsious()
{
    int chose, chose2,chose3;
    float result1 = 0, result2 = 0, result = 0, c = 0;
    printf("This is the Celsious module here we can calculate Celsious to other all onversions....\n");
    printf("Choose convertion of Celsious to others:\n1. Celsious to Fahrenhit\n2. Celsious to kelvin\n3. Celsiious to rankin\n4. Celsious to reaumur\nEnter the your choise: ");
    scanf("%d", &chose);
    switch (chose)
    {
    case 1:
        printf("Enter the Celsious scale temprature: ");
        scanf("%f", &c);
        result1 = 9 * c;
        result2 = result1 / 5;
        result = result2 + 32;
        printf("The Celsious(%fC) to Fahrenhit temprature is: %fF", c, result);
        break;

    case 2:
        printf("Enter the Celsious scale temprature: ");
        scanf("%f", &c);
        result = c + 273.15;
        printf("The Celsious(%fC) to Kelvin temprature is: %fK", c, result);
        break;

    case 3:
        printf("Enter the Celsious scale temprature: ");
        scanf("%f", &c);
        result1 = 9 * c;
        result2 = result1 / 5;
        result = result2 + 491.67;
        printf("The Celsious(%fC) to Rankin temprature is: %fRa", c, result);
        break;

    case 4:
        printf("Enter the Celsious scale temprature: ");
        scanf("%f", &c);
        result1 = 8 * c;
        result = result1 / 10;
        printf("The Celsious(%fC) to Reaumur temprature is: %fRe", c, result);
        break;

    default:
        printf("The number you have entered has not vailid.\nPlease enter the number which is in the Celsious menu..");
        printf("\nFor yess 1 and no for anyother key:");
        scanf("%d",&chose3);
        if(chose3==1)
        {
            celsious();
        }
        break;
    }

    printf("\nAre you want to calculate more Temprature conversions?? Then enter 1 or anyother key: ");
    scanf("%d", &chose2);
    if (chose2 == 1)
    {
        menu();
    }
}
void fahrenheit()
{
    int chose, chose2,chose3;
    float result1 = 0, result2 = 0, result = 0, result3 = 0, f = 0;
    printf("This is the Fahrenhit module here we can calculate Fahrenhit to other all onversions....");
    printf("\nChoose convertion of Celsious to others:\n1. Fahrenhit to Celsious\n2. Fahrenhit to kelvin\n3. Fahrenhit to rankin\n4. Fahrenhit to reaumur\nEnter the your choise: ");
    scanf("%d", &chose);
    switch (chose)
    {
    case 1:
        printf("Enter the Fahrenhit scale temprature: ");
        scanf("%f", &f);
        result1 = f - 32;
        result2 = result1 * 5;
        result = result2 / 9;
        printf("The Fahrenhit(%fF) to Celsious temprature is: %fC", f, result);
        break;

    case 2:
        printf("Enter the Fahrenhit scale temprature: ");
        scanf("%f", &f);
        result1 = f - 32;
        result2 = result1 * 5;
        result3 = result2 / 9;
        result = result3 + 273.15;
        printf("The Fahrenhit(%fF) to Kelvin temprature is: %fK", f, result);
        break;

    case 3:
        printf("Enter the Fahrenhit scale temprature: ");
        scanf("%f", &f);
        result = f - 32 + 491.67;
        printf("The Fahrenhit(%fF) to Rankin temprature is: %fRa", f, result);
        break;

    case 4:
        printf("Enter the Celsious scale temprature: ");
        scanf("%f", &f);
        result1 = f - 32;
        result2 = result1 * 8;
        result = result2 / 18;
        printf("The Fahrenhit(%fF) to Reaumur temprature is: %fRe", f, result);
        break;

    default:
        printf("The number you have entered has not vailid.\nPlease enter the number which is in the Fahrenhit menu..");
        printf("\nFor yess 1 and no for anyother key:");
        scanf("%d",&chose3);
        if(chose3==1)
        {
            fahrenheit();
        }
        break;
    }

    printf("\nAre you want to calculate more Temprature conversions?? Then enter 1 or anyother key: ");
    scanf("%d", &chose2);
    if (chose2 == 1)
    {
        menu();
    }
}

void kelvin()
{
    int chose, chose2,chose3;
    float result1 = 0, result2 = 0, result3 = 0, result = 0, k = 0;
    printf("This is the Kelvin module here we can calculate Kelvin to other all onversions....");
    printf("\nChoose convertion of Celsious to others:\n1. Kelvin to Celsious\n2. Kelvin to Fahrenhit\n3. Kelvin to rankin\n4. Kelvin to reaumur\nEnter the your choise: ");
    scanf("%d", &chose);
    switch (chose)
    {
    case 1:
        printf("Enter the Kelvin scale temprature: ");
        scanf("%f", &k);
        result = k - 273.15;
        printf("The Kelvin(%fK) to Celsious temprature is: %fC", k, result);
        break;

    case 2:
        printf("Enter the Kelvin scale temprature: ");
        scanf("%f", &k);
        result1 = k - 273.15;
        result2 = result1 * 9;
        result3 = result2 / 5;
        result = result3 + 32;
        printf("The Kelvin(%fK) to Fahrenhit temprature is: %fF", k, result);
        break;

    case 3:
        printf("Enter the Kelvin scale temprature: ");
        scanf("%f", &k);
        result1 = k - 273.15;
        result2 = result1 * 9;
        result3 = result2 / 5;
        result = result3 + 491.67;
        printf("The Kelvin(%fk) to Rankin temprature is: %fRa", k, result);
        break;

    case 4:
        printf("Enter the Kelvin scale temprature: ");
        scanf("%f", &k);
        result1 = k - 273.15;
        result2 = result1 * 8;
        result = result2 / 10;
        printf("The Fahrenhit(%fF) to Reaumur temprature is: %fRe", k, result);
        break;

    default:
        printf("The number you have entered has not vailid.\nPlease enter the number which is in the Fahrenhit menu..");
        printf("\nFor yess 1 and no for anyother key:");
        scanf("%d",&chose3);
        if(chose3==1)
        {
            kelvin();
        }
        break;
    }

    printf("\nAre you want to calculate more Temprature conversions?? Then enter 1 or anyother key: ");
    scanf("%d", &chose2);
    if (chose2 == 1)
    {
        menu();
    }
}

void rankin()
{
    int chose, chose2,chose3;
    float result1 = 0, result2 = 0, result = 0, result3 = 0, ra = 0;
    printf("This is the Rankin module here we can calculate Rankin to other all conversions....");
    printf("\nChoose convertion of Celsious to others:\n1. Rankin to Celsious\n2. Rankin to Fahrenhit\n3. Rankin to Kelvin\n4. Rankin to reaumur\nEnter the your choise: ");
    scanf("%d", &chose);
    switch (chose)
    {
    case 1:
        printf("Enter the Rankin scale temprature: ");
        scanf("%f", &ra);
        result1 = ra - 491.67;
        result2 = result1 / 9;
        result = result2 * 5;
        printf("The Rankin(%fRa) to Celsious temprature is: %fC", ra, result);
        break;

    case 2:
        printf("Enter the Rankin scale temprature: ");
        scanf("%f", &ra);
        result1 = ra - 491.67;
        result = result1 + 32;
        printf("The Rankin(%fRa) to Fahrenhit temprature is: %fF", ra, result);
        break;

    case 3:
        printf("Enter the Rankin scale temprature: ");
        scanf("%f", &ra);
        result1 = ra - 491.67;
        result2 = result1 / 9;
        result3 = result2 * 5;
        result = result3 + 273.15;
        printf("The Rankin(%fRa) to Kelvin temprature is: %fK", ra, result);
        break;

    case 4:
        printf("Enter the Rankin scale temprature: ");
        scanf("%f", &ra);
        result1 = ra - 491.67;
        result2 = result1 / 18;
        result = result2 * 8;
        printf("The Rankin(%fRa) to Reaumur temprature is: %fRe", ra, result);
        break;

    default:
        printf("The number you have entered has not vailid.\nPlease enter the number which is in the Rankin menu..");
        printf("\nFor yess 1 and no for anyother key:");
        scanf("%d",&chose3);
        if(chose3==1)
        {
            rankin();
        }
        break;
    }

    printf("\nAre you want to calculate more Temprature conversions?? Then enter 1 or anyother key: ");
    scanf("%d", &chose2);
    if (chose2 == 1)
    {
        menu();
    }
}

void reaumur()
{
    int chose, chose2,chose3;
    float result1 = 0, result2 = 0, result = 0, re = 0;
    printf("This is the Celsious module here we can calculate Celsious to other all onversions....");
    printf("\nChoose convertion of Celsious to others:\n1. Reaumur to Celsious\n2. Reaumur to Fahrenhit\n3. Reaumur to Kelvin\n4. Reaumur to Rankin\nEnter the your choise: ");
    scanf("%d", &chose);
    switch (chose)
    {
    case 1:
        printf("Enter the Reaumur scale temprature: ");
        scanf("%f", &re);
        result1 = re / 8;
        result = result1 * 10;
        printf("The Reaumur(%fRe) to Celsious temprature is: %fC", re, result);
        break;

    case 2:
        printf("Enter the Reaumur scale temprature: ");
        scanf("%f", &re);
        result1 = re / 8;
        result2 = result1 * 18;
        result = result2 + 32;
        printf("The Reaumur(%fRe) to Fahrenhit temprature is: %fF", re, result);
        break;

    case 3:
        printf("Enter the Reaumur scale temprature: ");
        scanf("%f", &re);
        result1 = re / 8;
        result2 = result1 * 10;
        result = result2 + 273.15;
        printf("The Reaumur(%fRe) to Kelvin temprature is: %fK", re, result);
        break;

    case 4:
        printf("Enter the Reaumur scale temprature: ");
        scanf("%f", &re);
        result1 = re / 8;
        result2 = result1 * 18;
        result = result2 + 491.67;
        printf("The Reaumur(%fRe) to Rankin temprature is: %fRa", re, result);
        break;

    default:
        printf("The number you have entered has not vailid.\nPlease enter the number which is in the Reaumur menu..");
        printf("\nFor yess 1 and no for anyother key:");
        scanf("%d",&chose3);
        if(chose3==1)
        {
            reaumur();
        }
        break;
    }

    printf("\nAre you want to calculate more Temprature conversions?? Then enter 1 or anyother key: ");
    scanf("%d", &chose2);
    if (chose2 == 1)
    {
        menu();
    }
}
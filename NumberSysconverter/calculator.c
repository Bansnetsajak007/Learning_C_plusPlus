/*
    I haven't created this
*/

//Calculator to convert number system
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> // Added for system() function


// Function prototypes
void BtoD();
void BtoO();
void BtoH();
void DtoB();
void DtoO();
void DtoH();
void OtoB();
void OtoD();
void OtoH();
void HtoB();
void HtoD();
void HtoO();
void options();

void clearConsole()
{
    // Clear console screen (system-specific commands)
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}
void options()
{
    int choice;
    char continueChoice;
	do
    {
        clearConsole(); // Clear the console before displaying the menu
        printf("\t\t**********NUMBERING SYSTEM CALCULATOR**********\n");
       
        printf("\n\nYour options are:\n\n");
        printf("1. Binary to Decimal\n");
        printf("2. Binary to Octal\n");
        printf("3. Binary to Hexadecimal\n");
        printf("4. Decimal to Binary\n");
        printf("5. Decimal to Octal\n");
        printf("6. Decimal to Hexadecimal\n");
        printf("7. Octal to Binary\n");
        printf("8. Octal to Decimal\n");
        printf("9. Octal to Hexadecimal\n");
        printf("10. Hexadecimal to Binary\n");
        printf("11. Hexadecimal to Decimal\n");
        printf("12. Hexadecimal to Octal\n");
        printf("13. Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nSelected choice: Binary to Decimal\n");
            BtoD();
            break;
        case 2:
            printf("\nSelected choice: Binary to Octal\n");
            BtoO();
            break;
        case 3:
            printf("\nSelected choice: Binary to Hexadecimal\n");
            BtoH();
            break;
        case 4:
            printf("\nSelected choice: Decimal to Binary\n");
            DtoB();
            break;
        case 5:
            printf("\nSelected choice: Decimal to Octal\n");
            DtoO();
            break;
        case 6:
            printf("\nSelected choice: Decimal to Hexadecimal\n");
            DtoH();
            break;
        case 7:
            printf("\nSelected choice: Octal to Binary\n");
            OtoB();
            break;
        case 8:
            printf("\nSelected choice: Octal to Decimal\n");
            OtoD();
            break;
        case 9:
            printf("\nSelected choice: Octal to Hexadecimal\n");
            OtoH();
            break;
        case 10:
            printf("\nSelected choice: Hexadecimal to Binary\n");
            HtoB();
            break;
        case 11:
            printf("\nSelected choice: Hexadecimal to Decimal\n");
            HtoD();
            break;
        case 12:
            printf("\nSelected choice: Hexadecimal to Octal\n");
            HtoO();
            break;
        case 13:
            printf("\n\t\t*************Exiting.....******************");
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }

        if (choice != 13) {
            
            printf("\n\nDo you want to continue? (Y/N): ");
            scanf(" %c", &continueChoice);
        }

    } 
	while (continueChoice == 'Y' || continueChoice == 'y');
	
	if(continueChoice =='N' || continueChoice == 'n')
	printf("\n\t\t**********Thank you for using the calculator!!!!****************\n");
}
void BtoD()
{
int binary, decimal = 0, base = 1, remainder;
    printf("\nEnter valid binary number: ");
    scanf("%d", &binary);
    
    while (binary > 0) {
         remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    printf("\nDecimal number is %d\n", decimal);
}

void BtoO()
{
    int binary, octal = 0, remainder, decimal = 0, base = 1;
    printf("\nEnter valid binary number: ");
    scanf("%d", &binary);

    // Check if the input is a valid binary number
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base = base * 2;
    }

    base = 1;
    while (decimal > 0)
    {
        remainder = decimal % 8;
        octal = octal + (remainder * base);
        decimal = decimal / 8;
        base = base * 10;
    }

    printf("\nOctal number is %d\n", octal);
}

void BtoH()
{
int decimal=0, remainder, i=0, j=0, temp, binary;
char hexa[100];
printf("\nEnter valid binary number: ");
scanf("%d", &binary);
// first convert to decimal and decimal to hexadecimal
temp=binary;
while (temp>0)
{
	remainder=temp % 10;
	decimal=decimal+remainder * pow(2,i);
	i++;
	temp=temp/10;
	
}
printf("\nDecimal value is %d\n", decimal);
i=0;
remainder=0; 
while (decimal > 0)
{
		remainder=decimal%16;
		if(remainder<10)
		{
			hexa[i++]=remainder+48;
		}
		else
		{
			hexa[i++]=remainder + 55;
	    }
		decimal=decimal/16;
}
printf("\nHexadecimal value: ");
for(j=i-1; j>=0; j--)
{
	printf("%c",hexa[j]);
}

}

void DtoB()
{
	int Decnum, rem, Binnum = 0, Base = 1;
	printf("\nEnter valid decimal number:");
	scanf("%d", &Decnum);
	while (Decnum > 0)
	{
		rem = Decnum % 2;
		Binnum = Binnum + (rem * Base);
		Decnum = Decnum / 2;
		Base = Base * 10;
	}
		printf("\nBinary value is %d\n",Binnum);

}
void DtoO()
{
     int decimalNumber, temp, i = 1, j;
    int octalNumber[100];
    printf("\nEnter the Decimal Number: ");
    scanf("%d", &decimalNumber);
    temp = decimalNumber;
    while (temp != 0) 
	{
        octalNumber[i++] = temp % 8;
        temp = temp / 8;
    }
    printf("\nDecimal value is %d: ", decimalNumber);
    for (j = i - 1; j > 0; j--) {
        printf("%d", octalNumber[j]);
    }
}


void DtoH()
{
    int decimal, remainder, i = 0;
    char hexadecimal[100];

    printf("\nEnter a valid decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i++] = 48 + remainder;
        } else {
            hexadecimal[i++] = 55 + remainder;
        }
        decimal = decimal / 16;
    }

    printf("Hexadecimal value is ");
    
    for (i = i - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    
    printf("\n");
}

void OtoB()
{
long binary = 0;
int octal, decimal = 0, remainder = 0, base = 0;

printf("\nEnter valid octal number: ");
scanf("%d", &octal);

while (octal != 0) {
    remainder = octal % 10;
    decimal += remainder * pow(8, base);
    octal /= 10;
    base++;
}

base = 1;
remainder = 0;

while (decimal) 
{
    remainder = decimal % 2;
    binary += remainder * base;
    decimal = decimal / 2;
    base = base * 10;
}

printf("\nBinary value is %ld\n", binary);
}
void OtoD()
{
	int octal, decimal=0, reminder=0, base=0;
	printf("\nEnter valid octal number: ");
	scanf("%d", &octal);
	while(octal > 0)
	{
		reminder = octal % 10;
		decimal = decimal + reminder * pow(8 , base);
		octal = octal / 10;
		base++;
	}
	printf("\nDecimal value is %d\n", decimal);
}

void OtoH()
{

    int octal;

    printf("\nEnter valid octal number: ");
    scanf("%o", &octal);

    printf("Hexadecimal value is %X\n", octal);
}

void HtoB()
{
	char hexa[1000];
	char binary[1000];
	int base = 0;
	printf("\nEnter valid hexadecimal number: ");
	scanf("%s", hexa);
	while(hexa[base])
	{
		switch(hexa[base])
		{
			case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'A':
            case 'a':
                printf("1010");
                break;
            case 'B':
            case 'b':
                printf("1011");
                break;
            case 'C':
            case 'c':
                printf("1100");
                break;
            case 'D':
            case 'd':
                printf("1101");
                break;
            case 'E':
            case 'e':
                printf("1110");
                break;
            case 'F':
            case 'f':
                printf("1111");
                break;
            default:
                printf("\nInvalid hexadecimal value");
			}
			base++;
	    }
}
 
void HtoD()
{
	char hex[100];
	int decimal = 0, base = 1, len, i;
	printf("\nEnter valid hexadecimal number: ");
	scanf("%s", hex);
	len=strlen(hex);
	for(i=len-1; i>=0; i--)
	{
		if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
	printf("\nDecimal value is: %d\n", decimal);
}

void HtoO()
{
	 int hexa;
    printf("\nEnter valid hexadecimal number: ");
    scanf("%x",&hexa);
    printf("\nOctal equivalent of number is %o\n", hexa);
}
int main()
{
    options();
    return 0;
}
/* An Part company has serial number for engine parts starting from AA0 to FF9.
The other characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity manufactured.
(a) Specify a structure to store information corresponding to a part.
(b) Write a program to retrieve information on parts with serial numbers between BB1 and CC6. */
#include <stdio.h>
#include <string.h>

typedef struct
{
    char serial_number[4];
    int year;
    char material[20];
    int quantity;
}Part;

void get_details(Part *a)
{
    printf("\nEnter the details of the Automobile part");
    printf("\nEnter the serial number : ");
    getchar();
    fgets(a->serial_number, sizeof(a->serial_number), stdin);
    a->serial_number[strcspn(a->serial_number, "\n")] = '\0';
    printf("Enter the year of manufacturing : ");
    scanf("%d", &a->year);
    printf("Enter type of material used : ");
    getchar();
    fgets(a->material, sizeof(a->material), stdin);
    a->material[strcspn(a->material, "\n")] = '\0';
    printf("Enter the quantity : ");
    scanf("%d", &a->quantity);
}

void display(Part arr[], int n)
{
    int found = 0;
    for(int i = 0; i < n; i++)
        if(strcmp(arr[i].serial_number, "BB1") > 0 && strcmp(arr[i].serial_number, "CC6") < 0)
        {    
            printf("\nSerial number : %s\tYear of Manufacturing : %d\tMaterial : %s\tQuantity : %d", arr[i].serial_number, arr[i].year, arr[i].material, arr[i].quantity);
            found = 1;
        }
    if(!found)
        printf("Materials not found");
}

int main()
{
    Part a[60];
    int n;
    printf("Enter the number of Parts : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        get_details(&a[i]);
    display(a, n);
    return 0;
}
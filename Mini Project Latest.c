#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int price; int rooms;
int noOfRms; int noOfDays;

int main()
{
printf("WELCOME TO HOTEL FELIX FELICIS\n");
printf("One of the best hotels located in the heart of the city. The hotel is well equipped with all the general amenities and has well furnished rooms. The amenities include free internet, 24 hour room service, laundry service and complimentary breakfast");
char name[25]; int checkin, checkout;
printf("\nEnter your name:\t");
scanf("%s", name);
printf("Enter Check-in and Check-out date:\n");
printf("Enter Check-in date of the form(ddmmyy):\n");
scanf("%d",&checkin);
printf("Enter Check-out date of the form(ddmmyy):\n");
scanf("%d",&checkout);

if(noOfDays>3)
printf("No rooms available");
else
printf("Rooms available");
int r; //int price;
printf("Types of Rooms\n");
printf("\n1.Executive room\n2.Family room\n3.Suite room\n4.Pool suite room\n");
scanf("%d",&r);
switch(r)
{
case 1:
printf("\nYou choose Executive room\n");
printf( "Executive rooms are one night-stop rooms that encompasses all modern amenities and includes one queen sized bed");
price=3000;
break;
case 2:
printf("\nYou choose Family room\n");
printf("Family rooms can accommodate 4 people and twin beads will be provided");
price=5000;
break;

case 3:
printf("\nYou choose Suite room\n");
printf("Suite rooms are luxurious and a great pick to enjoy your vacation! It consists of 3 rooms and can occupy upto 6 people");
price=7000;
break;

case 4:
printf("\nYou choose Pool Suite room\n");
printf("Pool suite rooms are built exclusively for customers who would love their own private space with all the recreational facilities. It includes a private pool and 4 rooms");
price=10000;
break;
}
Default:
{
    printf("Those are the only 4 rooms we have. Please select from those.");
}
printf("\nHow many rooms do you want?\n");
scanf("%d",&noOfRms);
printf("\nHow many days?\n");
scanf("%d",&noOfDays);
struct customer {
    char firstName[50];
    int rooms;
int totalpeople;
   int adults;
  int children;
   } s[noOfRms];

//int main()
//{
int i;
        printf("Enter information of Customer:\n");
    // storing information
    //int i;
    for (i = 0; i < noOfRms; ++i) {
        s[i].rooms= i + 1;
        printf("\nFor room number %d,\n", s[i].rooms);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
printf("Enter Total number of people: ");
        scanf("%d", &s[i].totalpeople);
        printf("Enter number of adults: ");
        scanf("%d", &s[i].adults);
      printf("Enter number of children: ");
        scanf("%d", &s[i].children);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < noOfRms; ++i) {
        printf("\nRoom number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
printf("Total number of people in the room: %d\n", s[i].totalpeople);
        printf("Number of adults: %d\n", s[i].adults);
  printf("Number of children: %d", s[i].children);
        printf("\n");
    }
//}
int billamt= price*noOfRms*noOfDays;

{
printf("\t\t--------------------------------------------------------------------------------\t\n");
    printf("\t\t|\tBilling Date: ");
    printf("\t\t\t\t\t\tCheck-In Time: 9:30 a.m\n");
    printf("\t\t\t\t\t\t\t\t\t\tCheck-Out Time: 11 a.m");
    printf("\n\n|\t\t\t\t*****************\n");
	printf("\t\t|\t\t*****************\n");
	printf("\t\t|\t\t**                                             **\n");
	printf("\t\t|\t\t**          WELCOME TO FELIX FELICIS           **\n");
	printf("\t\t|\t\t**                                             **\n");
	printf("\t\t|\t\t*****************\n");
	printf("\t\t|\t\t*****************\n");
    printf("\t\t|\t\t\n");
    printf("\t\t|\tName of the customer:%s\n",name);
    printf("\t\t|\tDate of Arrival:%d ",checkin);
    printf("\t\t|\tDate of Departure:%d\n",checkout);
    printf("\t\t|\tDuration Of Stay:%d\n",noOfDays);
    printf("\t\t|\tRoom No.(s):%d\n",noOfRms);


	printf("\t\t|\tTotal amount :%d\n",billamt);
	printf("\t\t|\t\t\t\tWe Look Forward To Seeing You");

}
return 0;
}

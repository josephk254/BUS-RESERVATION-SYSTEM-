#include <stdio.h>
#include <stdlib.h>
#define ROW_SIZE 8
#define COL_SIZE 4

char seat_arrangement[ROW_SIZE][ROW_SIZE] = {
    {'E','E','E','E'},
    {'E','E','E','E'},
    {'E','E','E','E'},
    {'E','E','E','E'},
 	{'E','E','E','E'},
    {'E','E','E','E'},
    {'E','E','E','E'},
    {'E','E','E','E'}
      
};

void display_seat_arrangement() {
    int i, j;
    printf("Seat Arrangement:\n\n");
    for (i = 0;i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
     if (seat_arrangement[i][j] == 'E') {
                printf("Empty ");
            } else if (seat_arrangement[i][j] == 'B') {
                printf("Booked ");
            }
        }
        printf("\n");
    }
}

void book_seat() {
    int row, col;
    printf("Enter the row number you want to book: ");
    scanf("%d", &row);
    printf("Enter the column number you want to book: ");
    scanf("%d", &col);

    if (row < 1 || row > ROW_SIZE || col < 1 || col > ROW_SIZE) {
        printf("Invalid seat number. Please enter a number between 1 and %d.\n", ROW_SIZE);
    } else if (seat_arrangement[row - 1][col - 1] == 'B') {
        printf("Seat (%d, %d) is already booked.\n", row, col);
    } else {
        seat_arrangement[row - 1][col - 1] = 'B';
        printf("Seat (%d, %d) booked successfully.\n", row, col);
    }
}

   void seatnumber(){
    	FILE *fptr;
		  fptr = fopen("history.txt" , "w");
    int row, col;
   if (row < 1 || row > ROW_SIZE || col < 1 || col > ROW_SIZE) {
       printf("Invalid seat number. Please enter a number between 1 and %d.\n", ROW_SIZE);
    } else if(seat_arrangement[row - 1][col - 1] == 'B') {
        printf("Seat (%d, %d) is already booked.\n", row, col);
    } else {
        seat_arrangement[row - 1][col - 1] = 'B';
    }
if(row == 1 && col == 1){
	printf("seat number:1");
    fprintf(fptr,"seat number:1");
}
else;
if(row == 1 && col == 2){
    fprintf(fptr,"seat number:2");
	}
else;
if(row == 1 && col == 3){
    fprintf(fptr,"seat number:3");
}
else;
if(row == 1 && col == 4){
    fprintf(fptr,"seat number:4");
}
else;
if(row == 2 && col == 1){
    fprintf(fptr,"seat number:5");
}
else;
if(row == 2 && col == 2){
    fprintf(fptr,"seat number:6");
}
else;
if(row == 2 && col == 3){
    fprintf(fptr,"seat number:7");
}
else;
if(row == 2 && col == 4){
    fprintf(fptr,"seat number:8");
}
else;
if(row == 3 && col == 1){
    fprintf(fptr,"seat number:9");
}
else;
if(row == 3 && col == 2){
    fprintf(fptr,"seat number:10");
}
if(row == 3 && col == 3){
    fprintf(fptr,"seat number:11");
}
else;
if(row == 3 && col == 4){
    fprintf(fptr,"seat number:12");
}
else;
if(row == 4 && col == 1){
    fprintf(fptr,"seat number:13");
}
else;
if(row == 4 && col == 2){
    printf(fptr,"seat number:14");
}
else;
if(row == 4 && col == 3){
    fprintf(fptr,"seat number:15");
}
else;
if(row == 4 && col == 4){
    fprintf(fptr,"seat number:16");
}

}


void checkbalance(float balance){
	 printf("Your balance is %.2f\n\n" , balance);
 }
 void deposit(float *balance){
	int amount;
	printf("Enter amount to deposit:");
	scanf("%d", &amount);
	*balance += amount;
	printf("You have deposited Ksh. %d your new balance is Ksh. %.2f\n" , amount , *balance);

}


void all(){
	float balance = 10000;
	int prefer, transaction;
do{
	printf("\n\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("\n\t\t\t\t\tACCOUNT STATUS\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
	printf("\t\t\t1.Check balance.\n");
	printf("\t\t\t2.Deposit.");
	printf("\n\n\t\tEnter your choice:");
	scanf("%d", &prefer);
	switch(prefer){
		case 1:
			checkbalance(balance);
			break;
		case 2:
			deposit(&balance);
			break;
	}
	printf("Do you wish to perform another transaction? press 1[Yes] 0[No]");
	scanf("%d", &transaction);
}while(transaction != 0);
}
void charges(){
	
}

void myfunction(){
		  int i, NOT, SN, count = 1;
		  char name[15], origin[25], destination[25];
		  FILE *fptr;
		  fptr = fopen("history.txt" , "w");
		  printf("\nEnter number of seats you want to book:");
		  scanf("%d",&NOT);
		  fprintf(fptr, "Number of seats you booked:%d", NOT);
for (i=1; i<=NOT; i++){
        printf("\n===============Enter details for ticket number %d.==============\n\n",i+0);
		  printf("Enter name:");
		  scanf("%s",name);
		  fprintf(fptr, "\nName:%s", name);
do{
book_seat();
display_seat_arrangement();
}while (count > 5);
   seatnumber();
          printf("Enter origin:");
          scanf("%s", origin);
          fprintf(fptr, "\nOrigin:%s", origin);
           printf("Enter destination:");
          scanf("%s", destination);
          fprintf(fptr, "\nDestination:%s\n\nYour total fare is 3000", destination);
          printf("\nYour fare is Ksh 3000\n");
          
          
}
         
}

void mainmenu(){
	
	printf("\n\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\t\t\t\t\tBUS RESERVATION SYSTEM\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\n\t\t\t\tMAIN MENU.\n");
	printf("\n\t\t\t1.View buses available.\n");
    printf("\t\t\t2.View seat arrangement and available seats for each bus.\n");
    printf("\t\t\t3.Book a ticket.\n");
    printf("\t\t\t4.Account\n");
    printf("\t\t\t5.view booking history.\n");
    printf("\t\t\t6.Quit.\n");

}
   

int main(){
	
	char uname[15], ch;
	int pwd, i;
	printf("Enter username:");
	scanf("%s",uname);
	printf("Enter password:");
	scanf("%d",&pwd);
	
	switch (pwd)
{
	case 1616:
		printf("login successful\n\n");
getch();
system("cls");
break;

default:
	printf("wrong password");
getch();
}

if(pwd == 1616){
	mainmenu();


	int choice;
	 printf("Enter your choice:");
    scanf("%d", &choice);
    system("cls");
if( choice==1 ){
	printf("\n\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\t\t\t\t\tBUS RESERVATION SYSTEM\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
FILE* fptr;
    	fptr = fopen("Buses.txt","r");
    	
    	char content[1000];
    	
    	if(fptr != NULL) {
			while (fgets(content, 1000, fptr)){
				printf("%s", content);
			}
			}	
			   	getch();
}

else if(choice == 2){
	printf("\n\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\t\t\t\t\tBUS RESERVATION SYSTEM\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
FILE* fptr;
    	fptr = fopen("Buses.txt","r");
    	
    	char content[1000];
    	
    	if(fptr != NULL) {
			while (fgets(content, 1000, fptr)){
				printf("%s", content);
			}
			}
            int option;
			int bus_seats[10][4] = {0};
      	printf("\n\t\t\t\t\tPick your favorite bus:");
      	scanf("%d", &option,"\n\n");
      	system ("cls");
if (option == 1){
   	  display_seat_arrangement();
		  }
		  
 if (option == 2){
   	  display_seat_arrangement();
		  }
		  
		  if (option == 3){
   	  display_seat_arrangement();;
		  }
		  
		  if (option == 4){
   	 display_seat_arrangement();
		  }
		  
		  if (option == 5){
   	  display_seat_arrangement();
		  }

}
else if(choice == 3){
	printf("\n\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\t\t\t\t\tBUS RESERVATION SYSTEM\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	FILE* fptr;

    	fptr = fopen("Buses.txt","r");
    	
    	char content[1000];
    	
    	if(fptr != NULL) {
			while (fgets(content, 1000, fptr)){
				printf("%s", content);
			}
			}

			int option;
			int bus_seats[10][4] = {0};
      	printf("\n\t\t\t\t\tPick your favorite bus:");
      	scanf("%d", &option,"\n\n");
      	system("cls");
      	if(option==1){
   	 display_seat_arrangement();
   	  
		  }
		  
		  if(option==2){
      display_seat_arrangement();
		  }
		  
		  
		  
		  if(option==3){
      		display_seat_arrangement();
		  }
		  
		  
		  
		  if(option==4){
      		display_seat_arrangement();
		  }
		  
		  
		  if(option==5){
		  display_seat_arrangement();
		  }
		  
		  myfunction();{
		  }
  
}
  
  else if(choice == 4)
  {
  	all();
  }
  
else if(choice == 5){
	printf("\n\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\t\t\t\t\tBUS RESERVATION SYSTEM\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	FILE* fptr;

    	fptr = fopen("history.txt","r");
    	
    	char content[1000];
    	
			  if(fptr != NULL) {
				  while(fgets(content, 1000, fptr)){
					  printf("%s", content);
				  }
			  } 
}

else if (choice == 6){
	printf("\n\n\n\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("\t\t\t\t\tBUS RESERVATION SYSTEM\n");
	printf("\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	char text[5], yes, no;
	printf("Are you you want to quit?....YES/NO\n");
	scanf("%s", text);
	if ((strcmp(text, "yes\n") == 0) );
}
}

return 0;
}
# BUS-RESERVATION-SYSTEM-
Welcome to bus reservation system. This program is written in c language and designed to meet various user needs. The system allows the user to perform various tasks as shown below:
## Features 
### 1.View buses available
- In this part, I created a file named "Buses.txt" in which i stored the bus list.
- "FILE* fptr;"---Declares a pointer to a file
- "fptr = fopen("Buses.txt","r");"---opens the file named "Buses.txt" in read mode(r)
- [Buses.txt](https://github.com/josephk254/BUS-RESERVATION-SYSTEM-/files/13452766/Buses.txt)
- "char content[1000];"---An array named content which has a size of 1000 characters which will be used to store the content read from the file.
- "if(fptr != NULL)"---This condition checks if the file pointer "fptr" is not NULL. If it's not NULL, the code inside the if block will execute.
- Inside the if block, "while (fgets(content, 1000, fptr))"--- reads the content of the file line by line. And the content of the opened file is printed using "printf("%s", content);"

   ### 2.View seat arrangement in each bus
  - "#define ROW_SIZE 8" and "#define COL_SIZE 4" ---These are directives that define constants ROW_SIZE as 8 and COL_SIZE as 4. These constants represent the number of rows and columns in the seat_arrangement array.
  - "char seat_arrangement[ROW_SIZE][ROW_SIZE]"--- This line declares a two-dimensional character array named seat_arrangement with dimensions specified by ROW_SIZE and ROW_SIZE
  - Here I created a function named "display_seat_arrangement" which s responsible for displaying the current seat arrangement status.
  - Inside the display_seat_arrangement function "printf("Seat Arrangement:\n\n");"--- prints the Seat Arrangement.
  - Inside the for loop, it uses nested for loops to iterate through each element of the seat_arrangement array. where if the seat is marked as 'E', it prints "Empty " and if the seat is marked as 'B', it prints "Booked ".
   ### 3.Book a ticket on your bus of choice
  
   ### 4.Check balance and deposit cash to yor account
  - Here i created a functions named : check balance, deposit and all.
  - The all function serves as a main function that allows a user to check their account balance and make deposits.
  - 
               a)Check balance
  - This function takes a float parameter balance representing the current account balance.
  - It prints the account balance with two decimal places.
  - 
                b)Deposit.
  - This function takes a pointer to a float (float *balance) representing the account balance.
  - It prompts the user to enter an amount to deposit using printf and scanf.
  - "*balance += amount;"--- Enables the entered amount to be added to the current balance through pointer manipulation updating the account balance accordingly.
  - "printf("You have deposited Ksh. %d your new balance is Ksh. %.2f\n" , amount , *balance);" --- prints a message confirming the deposit amount and the new balance using.

                c)all
  - "float balance = 10000;"--- It initializes the balance variable with a starting value of 10000.
  - It uses a do-while loop to present a menu of options to the user until the user chooses to exit (transaction != 0).
  - Inside the loop, it displays a menu with two options:
                 Option 1: Check balance
                  Option 2: Deposit
    - "scanf("%d", &prefer);"--- allows the user to enter the type of transactions they would like to perform.
    - "switch"---This statement allows to perform actions based on the user's choice:
    - If the user chooses 1, it calls the checkbalance function, passing the current balance.
    - If the user chooses 2, it calls the deposit function, passing the address of the balance variable.
    - After performing the selected transaction, it asks the user if they want to perform another transaction (1 for yes, 0 for no) and updates the transaction variable accordingly.
    - The loop continues until the user chooses to exit (enters 0 for no transactions).
   ### 5.View booking history
  - In this part, I created a file named "history.txt" in which user booking will be stored.
- "FILE* fptr;"---Declares a pointer to a file
- "fptr = fopen("history.txt","r");"---opens the file named "Buses.txt" in read mode(r)
- "char content[1000];"---An array named content which has a size of 1000 characters which will be used to store the content read from the file.
- "if(fptr != NULL)"---This condition checks if the file pointer "fptr" is not NULL. If it's not NULL, the code inside the if block will execute.
- Inside the if block, "while (fgets(content, 1000, fptr))"--- reads the content of the file line by line. And the content of the opened file is printed using "printf("%s", content);"

   ### 6.Quit
- "char text[5], yes, no;"---This line declares three variables: text, yes, and no. text is an array of characters capable of holding 5 characters
- "printf("Are you you want to quit?....YES/NO\n");"---his line prints a message to the console, asking the user if they want to quit.
- "scanf("%s", text);"---Prompts the user to enter either "YES" or "NO" as an answer.

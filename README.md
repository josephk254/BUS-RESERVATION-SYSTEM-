# BUS-RESERVATION-SYSTEM-
Welcome to bus reservation system. This program is written in c language and designed to meet various user needs. The system allows the user to perform various tasks as shown below:
## Features 
### 1.View buses available
- In this part, I created a file named "Buses.txt" in which i stored the bus list.
- "FILE* fptr;"---Declares a pointer to a file
- "fptr = fopen("Buses.txt","r");"---opens the file named "Buses.txt" in read mode(r)
- "char content[1000];"---An array named content which has a size of 1000 characters which will be used to store the content read from the file.
- "if(fptr != NULL)"---This condition checks if the file pointer "fptr" is not NULL. If it's not NULL, the code inside the if block will execute.
- Inside the if block, "while (fgets(content, 1000, fptr))"--- reads the content of the file line by line. And the content of the opened file is printed using "printf("%s", content);"

   ### 2.View seat arrangement in each bus
  
   ### 3.Book a ticket on your bus of choice
   ### 4.Check balance and deposit cash to yor account
  - Here i created a functions named : check balance,deposit and all.
               a)Check balance
    
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

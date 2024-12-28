#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
// FUNCTION OF DOREMON.
void Doraemon() {
    printf("       /\\_/\\  \n");
    printf("      ( o.o ) \n");
    printf("       > ^ <  \n");
    printf("      /  |  \\ \n");
    printf("      |__|__| \n");
    printf("      (__|__)  \n");

}
// FUNCTION OF AXE WHICH IS 1ST GADGET.
void axe(){
    printf("\t\t\t\t\t\t\t\t                 /\\   \n");
    printf("\t\t\t\t\t\t\t\t                /..\\  \n");
    printf("\t\t\t\t\t\t\t\t               /....\\ \n");
    printf("\t\t\t\t\t\t\t\t==============|------|\n");
    printf("\t\t\t\t\t\t\t\t               \\..../ \n");
    printf("\t\t\t\t\t\t\t\t                \\../  \n");
    printf("\t\t\t\t\t\t\t\t                 \\/   \n");
}
// FUNCTION OF RIVER WHICH IS 2ND HURDLE.

void water() {
	printf("============================================================================================================================================================\n");
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~RIVER~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
	printf("~`~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
	printf("============================================================================================================================================================\n");
}
// FUNCTION OF SHIP WHICH IS 2ND GADGET.

void ship(){
	printf("\t\t\t========================================================================================\n");
	printf("\t\t\t\\- - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - /\n");
	printf("\t\t\t \\ - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -/\n");
	printf("\t\t\t  \\- - - - - - - - - - - - - - - - - - - -SHIP- - - - - - - - - - - - - - - - - - - /\n");
	printf("\t\t\t   \\ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - /\n");
	printf("\t\t\t    \\- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -/\n");
	printf("\t\t\t     \\ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - /\n");
	printf("\t\t\t      \\=========================================================================/\n");
	printf("\t\t\t       \\=======================================================================/\n");
}
//FUNCTION OF DINOSAUR WHICH IS 3RD HURDLE.

void dinosaur(){
	printf("\t\t\t                 ___\n");
    printf("\t\t\t                /oo_)\n");
    printf("\t\t\t               /  /  \n");
    printf("\t\t\t              /  /  \n");
    printf("\t\t\t     _.----._/  /\n");
    printf("\t\t\t    /          /\n");
    printf("\t\t\t __/ (  |   (  |\n");
    printf("\t\t\t/__.-'|_|---|__|\n");
}
// FUNCTION OF 3rd GADGET.

void torch(){
	printf("\t\t\t\t\t\t\t\t _______\n");
	printf("\t\t\t\t\t\t\t\t|:::::::\\''''''''''\n");
	printf("\t\t\t\t\t\t\t\t|:::::::|>''''''''''\n");
	printf("\t\t\t\t\t\t\t\t|_______/''''''''''\n");
}
// FUNCTION OF NOBITA.

void NOBITA() {
    printf("      O\n");
    printf("     /|\\ \n");
    printf("     / \\ \n");
}
//FUNCTION OF LEVEL 1.

int level1() {
    srand(time(NULL));

    int guess, secnum, atmpts;
    sleep(3);
    printf("\n\n\t\t\t\t\t\t\t\t\tNOBITA!\n \t\t\t\t\t\t\t\tHERE COMES THE LEVEL 1\n \nTry your best to guess the secret number.\n\nYou have 5 chances to win this level in an attempt.\n\t     Best of luck Nobita\n");
    sleep(6);
    printf("\n\n\t    Get ready in! 3! 2! 1!\n");
    sleep(3);
    do {
        secnum = rand() % 100 + 1;
        atmpts = 0;
        do {
            printf("\nNOBITA! Enter the number you are guessing:");
            scanf("%d", &guess);
            atmpts++;

            if (guess < secnum) {
                printf("Uh.. Huh.. this number is TOO LOW\n");
            } else if (guess > secnum) {
                printf("Umm.. No.. this number is TOO HIGH\n");
            } else {
                printf("\nHurray Nobita!!You have got the secret number in %d attempts\n", atmpts);
                return 0;  // Exit the function if Nobita guesses the number
            }

        } while (atmpts < 5);  // Exit the inner loop after 5 attempts

        printf("\nOh no Nobita, you've reached the maximum number of attempts. The secret number was %d\n TRY AGAIN (T-T)\n", secnum);
        sleep(3);

    } while (1);  // Infinite outer loop for playing again

    return 0;
}

// FUNCTION OF 2ND LEVEL.

int Anagrams(char[], char[]);
void level2() {
	while(1){
    char str1[50], str2[50];
    printf("\n\nNOBITA! The first word is: ");
    scanf("%s", str1);
    
    printf("\nNOBITA! The second word is: ");
    scanf("%s", str2);

    int check = Anagrams(str1, str2);

    if (check == 1){
        printf("\nYesss NOBITA! \"%s\" and \"%s\" are Anagrams.\n", str1, str2);
        break;
    }
    else
        printf("\nUh huh... NOBITA! \"%s\" and \"%s\" are not Anagrams.\n\tTRY AGAIN! YOU CAN DO THIS\n", str1, str2);
}
}
int Anagrams(char s1[], char s2[]) {
	
    int first_str[256] = {0};
    int second_str[256] = {0};
    int i = 0;
    
    while (s1[i] != '\0') {
        first_str[(unsigned char)s1[i]]++;
        i++;
    }
    i = 0;
    
    while (s2[i] != '\0') {
        second_str[(unsigned char)s2[i]]++;
        i++;
    }
    for (i = 0; i < 256; i++) {
        if (first_str[i] != second_str[i])
            return 0;
    }
    return 1;
}

    // BASE FUNCTION OF LEVEL 3
	// Function to generate a random choice for the dinosaur.
	
char getDinosaurChoice() {
    char choices[] = {'R', 'P', 'S'};
    int index = rand() % (sizeof(choices) / sizeof(choices[0]));
    return choices[index];
}
// Function to determine the winner of the game
int determineWinner(char Nobita, char Dinosaur) {
    if (Nobita == Dinosaur) {
        return 0; // It's a tie
    } else if ((Nobita == 'R' && Dinosaur == 'S') || 
               (Nobita == 'P' && Dinosaur == 'R') || 
               (Nobita == 'S' && Dinosaur == 'P')) {
        return 1; // NOBITA wins
    } else {
        return -1; // Dinosaur wins
    }
}
// FUNCTION OF LEVEL 3
    level3(){
    srand(time(NULL));

    while (1) {
        char NobitaChoice;
        printf("\nNOBITA! your choice:\nPress 'R' for rock.\nPress 'P' for paper.\nPress 'S' for scissors.\n");
        scanf(" %c", &NobitaChoice);

        if (NobitaChoice == 'Q' || NobitaChoice == 'q') {
            printf("Thanks for playing! Goodbye.\n");
            break;
        }

        if (NobitaChoice != 'R' && NobitaChoice != 'P' && NobitaChoice != 'S') {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        char DinosaurChoice = getDinosaurChoice();

        printf("\nDinosaur's choice: %c\n", DinosaurChoice);

        int result = determineWinner(NobitaChoice, DinosaurChoice);

        if (result == 0) {
            printf("\nNoooo! It's a tie!\n");
        } else if (result == 1) {
            printf("\nYayyyyy NOBITA! You did it!\n");
            break; // Terminate the loop if NOBITA wins
        } else {
            printf("HAHAHA! I WON! (Dinosaur wins)\n");
            printf("\nTRY AGAIN!");
            sleep(4);
        }
    }
}
// FUNTION FOR BELL
void bell(){
	printf("\n\a\a tringgg!");
    sleep(3);
	printf("\n\t\a\a tringgg!!");
	sleep(3);
	printf("\n\t\t\a\a tringgg!!!\n");
	sleep(3);
}

int main() {
    printf("\t\t\t\t\t\t\t\t  NOBITA'S WILD ADVENTURE\n");
    printf("\t\t\t\t\t\t\t\t  -----------------------");
	printf("\n\n");
    sleep(3);
    printf("\n\t\t\t\t\t\t\t O \t\t\t         /\\_/\\  \n");
    printf("\t\t\t\t\t\t\t/|\\ ---->NOBITA\t\t\t( o.o ) ---->DORAEMON\n");
    printf("\t\t\t\t\t\t\t/ \\           \t\t\t > ^ <  \n");
    printf("\t\t\t\t                \t\t\t\t\t/  |  \\ \n");
    printf("\t\t\t\t                \t\t\t\t\t|__|__| \n");
    printf("\t\t\t\t                \t\t\t\t\t(__|__)  \n");
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    sleep(3);

    system("pause"); 
    system("cls");  

    printf("\t\t\t\t\t\t\t\t      WELCOME NOBITA!\n");
	printf("\t\t\t\t\t\t\t\t      ~~~~~~~~~~~~~~~\n");
    sleep(3);
    printf("\t\t\t\t\t\t\t   OH NO! NOBITA GOT LOST IN JUNGLE (T-T)");
	printf("\n\t\t\t\t\t\t\t   --------------------------------------\n");
    sleep(3);
    printf("\t\t\t\t\t\t\t GET READY FOR AN EXCITING JUNGLE ADVENTURE\n");
	printf("\t\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n");
	sleep(3);
    printf("\t\t\t\t\t\t\t\tHELP HIM FIND HIS WAY HOME\n");
	printf("\t\t\t\t\t\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
    sleep(3);
    printf("\t\t\t\t\t\t\t\t  LETS BEGIN THE JOURNEY\n\t\t\t\t\t\t\t\t  ~`~`~`~`~`~`~`~`~`~`~`\n\t\t\t\t\t\t\t\t\tGOODLUCK!\n");
    sleep(3);
    
    system("pause"); 
    system("cls");  

    printf("\n\n");
    NOBITA();
    printf("\nWHAT IS THIS???");
    sleep(2);
    printf("\n\n    A Note?");
    sleep(2);
    printf("\n ______________");
	printf("\n|     NOTE     |");
	printf("\n|______________|\n");
    sleep(3);
    printf("\nLets read this...");
    sleep(1);
    printf("\n ___________________________________________________________________________________________________________________________");
    printf("\n| Sup, Nobita! Time to roll back home, but guess what? Three epic levels are throwing some serious shade on your path.      |");
    printf("\n|Show 'em who's boss, crack those levels, and home sweet home will be waiting for you like a boss waiting for a high-five!  |");
    printf("\n|___________________________________________________________________________________________________________________________|");
    sleep(10);
    
    system("pause"); 
    system("cls");  

    printf("\n\n\n\t\t\t\t\t\t\t\t  *****LEVEL 1*****");
	printf("\n\t\t\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~\n\n");
	sleep(2);
    NOBITA();
    printf("\t\t\tOh yes! I remember the map of my house was in my BACKPACK but where is my BACKPACK??\n");
    sleep(3);
    printf("\n\n");
    NOBITA();
    printf("\t\t\tbackpack..\n\n");
    sleep(3);
    printf("\t\t\tbackpack...\n\n");
    sleep(3);
    printf("\t\t\tWhere are you.. My Backpack?\n\n");
    sleep(3);
    printf("\t\t\t\t\t\t\t\t          //\\\\     \n");
    printf("\t\t\t\t\t\t\t\t         //  \\\\     \n");
    printf("\t\t\t\t\t\t\t\t        //    \\\\    \n");
    printf("\t\t\t\t\t\t\t\t       //______\\\\   \n");
    printf("\t\t\t\t\t\t\t\t       |        |  \n");
    printf("\t\t\t\t\t\t\t\t       |        |  \n");
    printf("\t\t\t\t\t\t\t\t       |  TREE  |  \n");
    printf("\t\t\t\t\t\t\t\t       |        |  \n");
    printf("\t\t\t\t\t\t\t\t       |________|  \n");
    printf("\t\t\t\t\t\t\t\t           |||      \n");
    printf("\t\t\t\t\t\t\t\t           |||      \n");
    printf("\t\t\t\t\t\t\t\t        ___|||___  \n");
    printf("\t\t\t\t\t\t\t\t       |   |||   |  \n");
    printf("\t\t\t\t\t\t\t\t       | BACKPACK|  \n");
    printf("\t\t\t\t\t\t\t\t       |   |||   |  \n");
    printf("\t\t\t\t\t\t\t\t       |   |||   |  \n");
    printf("\t\t\t\t\t\t\t\t       |_|||_|||_|  \n");
    sleep(2);
    printf("\n\n");
    NOBITA();
    printf("\n\t\t\tWHAT!!! A TREE FELL ON MY BACKPACK! \n\t\t\tWHAT SHOULD I DO NOW?\n");
    sleep(4);
    bell();
    NOBITA();
    printf("\n\a\a\t\t\tWait! Where is that sound coming from??\n\n");
    sleep(4);
    printf("\a\a\t\t\tNOBITA! You have to win this level in order to call DORAEMON so that he can help you.\n\n");
    sleep(4);
    NOBITA();
    printf("\n\a\t\t\tBut what should I do??\n");
    sleep(4);
    printf("\n\a\a\t\t\tYou have to guess the secret number so that you can call DORAEMON.\n");
    sleep(4);
    NOBITA();
    printf("\n\t\t\tI'll try my best!!\n\n");
    printf("~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    
    system("pause"); 
    system("cls");  

    level1();
    sleep(2);
    printf("\n\n");
	NOBITA();
    printf("\t\t\t\a\aDORAEMON!");
    sleep(3);
    printf("\n\n");
    NOBITA();
    printf("\t\t\t\a\aDORAEMON!!!");
    printf("\n\n");
    sleep(4);
    printf("\n\n");
    Doraemon();
    printf("\t\t\t\a\aNOBITA! I AM HERE.\n");
    sleep(3);
    printf("\n\n");
	NOBITA();
    printf("\t\t\tDORAEMON! My BACKPACK!.\n\t\t\tMy BACKPACK is beneath the tree. Help me!\n");
    sleep(4);
    printf("\n\n");
    Doraemon();
    printf("\t\t\tDon't worry NOBITA!. Here, take this MAGICAL AXE and get your BACKPACK back.\n\n");
    sleep(3);
    axe();
    sleep(3);
    printf("\n\n");
    NOBITA();
    printf("\t\t\tYAYYY!!! I got my BACKPACK and PASSED THE LEVEL 1\n");
    sleep(5);
    
    system("pause"); 
    system("cls");  

    printf("\n\n\n\t\t\t\t\t\t\t\t  *****LEVEL 2*****");
	printf("\n\t\t\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~\n\n");
	sleep(2);
	printf("\n\n");
    water();
    sleep(2);
    printf("\n\n");
    NOBITA();
    printf("\t\t\t\a\aOh no! A RIVER!! There is no bridge to cross it (T-T)\n\t\t\t How am I suppose to cross this river?\n\n");
    sleep(4);
    bell();
    printf("\n\n");
    NOBITA();
    printf("\a\a\t\t\tWait! This is the same sound that was coming in level 1!!\n\n");
    sleep(4);
    printf("\a\a\t\t\tWELL DONE NOBITA! You won LEVEL 1.\n\t\t\tNow you have to win LEVEL 2 in order to call DORAEMON so that he can help you.\n\n");
    sleep(4);
    printf("\n\n");
    NOBITA();
    printf("\a\t\t\tBut what should I do??\n");
    sleep(3);
    printf("\n\a\a\t\t\tYou have to put two words that are ANAGRAMS.\n\n");
    sleep(4);
    NOBITA();
    printf("\t\t\thehehe! I don't know.. what ANAGRAMS means\n\n");
    sleep(4);
    printf("\t\t\t\a\aNobitaaaaa...\n\n \t\t\t\aANAGRAM is a word or phrase formed by rearranging the letters of another word\n\n");
    sleep(4);
    NOBITA();
    printf("\t\t\tI'll try my best to win this level too!!\n\n");
    printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    sleep(3);
    printf("\n\t\t\tGet Ready! 3! 2! 1!\n\n");
    
    system("pause"); 
    system("cls");  

    level2();
    printf("\n\n");
    NOBITA();
    printf("\t\t\t\a\aDORAEMON!");
    sleep(3);
    printf("\n\n");
    NOBITA();
    printf("\t\t\t\a\aDORAEMON!!!");
    printf("\n\n");
    sleep(4);
    printf("\n\n");
    Doraemon();
    printf("\t\t\t\a\aNOBITA! I AM HERE.\n\n");
    sleep(3);
    NOBITA();
    printf("\t\t\tDORAEMON! There is a RIVER! help me.\n\t\t\tI want to cross this RIVER.\n\n");
    sleep(3);
    Doraemon();
    printf("\t\t\t\a\a\aDon't worry NOBITA! Here, take this SUPER SHIP and cross the river safely.\n\n\n");
    sleep(4);
    ship();
    sleep(4);
    printf("\n\n");
    NOBITA();
    printf("\t\t\tDORAEMON!! I PASSED THE LEVEL 2 TOO. WE WILL GO HOME SOON!!\n");
    sleep(5);
    
    system("pause"); 
    system("cls");  

    printf("\n\n\n\t\t\t\t\t\t\t\t  *****LEVEL 3*****");
	printf("\n\t\t\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~\n\n");
	sleep(2);
    dinosaur();
    sleep(3);
    printf("\n\n");
    NOBITA();
    printf("\t\t\tWHATT!! A DINOSAUR!\n\n");
    sleep(3);
    dinosaur();
    printf("\n\n\t\t\tRAURRRRR~ RAURRRRRRR~~ RAURRRRRRR~~~\n");
    sleep(3);
    printf("\t\t\tNOBITAAA! IF YOU WANT TO GO HOME YOU HAVE TO DEFEAT ME FIRST.\n\n");
    sleep(4);
    NOBITA();
    printf("\t\t\tDefeat You? Defeat You in what?\n\n");
    printf("\t\t\tHAHAHAHA, IN Rock Paper And Scissor\n\n");
    NOBITA();
    printf("\t\t\tA CHALLENGE? CHALLENGE ACCEPTED!\n");
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    sleep(3);
    printf("\n\t\t\tGet Ready! 3! 2! 1!\n\n");
	
    system("pause"); 
    system("cls");  

    
    level3();
	printf("\n\n");
    NOBITA();
    printf("\t\t\t\a\aDORAEMON!");
    sleep(3);
    printf("\n\n");
    NOBITA();
    printf("\t\t\t\a\aDORAEMON!!!");
    printf("\n\n");
    sleep(4);
    printf("\n\n");
    Doraemon();
    printf("\t\t\t\a\aNOBITA! I AM HERE.\n\n");
    sleep(3);
    NOBITA();
    printf("\t\t\tDORAEMON!! I defeated that DINOSAUR but he is not moving from my way.. (T-T)\n\n");
    sleep(4);
    Doraemon();
    sleep(3);
    printf("\t\t\t\a\a\aDon't worry NOBITA! Here, take this SMALL LIGHT and make this dinosaur small.\n\n");
    sleep(4);
    torch();
    printf("\n\n");
    NOBITA();
    sleep(3);
    printf("\t\t\tFINALLYYYYYYYYYYYYYYYY I WON!!!\n\n");
    sleep(5);
    int ch;
    NOBITA();
    printf("\t\t\tNOW I CAN FINALLY GO HOME!\n\n");
    sleep(5);
    NOBITA();
    printf("\t\t\t\tDOORS???\n\n");
	printf("\t\t----------------                 --------------------               --------------------\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|            O |                 |                O |               |                O |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t|              |                 |                  |               |                  |\n");
	printf("\t\t----------------                 --------------------               --------------------\n");
	printf("       1                                   2                                    3\n");
	sleep(5);
        printf("\nNOBITA! YOU DID VERY WELL!\n\n Now Carefully choose ONE DOOR.\n\n In these THREE DOORS, one leads you to your HOME!");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("\tOH NOOO! NOBITA!\n\n\t\t SADLY Nobitaaa.. fate took a WILD TURN!\n\n\t\t\tHE BECOMES A LION MEAL (T-T)\n\n\n");
            printf("\t     ####      ####     M       M    #######    #####    V       V    #######    ######\n");
            printf("\t   #          #    #    MM     MM    #         #     #   V       V    #          #     #\n");
            printf("\t #   ####     #    #    M M   M M    ######    #     #    V     V     #######    #     #\n");
            printf("\t #      #     ######    M  M M  M    #         #     #     V   V      #          ######\n");
            printf("\t  #     #     #    #    M   M   M    #         #     #      V V       #          #   #\n");
            printf("\t   #####      #    #    M       M    #######    #####        V        #######    #    #\n");
        } else if (ch == 2) {
        printf("\t\t\t\t\t\t\t  YEHHHHH! YOU SELECTED THE RIGHT DOOR NOBITA!\n\n\t\t\t\t\t\t\t        YOU REACHED YOUR HOME NOBITA!\n\n\n\t\t\t\t\t\t\t\t  NOBITA: MOMMMMMMMMMMMM!!!\n\n\n\t\t\t\t\t\t\t\t\t THE END ");}
         else if (ch == 3) {
            printf("\tOH NOOO! WRONG DOOR NOBITA! \n\n\t\t SADLY Nobitaaa.. fate took a WILD TURN!\n\n\t\t\tHE BECOMES A LION MEAL (T-T)\n\n\n");
            printf("     ####      ####     M       M    #######    #####    V       V    #######    ######\n");
            printf("   #          #    #    MM     MM    #         #     #   V       V    #          #     #\n");
            printf(" #   ####     #    #    M M   M M    ######    #     #    V     V     #######    #     #\n");
            printf(" #      #     ######    M  M M  M    #         #     #     V   V      #          ######\n");
            printf("  #     #     #    #    M   M   M    #         #     #      V V       #          #   #\n");
            printf("   #####      #    #    M       M    #######    #####        V        #######    #    #\n");
        } else {
            printf("INVALID OPTION\n");
        }   
	return 0;
}


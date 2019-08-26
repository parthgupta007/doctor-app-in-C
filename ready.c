#include<stdio.h>
#include<conio.h>
#include <string.h>
#include<windows.h>
int main()
{
	char name;
	int number;
	long int adno;
	float time;
     char username[15];
    char password[12];
     int ch;
     int d;

 printf("Enter your username:\n");
    scanf("%s",&username);
 
    printf("Enter your password:\n");
    scanf("%s",&password);
 
    if(strcmp(username,"admin")==0){
        if(strcmp(password,"admin")==0){
 
        printf("\nWelcome.Login Success!");
 
 
        }

     
     printf("choose your city to look for the nearest doctor 1.jaipur\n 2.dehradun\n 3.Mumbai\n 4.New delhi\n ");
     scanf("%d",&ch);

     
     switch( ch )
     {
        case 1 : printf( "you needed doctors in jaipur\n" );
        
        			 printf("choose your category to look for the nearest doctor 1.Internal Medicine Physician\n 2.Pediatrician\n 3.Surgeon\n 4.Cardiologist\n ");
     scanf("%d",&d);
     
     			
     				switch( ch )
     {
        case 1 : printf( "you needed doctors in jaipur\n" );
        
        			 printf("the timings are these");
        			
                   break;

        /* TODO (#1#): talk to team */
        case 2 : printf( "the timings are these" );
                   break;

        case 3 : printf( "the timings are these\n" );
                   break;

        case 4 : printf( "You needed doctors in delhi\n" );
                   break;


        default  : printf( "SORRY ! we are not currently available in your city . A city suggestion is sent. \n" );
                   break;
     }
     
     getch();
        			
                   break;

        /* TODO (#1#): talk to team */
        case 2 : printf( "You needed doctors in dehradun\n" );
                   break;

        case 3 : printf( "You needed doctors in Mumbai\n" );
                   break;

        case 4 : printf( "You needed doctors in delhi\n" );
                   break;


        default  : printf( "SORRY ! we are not currently available in your city . A city suggestion is sent. \n" );
                   break;
     }
     
     getch();
     MessageBox(0,"Your appontment is booked! Click on OK to get verification meesage ","Welcome Message",1);
     
     printf("your city is %ch and your category is %d");
     //check this please
     //we have to work on this as we will have to get the names from above and get these printed
     //then we will sk for the other details and addhar info
     
     
	 }
	 else{
    printf("\nwrong password");

}

//printf("enter your name ");
//and other details will be taken using the scanner and will be further displayed 
    
    
return 0;
}

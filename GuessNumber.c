//importing the libraries
#include <stdio.h>
#include <time.h>
#include <math.h>
 int main()
{	
	//initiating variables
	 int in = 0;
	 //calling random number function
	  srand(time(NULL));
	  //telling about the game
	   printf("\n Today we will play a game, you take ten guesses of a 3-digit number,\n and I will tell you which one is a match or a hit\n");
	   int max=1000;
	   int min=100;
	   //getting target into a variable
	   int target =rand()%(max-min)+min;
	   int r = target;
	   int first1=0;
	   int sec1=0;
	   int third1=0;
	   int target1=0;
	   int r1=0;
	   int m=0;
	   //target into digits
	   int sec = (r%((int)pow(10,2)))/(int)pow(10,1);
	   int first = (r%((int)pow(10,3)))/(int)pow(10,2);
	   int third = (r%((int)pow(10,1)))/(int)pow(10,0);
	   //Checking if the digits are == 0
	   if(first!=0&&sec!=0&&third!=0)
            { 
            //printf("Iam non zero main\n");
	         //checking whether two digits are equal
	     if(first==sec||sec==third||third==first)
	        {
          //printf("Non zero two equal numbers main \n");
		  
		  printf(" Only a 3 digit number is allowed \n");
		  int i=0;
		  //loop for 10 guesses
		  for( i = 1;i<=10;i++)
		  {
	           printf("\n This is your number %d guess\n",i);
		   printf(" What is your guess? \n");
		   scanf(" %d",&in);
		   printf("%d\n",in);
		   int in1 = in;
		   int s = (in1%((int)pow(10,2)))/(int)pow(10,1);
		   int f = (in1%((int)pow(10,3)))/(int)pow(10,2);
		   int t = (in1%((int)pow(10,1)))/(int)pow(10,0);
		   if(f==first||f==sec||f==third)
			   printf("%d is a match \n",s);
		   if(s==first||s==sec||s==third)
			   printf("%d is a match \n",f);

		   if(t==first||t==sec||s==third)
			   printf("%d is a match \n",t);
		   if(f==first)
			  printf("%d is a hit\n",f);
		   if(s==sec)
			   printf("%d is a hit\n",s);
		   if(t==third)																									          printf("%d is a hit\n",t);
		   if(f==first&&s==sec&&t==third)
		   {
			   printf(" \nCongratulations, you correctly guessed %d\n GAME OVER \n If it prompts new game Continue or press ctrl+c to exit ",in);
			   break;
		   }
		  }
                } 
	     //If there sre no zeroes but no two digits are equal
	     else
	       {    // printf("Iam non zero but not two equal numbers main loop else\n");
		       if(first!=0||sec!=0||third!=0)
		       {
			  //checked non zero
		     if( first!=sec || first!=third )
		     {      //printf("Not equal for 1 digit going to check 2\n");
			     if(sec!=third)
			     {      //printf("Not equal for sec also so rand\n");
				     //Create another random number until any two digits are equal
				     while (m==0)
				     {
				      
				      target1 = rand()%(max-min)+min;
				      r1 = target1;
				      sec1 = (r1%((int)pow(10,2)))/(int)pow(10,1);
				      first1 = (r1%((int)pow(10,3)))/(int)pow(10,2);
				      third1 = (r1%((int)pow(10,1)))/(int)pow(10,0);
				     if(first1==sec1||sec1==third1||third1==first1)
				     {
				       printf(" Only a 3 digit number is allowed \n");
				       int i=0;
				       for( i = 1;i<=10;i++)
					{
					 printf("\n This is your number %d guess\n",i);
		                         printf(" What is your guess? \n");
					 scanf(" %d",&in);
					 printf("%d\n",in);
					 int in1 = in;
					 int s = (in1%((int)pow(10,2)))/(int)pow(10,1);
					 int f = (in1%((int)pow(10,3)))/(int)pow(10,2);
					 int t = (in1%((int)pow(10,1)))/(int)pow(10,0);
					 if(s==first1||s==sec1||s==third1)
					 printf("%d is a match \n",s);
					  if(f==first1||f==sec1||f==third1)
					  printf("%d is a match \n",f);
					  if(t==first1||t==sec1||s==third1)
					  printf("%d is a match \n",t);
					  if(f==first1)
						  printf("%d is a hit\n",f);
	                                 if(s==sec1)
						 printf("%d is a hit\n",s);
					 if(t==third1)
						 printf("%d is a hit\n",t);
					 if(f==first1&&s==sec1&&t==third1)
					 {
						 printf("\n Congratulations, you correctly guessed %d\n GAME OVER \n If it prompts new game Continue or press ctrl+c to exit ",in);
						 break;
					 }
					}
				       break;
				     }
				     }
				}	
			     
		         }
		      }
		   }
	    }
//if the digits in first generated random number have zeroes in it	   
else
{    //printf("I have zeroes\n"); 
	 while (first==0||sec==0||third==0)
	 {   //printf("Rand for non zer\n");
		//creating random number again until we have no zeroes in it		 
		  target1 = rand()%(max-min)+min;
		  r1 = target1;
		  sec1 = (r1%((int)pow(10,2)))/(int)pow(10,1);
		  first1 = (r1%((int)pow(10,3)))/(int)pow(10,2);
		  third1 = (r1%((int)pow(10,1)))/(int)pow(10,0);
		  //printf("target1 = %d\n",target1);
		  //loop breaks after satisfying if condition if there are no zeroes in latest generated number. 
		  if( first1!=0 && sec1!=0 && third1!=0)
		  {       // printf("Before zero but not now\n");
			  //check if first digit is == to any digit
			  if( first1!=sec1 || first1!=third1 )
		          {  //printf("before zer not not and 1 digit no equals\n");
				  //check if the second digit ==third
				   if(sec1!=third1)
				   {  //printf("before zer 1 no equals 2 no equals\n");
				   while ( m==0)
			           {
					  //generate a random number until any two digits are equal 
			  	   
				     target1 = rand()%(max-min)+min;
				      r1 = target1;
				      sec1 = (r1%((int)pow(10,2)))/(int)pow(10,1);
				       first1 = (r1%((int)pow(10,3)))/(int)pow(10,2);
				        third1 = (r1%((int)pow(10,1)))/(int)pow(10,0);
					 //game starts if any two numbers are same
					 if(first1==sec1||sec1==third1||third1==first1)
				 	{ // printf("before zer and before not equals now equals\n");
					  printf(" Only a 3 digit number is allowed \n");
					  int i=0;
					   for( i = 1;i<=10;i++)
					  {
					   printf("\n This is your number %d guess\n",i);
					   printf(" What is your guess? \n");
					   scanf(" %d",&in);
					   printf("%d\n",in);
					   int in1 = in;
					   int s = (in1%((int)pow(10,2)))/(int)pow(10,1);
					   int f = (in1%((int)pow(10,3)))/(int)pow(10,2);
					   int t = (in1%((int)pow(10,1)))/(int)pow(10,0);
					   if(s==first1||s==sec1||s==third1)
						   printf("%d is a match \n",s);
					   if(f==first1||f==sec1||f==third1)
						   printf("%d is a match \n",f);
					   if(t==first1||t==sec1||s==third1)
						   printf("%d is a match \n",t);
					   if(f==first1)
						   printf("%d is a hit\n",f);
					   if(s==sec1)
						   printf("%d is a hit\n",s);
					   if(t==third1)
						   printf("%d is a hit\n",t);
	                                   if(f==first1&&s==sec1&&t==third1)
					   {  printf("\n Congratulations, you correctly guessed %d\n GAME OVER \n If it prompts a new game, Continue or press ctrl+c to exit ",in);
					   break;
					   }
					  }
					}
				   }
				   }
				   //if 1st digit is not equal to any digit but second digit is equal to third game starts
				   else 
				   { //printf("1 digs are not equal but 2 and 3 are equal\n");
				    if(first1!=0||sec1!=0||third1!=0)
				    { // printf("again check for zeroes\n");
				     if(first1==sec1||sec1==third1||third1==first1)
				     {
					     printf(" Only a 3 digit number is allowed \n");
					     int i=0;
					     for( i = 1;i<=10;i++)
					     {
						     printf("\n This is your number %d guess\n",i);
						     printf(" What is your guess? \n");
						     scanf(" %d",&in);
						     printf("%d\n",in);
						     int in1 = in;
						     int s = (in1%((int)pow(10,2)))/(int)pow(10,1);
						     int f = (in1%((int)pow(10,3)))/(int)pow(10,2);
						     int t = (in1%((int)pow(10,1)))/(int)pow(10,0);
						     if(s==first1||s==sec1||s==third1)	
							     printf("%d is a match \n",s);
						     if(f==first1||f==sec1||f==third1)
							     printf("%d is a match \n",f);
						     if(t==first1||t==sec1||s==third1)
							     printf("%d is a match \n",t);
						     if(f==first1)
							     printf("%d is a hit\n",f);
						     if(s==sec1)
							     printf("%d is a hit\n",s);
						     if(t==third1)
							     printf("%d is a hit\n",t);
						     if(f==first1&&s==sec1&&t==third1)
						     {  printf("\n Congratulations, you correctly guessed %d\n GAME OVER \n If it prompts a new game, Continue or press ctrl+c to exit ",in);
							     break;
						     }
					     }
				     }
				   }
				   }

			  }
			  else
			  {   //	printf("1 digs is equal but 2 digis not equal so game start\n");
	
		   	//if first digit equal to any digit game starts
			  if(first1!=0&&sec1!=0&&third1!=0)
			  {
				  if(first1==sec1||sec1==third1||third1==first1)
			  {
				  printf(" Only a 3 digit number is allowed \n");
				  int i=0;
				  for( i = 1;i<=10;i++)
				  {
					  printf("\n This is your number %d guess\n",i);
					  printf(" What is your guess? \n");
					  scanf(" %d",&in);
					  printf("%d\n",in);
					  int in1 = in;
					  int s = (in1%((int)pow(10,2)))/(int)pow(10,1);
					  int f = (in1%((int)pow(10,3)))/(int)pow(10,2);
					  int t = (in1%((int)pow(10,1)))/(int)pow(10,0);
					  if(s==first1||s==sec1||s==third1)
						  printf("%d is a match \n",s);
					  if(f==first1||f==sec1||f==third1)
						  printf("%d is a match \n",f);
					  if(t==first1||t==sec1||s==third1)
						  printf("%d is a match \n",t);
					  if(f==first1)
						  printf("%d is a hit\n",f);
					  if(s==sec1)
						  printf("%d is a hit\n",s);
					  if(t==third1)
						  printf("%d is a hit\n",t);
					  if(f==first1&&s==sec1&&t==third1)
					  {  printf(" \n Congratulations, you correctly guessed %d\n GAME OVER \n If it prompts for a new game, Continue or press ctrl+c to exit ",in);
						  break;
					  }
			             } 
				  }
			  }
			}
			  
			  break;
		  }
	 }
}	 



return 0;
}

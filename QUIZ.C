#include<stdio.h>
#include<conio.h>
#include<string.h>
int first();
int second();
int third();
int high_score(int);
int highest=0;
void main()
{
int score,score1=0,score2=0,high;
char ch,option,x;
clrscr();
help:
printf("--------------------Quiz Game------------------------\n");
printf("          ******Rules of the Game*****           \n\n\n");
printf("1) In this Game there are three rounds and u will start with first round\n");
printf("   there will be 3 questions in first round and u should get atleat two \n");
printf("   correct inorder to goto next round.\n");

printf("2) In second round there will be 5 questions in which atleat 3 should be \n");
printf("   correct inorder to goto 3rd round.\n");

printf("3) In third round there will be 7 questions in which atleast 5 should be \n");
printf("   correct.\n");

printf("4) If you completes all the three rounds you will win the game\n");
printf("5) The difficulty level of questions will be more when ur coming closer to\n");
printf("   third round\n");

printf("If you are ready to start the game Press Enter....");
getch();
scanf("%c",&x);
	home:
	clrscr();
	printf("--------------------Quiz Game-------------------\n");
	printf("Select any one......\n");
	printf("Press s to start the game\n");
	printf("Press h to get help\n");
	printf("Press v to view the highest scorer\n");
	printf("Press q to quit the game\n");
	scanf("%c",&ch);
	if(toupper(ch) == 'S')
		{
		score=first();
		clrscr();
		if(score>=20)
		{
		printf("Congratulation!!!! You won the first round\n");
		printf("Are you ready to go to second Round (y/n)\n");
		scanf("%c%c",&x,&option);
		if(toupper(option)=='Y')
		score1=second();
		clrscr();
		if(score1>=30)
		{
		printf("Congratulations!1! You won the second round\n");
		printf("Are you ready to go to third round (y/n)\n");
		scanf("%c%c",&x,&option);
		if(toupper(option)=='Y')
		score2=third();
		clrscr();
		if(score2>=50)
		{
		printf("Congratulations!!! You won the game\n");
		printf("Your total score is %d\n",score+score1+score2);
		high_score(score+score1+score2);
		scanf("%c",&x);
		goto home;
		}
		else
		{
		printf("You lose the game\n");
		scanf("%c",&x);
		goto home;
		}
		}
		else{
		printf("You lose the game\n");
		scanf("%c",&x);
		goto home;
		}
		}
		else
		{
		printf("You lose the game\n");
		scanf("%c",&x);
		goto home;
		}
		}
	else if(toupper(ch)=='H') {
	clrscr();
	goto help;
	}
	else if(toupper(ch)=='V')
	{
	clrscr();
	high=high_score(highest);
	printf("The highest score until now is %d\n",high);
	}
	else
	exit(0);
	getch();
	}
int first()
{       int count=1;
	int score=0;
	int qs;
	int a[5];
	int i;
	char option;
	char x;
	clrscr();
		while(count<=3){
		question:
		clrscr();
		printf("Enter number between 1 and 5\n");
		scanf("%d",&qs);
		a[count]=qs;
		for(i=1;i<count;i++)
		if(a[i]==qs) {
		printf("The question is already answered\n") ;
		printf("Please select another Number\n");
		getch();
		goto question;
		}
		switch(qs)
		{
		case 1:clrscr();
		       printf("What is the national bird\n");
		       printf("\ta.Peacock\n");
		       printf("\tb.Parrot\n");
		       printf("\tc.Sparrow\n");
		       printf("Type any option\n");
		       scanf("%c%c",&x,&option);
		       if(toupper(option)=='A') {
		       printf("Your answer is correct\n");
		       score=score+10;
		       }
		       else{
		       printf("Your answer is wrong\n");
		       }
		       getch();
		       break;
	       case 2:clrscr();
		      printf("How many colors are there in national flag\n");
		      printf("\ta.3\n");
		      printf("\tb.4\n");
		      printf("\tc.5\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='B'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	      case 3:clrscr();
		      printf("Who is the father of our nation??\n");
		      printf("\ta.Jawaharlal Nehru\n");
		      printf("\tb.Mahatma Gandhi\n");
		      printf("\tc.SardarVallbai patel\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='B'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	     case 4:clrscr();
		      printf("Who is the first prime minister of India\n");
		      printf("\ta.Jawaharlal Nehru\n");
		      printf("\tb.Mahatma Gandhi\n");
		      printf("\tc.Subash Chandra Bose\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 5:clrscr();
		      printf("Entamology is the science that studies\n");
		      printf("\ta.Insects\n");
		      printf("\tb.Birds\n");
		      printf("\tc.Human Beings\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;


	}
	count=count+1;

	}
	return score;

}
int second()
{
int count=1;
	int score=0;
	int qs;
	int a[10];
	int i;
	char option;
	char x;
	clrscr();
		while(count<=5){
		question:
		clrscr();
		printf("Enter number between 1 and 8\n");
		scanf("%d",&qs);
		a[count]=qs;
		for(i=1;i<count;i++)
		if(a[i]==qs) {
		printf("The question is already answered\n") ;
		printf("Please select another Number\n");
		getch();
		goto question;
		}
		switch(qs)
		{
		case 1:clrscr();
		       printf("The world's largest desert is??\n");
		       printf("\ta.Thar\n");
		       printf("\tb.Kalahari\n");
		       printf("\tc.Sahara\n");
		       printf("Type any option\n");
		       scanf("%c%c",&x,&option);
		       if(toupper(option)=='C') {
		       printf("Your answer is correct\n");
		       score=score+10;
		       }
		       else{
		       printf("Your answer is wrong\n");
		       }
		       getch();
		       break;
	       case 2:clrscr();
		      printf("Who was the first Indian to be elected to the \n");
		      printf("British Parliament??\n");
		      printf("\ta.Gopalakrishna Gokhale\n");
		      printf("\tb.Mothilal Nehru\n");
		      printf("\tc.Dadabhai Naoroji\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	      case 3:clrscr();
		      printf("Which country leads in the production of rubber??\n");
		      printf("\ta.India\n");
		      printf("\tb.Malaysia\n");
		      printf("\tc.Japan\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='B'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	     case 4:clrscr();
		      printf("Mount Everest is located in??\n");
		      printf("\ta.India\n");
		      printf("\tb.China\n");
		      printf("\tc.Nepal\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 5:clrscr();
		      printf("India's top Supercomputer??\n");
		      printf("\ta.Aaditya\n");
		      printf("\tb.SahasraT\n");
		      printf("\tc.Apollo\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='B'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 6:clrscr();
		      printf("India's first atomic reactor was??\n");
		      printf("\ta.Kamini\n");
		      printf("\tb.Dhruva\n");
		      printf("\tc.Apsara\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 7:clrscr();
		      printf("Who is the first non-Indian to receive the Bharat Ratna??\n");
		      printf("\ta.Martin Luther King\n");
		      printf("\tb.Khan Abdul Ghaffar Khan\n");
		      printf("\tc.Mother Terasa\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='B'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 8:clrscr();
		      printf("The largest fresh water lake in India is??\n");
		      printf("\ta.Kolleru\n");
		      printf("\tb.Pulicat\n");
		      printf("\tc.Chilka\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;



	}
	count=count+1;

	}
	return score;

}
int third()
{
int count=1;
	int score=0;
	int qs;
	int a[10];
	int i;
	char option;
	char x;
	clrscr();
		while(count<=7){
		question:
		clrscr();
		printf("Enter number between 1 and 10\n");
		scanf("%d",&qs);
		a[count]=qs;
		for(i=1;i<count;i++)
		if(a[i]==qs) {
		printf("The question is already answered\n") ;
		printf("Please select another Number\n");
		getch();
		goto question;
		}
		switch(qs)
		{
		case 1:clrscr();
		       printf("Which is the national sport of Canada??\n");
		       printf("\ta.Volleyball\n");
		       printf("\tb.Football\n");
		       printf("\tc.Ice hockey\n");
		       printf("Type any option\n");
		       scanf("%c%c",&x,&option);
		       if(toupper(option)=='C') {
		       printf("Your answer is correct\n");
		       score=score+10;
		       }
		       else{
		       printf("Your answer is wrong\n");
		       }
		       getch();
		       break;
	       case 2:clrscr();
		      printf("Archery is the national sport of which country\n");
		      printf("\ta.Bhutan\n");
		      printf("\tb.China\n");
		      printf("\tc.Japan\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	      case 3:clrscr();
		      printf("Hopman cup is related to which sport??\n");
		      printf("\ta.Lawn Tennis\n");
		      printf("\tb.Badminton\n");
		      printf("\tc.Cricket\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	     case 4:clrscr();
		      printf("The unit of speed used for super computer is??\n");
		      printf("\ta.GELOPS\n");
		      printf("\tb.KELOPS\n");
		      printf("\tc.MELOPS\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 5:clrscr();
		      printf("Who invented logarithms??\n");
		      printf("\ta.Mandleef\n");
		      printf("\tb.John Naphier\n");
		      printf("\tc.Edison\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='B'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 6:clrscr();
		      printf("Cinematography was invented by??\n");
		      printf("\ta.Dalton\n");
		      printf("\tb.Roentgen\n");
		      printf("\tc.William Friese-Greene\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 7:clrscr();
		      printf("The percentage of earth surface covered by India is??\n");
		      printf("\ta.2.4\n");
		      printf("\tb.3.4\n");
		      printf("\tc.4.4\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='A'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	    case 8:clrscr();
		      printf("Who is the father of Geometry??\n");
		      printf("\ta.Pythagoras\n");
		      printf("\tb.Kepler\n");
		      printf("\tc.Euclid\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	   case 9:clrscr();
		      printf("The Indian to beat the computers in mathematical wizardy is??\n");
		      printf("\ta.Ramanujam\n");
		      printf("\tb.Raja Ramanna\n");
		      printf("\tc.Shakuntala Devi\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;
	   case 10:clrscr();
		      printf("Who is known as the \'saint of the gutters\'??\n");
		      printf("\ta.Mahatma Gandhi\n");
		      printf("\tb.Jawaharlal Nehru\n");
		      printf("\tc.Mother Teresa\n");
		      printf("Type any option\n");
		      scanf("%c%c",&x,&option);
		      if(toupper(option)=='C'){
		      printf("Your answer is correct\n");
		      score=score+10;
		      }
		      else
		      printf("Your answer is wrong\n");
		      getch();
		      break;



	}
	count=count+1;

	}
	return score;


}
int high_score(int score)
{
if(score>highest)
highest=score;
return highest;

}
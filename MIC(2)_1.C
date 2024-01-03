#include<stdio.h>
#include<conio.h>
void main()
{
  int s;
  float a,b,c,d,e,f,g,total;
  float per;
  clrscr();
  printf("Enter number of subjects: ");
  scanf("%d",&s);
  switch(s)
  {
  case 3:
  printf("Enter marks out of 100\n");
  printf("Enter your marks\n\nSubject 1:");
  scanf("%f",&a);
  printf("Subject 2:");
  scanf("%f",&b);
  printf("Subject 3:");
  scanf("%f",&c);
  total=a+b+c;
  printf("\nTotal=%f marks",total);
  per=(total*100)/300;
  printf("\nPercentage=%f%\n",per);
  break;
  case 4:
  printf("Enter marks out of 100\n");
  printf("Enter your marks\n\nSubject 1:");
  scanf("%f",&a);
  printf("Subject 2:");
  scanf("%f",&b);
  printf("Subject 3:");
  scanf("%f",&c);
  printf("Subject 4:");
  scanf("%f",&d);
  total=a+b+c+d;
  printf("\nTotal=%f marks",total);
  per=(total*100)/400;
  printf("\nPercentage=%f%",per);
  break;
  case 5:
  printf("Enter marks out of 100\n");
  printf("Enter your marks\n\nSubject 1:");
  scanf("%f",&a);
  printf("Subject 2:");
  scanf("%f",&b);
  printf("Subject 3:");
  scanf("%f",&c);
  printf("Subject 4:");
  scanf("%f",&d);
  printf("Subject 5:");
  scanf("%f",&e);
  total=a+b+c+d+e;
  printf("\nTotal=%f marks",total);
  per=(total*100)/500;
  printf("\nPercentage=%f%\n",per);
  break;
  case 6:
  printf("Enter marks out of 100\n");
  printf("Enter your marks\n\nSubject 1:");
  scanf("%f",&a);
  printf("Subject 2:");
  scanf("%f",&b);
  printf("Subject 3:");
  scanf("%f",&c);
  printf("Subject 4:");
  scanf("%f",&d);
  printf("Subject 5:");
  scanf("%f",&e);
  printf("Subject 6:");
  scanf("%f",&f);
  total=a+b+c+d+e+f;
  printf("\nTotal=%f marks",total);
  per=(total*100)/600;
  printf("\nPercentage=%f%\n",per);
  break;
  case 7:
  printf("Enter marks out of 100\n");
  printf("Enter your marks\n\nSubject 1:");
  scanf("%f",&a);
  printf("Subject 2:");
  scanf("%f",&b);
  printf("Subject 3:");
  scanf("%f",&c);
  printf("Subject 4:");
  scanf("%f",&d);
  printf("Subject 5:");
  scanf("%f",&e);
  printf("Subject 6:");
  scanf("%f",&f);
  printf("Subject 7:");
  scanf("%f",&g);
  total=a+b+c+d+e+f+g;
  printf("\nTotal=%f marks",total);
  per=(total*100)/700;
  printf("\nPercentage=%f%\n",per);
  break;
  default:
  printf("Enter subjects number from 3-7");
  break;
  }
  if(s>2&&s<8)
  {
    if(per<=70)
    {
      if(per<=40)
	{
	  printf("\nClass:Fail");
	}
	else if(per>40&&per<=50)
	{
	  printf("\nClass:Pass Class");
	}
	else
	{
	  printf("\nClass:Second Class");
	}
      }
      else if(per<70&&per>=60)
      {
	printf("\nClass:First Class");
      }
      else
      {
	printf("\nClass:Distinction");
      }
    }
  getch();
}

/*OUTPUT
Enter number of subjects: 3
Enter marks out of 100                                                          
Enter your marks                                                                
                                                                                
Subject 1:33                                                                    
Subject 2:46                                                                    
Subject 3:76                                                                    
                                                                                
Total=155.000000 marks                                                          
Percentage=51.666668%                                                           
                                                                                
Class:Second Class

Enter number of subjects: 4
Enter marks out of 100                                                          
Enter your marks                                                                
                                                                                
Subject 1:56                                                                    
Subject 2:33                                                                    
Subject 3:40                                                                    
Subject 4:4                                                                     
                                                                                
Total=133.000000 marks                                                          
Percentage=33.250000%                                                           
Class:Fail

Enter number of subjects: 5
Enter marks out of 100
Enter your marks

Subject 1:55
Subject 2:66
Subject 3:77
Subject 4:88
Subject 5:99

Total=385.000000 marks
Percentage=77.000000%

Class:Distinction

Enter number of subjects: 6
Enter marks out of 100                                                          
Enter your marks                                                                
                                                                                
Subject 1:66                                                                    
Subject 2:66
Subject 3:66                                                                    
Subject 4:66                                                                    
Subject 5:66                                                                    
Subject 6:66                                                                    
                                                                                
Total=396.000000 marks                                                          
Percentage=66.000000%                                                           
                                                                                
Class:Second Class


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





*/
















































                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

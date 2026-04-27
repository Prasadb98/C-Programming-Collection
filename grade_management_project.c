#include<stdio.h>
int main (){
char name;
int marks[5],total=0;
float percentage;
printf("Enter Student Name:");
scanf("%s", & name);

printf("Enter Marks of 5 Subjects:\n");

for (int i = 0; i < 5; i++)
{
    printf("Subject %d:\n", i+1);
    scanf("%d", &marks[i]);
    total=total + marks[i];
}
percentage=total/5.0;
printf("Total Marks = %d \n",total);
printf("percentage = %.2f\n",percentage);

if(percentage >=90)
 printf("Grade = A\n");
 else if (percentage >= 70)
  printf("Grade = B\n");
  else if (percentage >= 50)
  printf("GRade = C\n");
  else if (percentage >=35)
  printf("Grade = D\n");
  else
printf("FAIL\n"); 

printf("THANK YOU !!");


    return 0;
}
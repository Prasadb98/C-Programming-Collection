#include<stdio.h> 
int main() {
   int N,sum=0;
   printf("Enter the value of N=");
   scanf("%d",&N);

for (int i = 0; i <= N; i++)
{
    sum= sum + i;
}
printf("sum of 1 to %d is %d",N,sum);

return 0;

}
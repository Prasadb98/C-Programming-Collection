#include<stdio.h>
int main (){
int i,n ;
char book;

printf("Enter the no.of books ");
scanf("%d",&n);

printf("enter book name :");
for (int i = 0; i < n; i++)
{
    scanf("%s",book);
}
printf("books in library:\n");
for (int  i = 0; i <=n; i++)
{
    printf("%s\n",book);
}

return 0;

}
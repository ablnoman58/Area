#include<stdio.h>
void assalamualaikum();
void other();
int main ()
{
    char ch;
    printf("enter a letter");
 scanf("%c",&ch);
if (ch=='a')
{
  assalamualaikum();
} else if (ch=='b'){
assalamualaikum();
}
else {other();
}
return 0;
}
void assalamualaikum()
{
printf ("muslim\n");
}
void other()
{
    printf("others\n");
}

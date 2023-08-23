
#include <stdio.h>
int main()
{
    int n,r,c;
  printf("EAN : ");
  scanf ("%d",&n);
  for(r=1;r<=n;r++){
     for(c=1;c<=r;c++){
        printf("%d",c);}
          printf("\n");
  }
      for(r=n-1;r>=1;r--){
      for(c=1;c<=r;c++){
         printf("%d",c);}
          printf("\n");
}
    return 0;
}


/*  int main()
{
    int n,r,c;
  printf("EAN : ");
  scanf ("%d",&n);
  for(r=1;r<=n;r++){
      for(c=1;c<=r;c++){
         printf("%d",c);}
          printf("\n");
  }
      for(r=n;r>=1;r--){
      for(c=2;c<=r;c++){
         printf("%d",c);}
          printf("\n"); 
}
    return 0;
}*/

// Online C compiler to run C program online
#include <stdio.h>

  int main()
{
    int n,r,c;
  printf("EAN : ");
  scanf ("%d",&n);
  for(r=1;r<=n;r++){
      for(c=1;c<=r;c++){
         printf("*");}
          printf("\n");
  }
      for(r=n;r>=1;r--){
      for(c=2;c<=r;c++){
         printf("*");}
          printf("\n"); 
}
    return 0;
}

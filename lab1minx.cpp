#include <stdio.h>




int main() {
  int a = 15;
  int b = 20;
  scanf("%d",&a);
  scanf("%d",&b);
  
  if (a > b) {
    printf("a is greater than b");
    printf("\m%d",a-b);
    //diff of a and b
  }else{
  	 printf("b is greater than a");
  	 printf("%d",b-a);
  	 //diff b and a
  }  
  return 0;
}

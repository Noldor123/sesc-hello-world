#include <stdio.h>
int main (){
  char str [30];
  if (scanf("%s", str)!=0){
    printf("Hello, %s!", str);
    }else{
      printf("Hello, nameless!");
    }
  }
  return 0;
}

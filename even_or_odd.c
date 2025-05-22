#include <stdio.h>
int main(){
int nb ;
scanf("%d",&nb);
int ver = nb % 2 ;
if (ver != 0 ){
    printf("%d est impair.",nb);
}
return 0;
}
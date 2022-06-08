#include <stdio.h>

int main() {
  int i,values[5];
for(i=0; i<5; i++){
    scanf("%d", &values[i]);
}
for(i=0; i<5; ++i){
    printf("%d\n", values[i]);
}
getch();
}

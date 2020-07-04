#include <stdio.h>

int main() {
    int count,t;
    for (t=0;t<100;++t){
        count=1;
        for(;;){
            printf("%d", count);
            count++;
            if(count==10) break;
        }
    }

}
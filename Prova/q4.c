#include <stdio.h>

int nbit(int num){
    if(num == 0){
        return 0;

    }if(num == 1){
        return 2;

    }else if(num == 2){
        return 3;

    }else{
        return nbit(num - 1) + nbit(num - 2);

    }
}

int main(){

    printf("%d",nbit(5));
    puts(" ");

    return 0;

}

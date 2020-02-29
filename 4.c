#include <stdio.h>
#include <stdlib.h>

void main(){
    int prima[10]={2,3,5,7,11,13,17,19,23,29};
    int jumlah=0;

     for(int i=0;i<5;i++){
    }
    printf("array : (%d,%d,%d,%d,%d)",prima[0],prima[1],prima[2],prima[3],prima[4]);

    for(int i=0;i<5;i++){
        jumlah=jumlah+prima[i];
    }
    printf("\nHasil Penjumlahan = %d",jumlah);
}

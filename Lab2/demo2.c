#include <stdio.h>

int main(){
     float a,b, nhan, chia;
     printf ( "nhap vao hai so thuc a va b:");
     scanf ( "%f %f", &a,&b);
     printf ( " Xuat ra hai so thuc : %f %f", a,b);
     nhan = a * b;
     chia = a/ b;
     printf ( "\nnhan 2 so thuc: %2d", nhan);
     printf ( "\nchia 2 so thuc: %2d", chia);
     return 0;
}
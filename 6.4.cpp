#include <stdio.h>
#define MAX 100
void nhap(float a[], int &n) {

  do{
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);
    if(n<=0 || n>MAX){
      printf("\nSo phan tu không hop le, xin vui lòng kiem tra lai");
    }
  }while(n<=0 || n> MAX);
  for(int i = 0; i < n; i++){
    printf("Nhap a[%d]= ", i);
    scanf("%f", &a[i]);
  }
}

float isMin(float a[], int n){

  float min = a[0];
  
  for(int i = 0; i < n; i++){
    if(a[i] < min){
      min = a[i];
    }
  }
  
  return min;
}

void xuat(float a[], int n){

  printf("Các phan tu trong mang là: ");
  for(int i = 0; i < n; i++){
    printf("%f\t",a[i]);
  }
 
  printf("\nPhan tu nho nhat là: %.1f",isMin(a,n));
}
}
  


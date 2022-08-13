#include<stdio.h>
void TimKiem(int a[], int n)
{
    int x;
    printf("\nNhap gia tri x can tim:\n");
    scanf("%d", &x);
    printf("\nVi tri cua x trong mang la:\n");
    for(int i = 0; i<n; i++)
    {
        if(a[i]==x)
        {
            printf("%d \t",i);
        }
    }
}
void Nhap(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        
        printf("%d \t", a[i]);
    }
}
int main()
{
    int a[100]; int n;
    do{
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);
    Nhap(a, n);
    printf("\nCac phan tu trong mang la:\n");
    Xuat(a,n);
    TimKiem(a,n);
}

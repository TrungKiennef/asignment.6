#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
int tbc(int a[], int n);
int main()
{
    int a[100], n;
    cout<<"Nhap slpt n= "; cin>>n;
    nhap(a,n);
    cout<<"cac phan tu mang A la:\n";
    xuat(a,n);
    cout<<endl;
    cout<<"Ket qua tbc la: "<<tbc(a,n);
}
void nhap(int a[], int &n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "; cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int tbc(int a[], int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        sum+= a[i];
    }
    float tb=sum/n;
    return tb;
}

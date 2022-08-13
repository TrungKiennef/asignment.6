
#include <stdio.h>
#include <conio.h>
struct nguyen
{
	int dem;
	int x[50];
} 
nguyen v[15];
void main()
{
	int a[50],b[50],j,k,n,d;
   cout<<"Nhap vao so phan tu cua day: ";
   cin>>n;
   cout<<"Nhap vao day so nguyen: "<<endl;
   for(int i=0;i<n;i++)
   {
   	cout<<"a["<<(i+1)<<"]= ";
      cin>>a[i];
   }
   j=0;
   k=0;
   d=0;
   while(j<n)
   {
   	if(a[j]>0)
      {
      	v[k].x[d]=a[j];
         v[k].dem++;
         d++;
         j++;
         if(a[j]>0 && a[j-1]<=0) k++;
      }
      else
      {
      j++;
      }
   }
   int chiso;
   int max=v[0].dem;
   for(int i=1;i<=k;i++)
   {
   	if(v[i].dem>max)
      {
      	max=v[i].dem;
         chiso=i;
      }
   }
   cout<<"Day so duong dai nhat la: "<<endl;
   for(int i=0;i<max;i++)
   	cout<<v[chiso].x[i];
   getch();
}

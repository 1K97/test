/*
Viet chuong trinh nhap 1 day so thuc va cho biet phan tu thu may cua day co gia tri gan voi 2015
*/
#include <stdio.h>
#include <math.h>
#define ptmang 1000
void NhapMang(int a[ptmang], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[ptmang], int &n)
{
	int hieu;
	int vitri;
	int min= abs(a[0]-2015);
	for (int i = 0; i < n; i++)
	{
		hieu = abs(a[i] - 2015);
		if (hieu <= min)
		{
			min = hieu;
			vitri = i;
		}
	}

	printf("Vi tri gan voi 2015 nhat la %d", vitri);


	

}
void main()
{
	int a[ptmang], n,vitri;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	NhapMang(a, n);
	XuatMang(a, n);

}

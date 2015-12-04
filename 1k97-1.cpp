//Viet CT xoa cac phan tu le trong mang
#include <stdio.h>
void NhapMang(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[100], int &n, int vitri)
{
	for  (int i = vitri; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			a[i] = a[i + 1];
			
			printf("%d", a[i]);
			n--;
		}
		

	}

}
void main()
{
	int a[100], n,vitri;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	printf("Nhap vi tri kiem tra: ");
	scanf_s("%d", &vitri);
	NhapMang(a, n);
	XuatMang(a, n,vitri);

}

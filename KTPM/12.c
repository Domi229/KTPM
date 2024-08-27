#include <stdio.h>

void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap so thu %d:", i + 1);
        scanf("%d", &a[i]);
    }
}

void inmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
void daomang(int a[], int size)
{
    int i, j, tmp;
    i = 0;
    j = size - 1;
    while (i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
}
int main()
{
    int n, a[20];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    nhapmang(a, n);
    daomang(a, n);
    inmang(a, n);

    return 0;
}
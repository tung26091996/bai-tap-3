#include <stdio.h>


int main() {
    int soluongphantu;
    printf("Vui long nhap so luong phan tu");
    scanf("%d", &soluongphantu);
    if (soluongphantu > 10) {
        printf("vui long nhap so luong phan tu nho hon hoac bang 10");
        return 0;
    }
    int mang[soluongphantu];
    for (int i = 0; i < soluongphantu; i++) {
        printf("Vui long nhap gia tri cua phan tu thu %d\n", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Thong tin cac phan tu trong mang: ");
    for (int j = 0; j < soluongphantu; ++j) {
        printf("%d", mang[j]);
    }

    int findMaxValue;
    int findMinValue;
    findMaxValue = findMinValue = mang[0];

    for (int k = 0; k < soluongphantu; ++k) {
        if (findMaxValue < mang[k]) {
            findMaxValue = mang[k];
        }
        if (findMinValue > mang[k]) {
            findMinValue = mang[k];
        }
    }
    printf("Nhap lua chon cua ban\n");
    printf("1.Gia tri lon nhat trong mang\n");
    printf("2.Gia tri nho nhat trong mang\n");
    int luachon;
    scanf("%d", &luachon);
    switch (luachon) {
        case 1:
            printf("Gia tri lon nhat cua mang la %d", findMaxValue);
            break;
        case 2:
            printf("Gia tri nho nhat cua mang la %d", findMinValue);
            break;
    }
    return 0;
}
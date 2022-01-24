#include <stdio.h>

int main(void){
    printf("CHUONG TRINH TINH TIEN THUONG TET");
    int luong;
    char ten[20], danhGia;
    printf("\nNhap ten cua ban:");
    scanf("%s", ten);
    printf("\nNhap muc luong cua ban (VND):");
    scanf("%d", &luong);
    printf("\nNhap muc danh gia cua cong ty danh cho ban(a,b,c,d):");
    scanf("%s", &danhGia);
    int tienThuongTet;
    switch(danhGia){
        case 'a':
        tienThuongTet =  luong*(200/100);
        printf("\nTien thuong tet cua ban la:%d", tienThuongTet);
         printf("dong");
        break;
        
        case 'b':
         tienThuongTet =  luong * (180/100);
        printf("\nTien thuong tet cua ban la:%d", tienThuongTet);
         printf("dong");
        break;
        
        case 'c':
         tienThuongTet =luong * (150/100);
        printf("\nTien thuong tet cua ban la:%d", tienThuongTet);
         printf("dong");
         break;
        
        case 'd':
          tienThuongTet = luong * (130/100);
        printf("\nTien thuong tet cua ban la:%d", tienThuongTet);
        printf("dong");
        break;
        
        default:
        printf("\nVui long nhap lai (a,b,c,d)!!!");
        break;
    }

    return 0;
}

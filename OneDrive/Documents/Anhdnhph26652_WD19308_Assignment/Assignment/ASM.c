#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
void bai1(){
   float so;  
   printf ("Moi nhap so: ");
   scanf ("%f", &so);
   
   if (so==(int)so){
       printf ("%g la so nguyen\n", so);
   } else 
         { printf ("%g khong phai la so nguyen\n", so);
   }
      
    if(so > 1 && so==(int)so) {
    	int sont = so;
		int i;
		int kiemtra = 1;
		for(i = 2; i <= sqrt(sont); i++)  {
			if(sont % i == 0) {
				kiemtra = 0;
				break;
			}
	}	
		if(kiemtra == 1) {
			printf("%d la so nguyen to \n", sont);
		} else {
			printf("%d khong phai la so nguyen to \n", sont);
	}	}		
	   else {
		printf ("%g khong phai la so nguyen to \n", so);
	} 
	

    if (so>0 && (sqrt(so)==(int)sqrt(so))){
    	printf ("%g la so chinh phuong\n", so);
	} else {
		printf ("%g khong phai la so chinh phuong\n", so);
	}
}

void bai2(){
    int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	
	if(a == 0 && b == 0){
			printf("Khong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("Khong co BCNN, UCLN = %d\n", (a == 0) ? b : a);
		} else if(a >0 && b>0){ 
			int bc = a * b;			
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
		
	else if(a < 0 && b >0){
		int bc = a * b;
		a = -a;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else if(a > 0 && b < 0){
		int bc = a * b;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else{
    	int bc = a * b;
		a = -a;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
}

void bai3(){
   int giobatdau, gioketthuc, thoigian, giogiamgia;
   float tien, giamgia, giolonhon4; 
   const int gio = 4;
    
   printf ("Gio bat dau: ");
   scanf ("%d", &giobatdau);
   printf ("Gio ket thuc: ");
   scanf ("%d", &gioketthuc);
   thoigian = gioketthuc - giobatdau;
   giogiamgia = thoigian - 4;
   tien = thoigian*50000;
   giamgia = giogiamgia*50000;
   
   if (giobatdau >= 12 && gioketthuc <= 23){
       if (thoigian <= 4 && giobatdau < 14 || giobatdau >= 17){
           printf ("So tien can thanh toan la: %g\n", tien);
       } else if (thoigian <= 4 && giobatdau >= 14 && giobatdau <17){
           printf ("So tien can thanh toan la: %g\n", tien-(tien*0.1));
       } else if (thoigian > 4 && giobatdau < 14 || giobatdau >= 17){
    giolonhon4 = (gio*50000)+(giamgia-(giamgia*0.3));       
           printf ("So tien can thanh toan la: %g\n", giolonhon4);
       } else {
    giolonhon4 = (gio*50000)+(giamgia-(giamgia*0.3));       
           printf ("So tien can thanh toan la: %g\n", giolonhon4-(giolonhon4*0.1));
       } }
    else {
		 printf ("\nQuan chi hoat dong trong khoang 12h-23h\n");
	}
}

void bai4(){
	float bac1 = 1678;
	float bac2 = 1734;
	float bac3 = 2014;
	float bac4 = 2536;
	float bac5 = 2834;
	float bac6 = 2927;
	
	int kWh;
	
	printf("Moi ban nhap vao so kWh da su dung: ");
	scanf("%d",&kWh);
	
	if(kWh>0 && kWh<=50){
		printf("So tien dien la: %.2f \n",kWh*bac1);
	}else if(kWh>=51 && kWh<=100){
		printf("So tien dien la: %.2f \n",kWh*bac2);
	}else if(kWh>=101 && kWh<=200){
		printf("So tien dien la: %.2f \n",kWh*bac3);
	}else if(kWh>=201 && kWh<=300){
		printf("So tien dien la: %.2f \n",kWh*bac4);
	}else if(kWh>=301 && kWh<=400){
		printf("So tien dien la: %.2f \n",kWh*bac5);
	}else{
		printf("So tien dien la: %.2f \n",kWh*bac6);
	}
}

void bai5(){
    int tien, menhgia[9] = {500, 200, 100, 50, 20, 19, 5, 2, 1}, i = 0;
    int soto[9] = {0};
	
	do{
		printf ("Moi nhap so tien: ");
		scanf ("%d", &tien);}
	while(tien <= 0);	
	while (i < 9){
		if (tien > menhgia[i]){
			break;}
		else{
			i++;}
	}
	
	while (i<9){
		soto[i] = tien / menhgia[i];
		tien = tien % menhgia[i];
		i++;}
	
	printf ("Doi duoc: \n");
	
	for (i=0; i<9; i++){
		if (soto[i] > 0){
			printf ("%d to %d \n", soto[i], menhgia[i]);}
	}
	printf ("\n");
}

void bai6(){
	float tien, vay, lai, trahangthang, tong;
	int i;
	
	printf ("\nMoi nhap so tien can vay: ");
	scanf ("%f", &vay);
	printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
	
	trahangthang = vay / 12;
		
	for (i = 1; i <= 12; i++){
		lai = vay * 0.05;
		tong = lai + trahangthang;
		vay -= trahangthang;
		printf ("\n%d\t%2.f\t\t%2.f\t\t%2.f\t\t\t%2.f", i, lai, trahangthang, tong, vay);}
		
	printf ("\n");
}
	
void bai7(){
	int i;
	float phanTram;
	do{
	printf ("\nMoi nhap so phan tram tien vay: ");
	scanf ("%f", &phanTram);
	}while (phanTram <= 0 || phanTram > 1.0);
	double phanTramTraTruoc = 1.0 - phanTram;
	double tien = 500000000;
	
	double tienTraTruoc = tien * phanTramTraTruoc;
	tien -= tienTraTruoc;
	
	double traHangNam = tien / 24;
	
	printf ("So tien tra truoc la: %.2lf", tienTraTruoc);
	printf ("\nSo tien con lai phai tra\n");
	printf ("\nKy han\tTien lai phai tra\tTien goc phai tra\tTong tien phai tra\t So tien con lai phai tra");
	
	for (i = 1; i <= 24; i++){
		double laiPhaiTra = tien * 0.072;
		double tong = laiPhaiTra + traHangNam;
		tien -= traHangNam;
		
		printf ("\n%d \t%.2lf \t\t%.2lf  \t\t%.2lf  \t\t%.2lf", i, laiPhaiTra, traHangNam, tong, tien);}
		
	printf ("\n");		
}

//bai8
struct SinhVien{
	char hoTen[50];
	float diemTB;
};
void bai8(){
	int i, n, j;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	struct SinhVien sv[n];
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Ho ten sinh vien: ");
		gets(sv[i].hoTen);
		printf("Diem trung binh: ");
		scanf("%f",&sv[i].diemTB);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(sv[i].diemTB<sv[j].diemTB){
				struct SinhVien Temp;
				Temp = sv[i];
				sv[i] = sv[j];
				sv[j] = Temp;
			}
		}
	}
	printf("-----------------Danh sach sinh vien-----------------");
	for(i=0;i<n;i++){
		printf("\n");
		printf("Sinh vien: %s\n",sv[i].hoTen);
		printf("Diem trung binh: %.2f\n",sv[i].diemTB);
		if(sv[i].diemTB>=9.0){
			printf("Hoc luc xuat sac");
		}else if(sv[i].diemTB>=8.0){
			printf("Hoc luc gioi");
		}else if(sv[i].diemTB>=6.5){
			printf("Hoc luc kha");
		}else if(sv[i].diemTB>=5.0){
			printf("Hoc luc trung binh");
		}else{
			printf("Hoc luc yeu");
		}
	}
}
void bai9(){
	printf("Chuong trinh tro choi FPOLY-LOTT \n");
	int randomNum,i;
	int a,b;
	int count=0;
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d",&b);
	srand(time(0));
	printf("So trung thuong la \n");
	for(i=0;i<2;i++){
		randomNum = rand()%15;
		printf("%d\n",randomNum);
		if(a==randomNum || b==randomNum){
			count++;
		}
	}
	if(count == 0){
		printf("Chuc ban may man lan sau \n");
	}else if(count == 1){
		printf("Ban da trung giai nhi \n");
	}else{
		printf("Ban da trung giai nhat \n");
	}
}

//bai10
struct PhanSo{
    int tu;
	int mau;
}; 

struct PhanSo nhap(){
	struct PhanSo phanso;
	
	printf ("\nMoi nhap tu so: ");
	scanf ("%d", &phanso.tu);
	do{
	printf ("Moi nhap mau so: ");
	scanf ("%d", &phanso.mau);}
	while (phanso.mau == 0);
	
	return phanso;
}

struct PhanSo cong(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo tong;
	if (so1.mau == so2.mau){
	tong.tu = so1.tu + so2.tu;
	tong.mau = so1.mau;}
	else {
	tong.tu = so1.tu * so2.mau + so2.tu * so1.mau;
	tong.mau = so1.mau * so2.mau;
	}
	return tong;
}

struct PhanSo tru(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo hieu;
	if (so1.mau == so2.mau){
	hieu.tu = so1.tu - so2.tu;
	hieu.mau = so1.mau;}
	else {
	hieu.tu = so1.tu * so2.mau - so2.tu * so1.mau;
	hieu.mau = so1.mau * so2.mau;
	}
	return hieu;
}

struct PhanSo nhan(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo tich;
	tich.tu = so1.tu * so2.tu;
	tich.mau = so1.mau * so2.mau;
	return tich;
}
	
struct PhanSo chia(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo thuong;
	thuong.tu = so1.tu * so2.mau;
	thuong.mau = so1.mau * so2.tu;
	return thuong;
}
void bai10(){
    struct PhanSo phanso1 = nhap();
	
	struct PhanSo phanso2 = nhap();
	
	struct PhanSo tong = cong(phanso1, phanso2);
	
	struct PhanSo hieu = tru(phanso1, phanso2);
	
	struct PhanSo tich = nhan(phanso1, phanso2);
	
	struct PhanSo thuong = chia(phanso1, phanso2);
	
	printf ("\nTong 2 phan so la: %d/%d + %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, tong.tu, tong.mau);
	
	printf ("\nHieu 2 phan so la: %d/%d - %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, hieu.tu, hieu.mau);
	
	printf ("\nTich 2 phan so la: %d/%d * %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, tich.tu, tich.mau);
	
	printf ("\nThuong 2 phan so la: %d/%d : %d/%d = %d/%d \n", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, thuong.tu, thuong.mau);
}

int main(){
	int chon;
	do{

	    printf("-------------------------------------Menu------------------------------------- \n");
	    printf("1. Kiem tra so nguyen \n");
	    printf("2. Uoc chung va boi chung \n");
	    printf("3. Tinh tien Karaoke \n");
	    printf("4. Tinh tien dien \n");
	    printf("5. Doi tien \n");
	    printf("6. Tinh lai suat \n");
	    printf("7. Vay tien \n");
	    printf("8. Thong tin sinh vien \n");
	    printf("9. FPOLY-LOTT \n");
	    printf("10. Tinh toan phan so \n");
	    printf("11. Thoat \n");
	    printf("Moi ban chon chuc nang: ");
	    scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Ban da chon chuc nang 1 \n");
				bai1();
				break;
			case 2:
				printf("Ban da chon chuc nang 2 \n");
				bai2();
				break;
			case 3:
				printf("Ban da chon chuc nang 3 \n");
				bai3();
				break;
			case 4:
				printf("Ban da chon chuc nang 4 \n");
				bai4();
				break;
			case 5:
				printf("Ban da chon chuc nang 5 \n");
				bai5();
				break;
			case 6:
				printf("Ban da chon chuc nang 6 \n");
				bai6();
				break;
			case 7:
				printf("Ban da chon chuc nang 7 \n");
				bai7();
				break;
			case 8:
				printf("Ban da chon chuc nang 8 \n");
				bai8();
				break;
			case 9:
				printf("Ban da chon chuc nang 9 \n");
				bai9();
				break;
			case 10:
				printf("Ban da chon chuc nang 10 \n");
				bai10();
				break;
			case 11:
				break;
		}
	} while(chon != 11);
	return 0;
}

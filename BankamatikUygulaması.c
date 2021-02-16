#include <stdlib.h>
#include <stdio.h>

int main()
{

int islem;
int bakiye=1000;
int tutar;

printf("Islemler\n1-Para Cekme\n2-Para Yatirma\n3-Havale Yapma\n4-Bakiye Sorgulama\n5-Kart Iade\n\n");
printf("islem seciniz:");
scanf("%d",&islem);

switch(islem)
{

case 1:
printf("bakiyeniz:%d\n",bakiye);
printf("cekilecek tutar:");
scanf("%d",&tutar);
if(tutar>bakiye){
printf("Bakiye Yetersiz:");
}
bakiye -= tutar;
printf("Bakiyeniz:%d",bakiye);
break;

case 2:
printf("bakiyeniz:%d\n",bakiye);
printf("yatirilicak tutar:");
scanf("%d",&tutar);

bakiye +=tutar;
printf("Bakiyeniz:%d",bakiye);
break;

case 3:
printf("bakiyeniz:%d\n",bakiye);
printf("havale tutari:");
scanf("%d",&tutar);
if(tutar>bakiye){
printf("Bakiye Yetersiz:");
}
bakiye -=tutar;
printf("Bakiyeniz:%d",bakiye);
break;

case 4:
printf("Bakiyeniz=%d",bakiye);
break;

case 5:
printf("Kartiniz iade edildi\n");
break;

default:
printf("Hatali islem");
break;
}

return 0;
}

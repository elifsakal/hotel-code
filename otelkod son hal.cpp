#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void ekle();  
void listele();
void duzenle();  
void sil();
void ara();
void indirim();
void vip();



void giris()
{
	
	int j=0,e=0;
    char uname[10],s=' '; 
    char pword[10],code[10];
    char user[10]="elay";
    char pass[10]="1824";
    do
{
	system("cls");
	
    printf("\n  **************************  GIRIS FORMU  **************************  ");
    printf(" \n                      KULLANICI ADINI GIRIN:-");
	scanf("%s", &uname); 
	printf(" \n                       SIFREYI GIRIN:-");
	while(e<10)
	{
	    pword[e]=getch();
	    s=pword[e];
	    if(s==13) break;
	    else printf("*")
	    e++;
	}
	pword[e]='\0';
	e=0;
	
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       HOSGELDINIZ !!!! GIRIS BASARILI");
	
	break;
	}
	else
	{
		printf("\n        UZGUNUM !!!!  GIRIS BASARISIZ");
		j++;
		
		getch();
		
	}
}
	while(j<=2);
	if (j>2)
	{
		printf("\nUzgunum Dort Kez Yanlis Kullanici Adi ve Sifre Girdiniz!!!");
		
		getch();
		
		}
		system("cls");	
}

struct musteribilgileri   
{
	char odanumarasi[10];
	char isim[20];
	char adres[25];
	char telefonnumarasi[15];
	char uyruk[15];	
	char email[20];
	char kalinacaksure[10];
	char gelistarihi[10];
}s;

int main(){     	
	
	printf("\a");
	system("COLOR D");

	
	int e=0;
	
	time_t t;
	time(&t);
	char musteriismi;
	char sec;

	system("cls");  
	printf("        ---------------------------------------------------------------\n");
	printf("       |  O       O              OO                                   |\n");      
	printf("       |                                                              |\n");
	printf("       |  O O   O O    OOOOOO  O    O O    O O      OOOOOO OOOOOO     |\n");
	printf("       |  O  O O  O    O       O    O OO   O O      O      O    O     |\n");
	printf("       |  O   O   O    O  OOOO O    O O O  O O      OOOO   OOOOOO     |\n");
	printf("       |  O   O   O    O    O  O    O O  O O O      O      O   O      |\n");
	printf("       |  O   O   O    OOOOOO  OOOOOO O    O OOOOOO OOOOOO O    O     |\n");
	printf("       |                                                              |\n");                       
	printf("        ---------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*        -------------------------              *\n");
	printf("\t\t*          ELAY OTELE HOSGELDINIZ               *\n");
	printf("\t\t*        -------------------------              *\n");
	printf("\t\t*       Ayse Nur KORKMAZ ve Elif SAKAL          *\n");
	printf("\t\t*         tarfindan olusturulmustur.            *\n");
	printf("\t\t* Iletisim numarasi 05443565634 veya 04842242418*\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*************************************************\n\n\n");
		for(e=0;e<80;e++)
		printf("-");
	    printf("\n Giris Yapilan Tarih ve Saat : %s",ctime(&t));
	    for(e=0;e<80;e++)
		printf("-");
	printf(" \n Devam Etmek Icin Herhangi Bir Tusa Basiniz..");
	
	getch();	
    system("cls");
    giris();
    system("cls");
	while (1)      
	{
		system("cls");
	
		 for(e=0;e<80;e++)
		printf("-");
		printf("\n");
		printf("   ******************************  |ANA MENU|  ***************************** \n");
		for(e=0;e<80;e++)
		printf("-");
		printf("\n");
		
		printf("\t\t *Lutfen Menuden Seciminizi Yapin*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Oda Rezervasyonu ");
		printf("\n------------------------");
		printf(" \n Enter 2 -> Musteri Kaydini Goruntule");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Kayit Duzenle");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Musteri Kaydi Ara");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Musteri Kaydini Sil");
		printf("\n-----------------------------------");
		printf(" \n Enter 6 -> VIP Musteri Kontrolu");
		printf("\n-----------------------");
		printf(" \n Enter 7 -> Indirimler");
		printf("\n-----------------------");
		printf(" \n Enter 8 -> Cikis");
		printf("\n-----------------");
		printf("\n");
		for(e=0;e<80;e++)
		printf("-");
	    printf("\n Tarih ve Saat: %s",ctime(&t));
	    for(e=0;e<80;e++)
		printf("-");
		
		sec=getche();
		sec=toupper(sec);
		switch(sec)           
		{	
			case '1':
				ekle();break;
			case '2':
				listele();break;
			case '3':
				duzenle();break;
			case '4':
				ara();break;
			case '5':
				sil();break;
			case '6':
				vip();break;	
			 case'7':
		    	indirim();break;
			case '8':
				system("cls");
				printf("\n\t BIZI TERCIH ETTIGINIZ ICIN ");
				printf("\n\n\t *****TESEKKURLER*****");
				
				exit(0);
				break;
			default:
				system("cls");
				printf(" Yanlis Girdi");
				printf("\n Devam Etmek Icin Herhangi Bir Tusa Basiniz");
				getch();
		}
	}
}

void ekle()
{
	FILE *f;
	char test;
	f=fopen("ekle.txt","a+");
	if(f==0)
	{   f=fopen("ekle.txt","w+");
		system("cls");
		printf("Veritabanýmýzý bilgisayarýnýza yuklerken lutfen bekleyiniz!!");
		printf("\n Ýslem tamamlandi devam etmek için herhangi bir tusa basin!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Musteri Bilgilerini Giriniz:");
		printf("\n**************************");
		printf("\n Oda Numarasini Giriniz:\n");
		scanf("\n%s",s.odanumarasi);
		fflush(stdin);
		printf("Isminizi Giriniz:\n");
		scanf("%s",s.isim);
		printf("Adresinizi Giriniz:\n");
		scanf("%s",s.adres);
		printf("Telefon Numaranizi Giriniz:\n");
		scanf("%s",s.telefonnumarasi);
		printf("Uyrugunuzu Giriniz:\n");
		scanf("%s",s.uyruk);
		printf("Email Adresinizi Giriniz:\n");
		scanf(" %s",s.email);
		printf("Kalinacak Sureyi Giriniz(\'x\'days):\n");
		scanf("%s",&s.kalinacaksure);
		printf("Gelis Tarihinizi Giriniz(gg\\aa\\yyyy):\n");
		scanf("%s",&s.gelistarihi);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Oda Basariyla Rezerve Edildi!!");
		printf("\n Cikmak Icin esc Tusuna Basiniz,  Baska Bir Musteri Kaydetmek Icin Herhangi Bir Tusa Basiniz:");
		test=getche();
		if(test==27)
			break;
			
	}
	fclose(f);
}

void listele()
{
	FILE *f;
	int e;
	if((f=fopen("ekle.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ODA    ");
	printf("ISIM\t ");
	printf("\tADRES ");
	printf("\tTELEFONNUMARASI ");
	printf("\tUYRUK ");
	printf("\tEMAIL ");
	printf("\t\t  KALINACAKSURE ");
	printf("\t GELISTARIHI \n");
	
	for(e=0;e<118;e++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
	
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.odanumarasi,s.isim ,s.adres ,s.telefonnumarasi ,s.uyruk ,s.email,s.kalinacaksure,s.gelistarihi);
	}
	printf("\n");
	for(e=0;e<118;e++)
		printf("-");

	fclose(f);
	getch();
}

void sil()
{
	FILE *f,*t;
	int e=1;
	char odanumarasi[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("ekle.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Otel Veritabanimizdan Silinecek Oda Numarasini Giriniz: \n");
	fflush(stdin);
	scanf("%s",odanumarasi);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.odanumarasi,odanumarasi)==0)
		{       e=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(e==1)
	{       
		printf("\n\n Bu Oda Icin Musteri Kaydi Bulunamadi!!");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("ekle.txt");
	rename("temp.txt","ekle.txt");
	printf("\n\n Musteri Kaydi Basariyla Kaldirildi...");
	fclose(f);
	fclose(t);
	getch();
}

void ara()
{
system("cls");
	FILE *f;
	char odanumarasi[20];
	int flag=1;
	f=fopen("ekle.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Ayrintilari Aramak Icin Musterinin Oda Numarasini Giriniz: \n");
	scanf("%s", odanumarasi);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.odanumarasi,odanumarasi)==0){
			flag=0;
			printf("\n\tKayit Bulundu\n ");
			printf("\nOda Numarasi:\t%s",s.odanumarasi);
			printf("\nIsim:\t%s",s.isim);
			printf("\nAdres:\t%s",s.adres);
			printf("\nTelefon Numarasi:\t%s",s.telefonnumarasi);
			printf("\nUyruk:\t%s",s.uyruk);
			printf("\nEmail:\t%s",s.email);
			printf("\nKalinacak Sure:\t%s",s.kalinacaksure);
			printf("\nGelis Tarihi:\t%s",s.gelistarihi);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tAradýgýnýz Musteri Kaydi Bulunamadi!");
	}
	getch();
	fclose(f);
}

void duzenle()
{
	FILE *f;
	int k=1;
	char odanumarasi[20];
	long int size=sizeof(s);
	if((f=fopen("ekle.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Duzenlemek Istediginiz Oda Numarasini Giriniz:\n\n");
	scanf("%[^\n]",odanumarasi);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.odanumarasi,odanumarasi)==0)
		{
			k=0;
			printf("\nOda Numarasi Giriniz     :");
			gets(s.odanumarasi);
			printf("\nIsim Giriniz    :");
			fflush(stdin);
			scanf("%s",&s.isim);
			printf("\nAdres Giriniz        :");
			scanf("%s",&s.adres);
			printf("\nTelefon Numarasi Giriniz :");
			scanf("%f",&s.telefonnumarasi);
			printf("\nUyrugu Giriniz :");
			scanf("%s",&s.uyruk);
			printf("\nEmail Adresini Giriniz :");
			scanf("%s",&s.email);
			printf("\nKalinacak Tarihi Giriniz  :");
			scanf("%s",&s.kalinacaksure);
			printf("\nGelis Tarihini Giriniz :");
			scanf("%s",&s.gelistarihi);
			fseek(f,size,SEEK_CUR);  
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nKAYIT MEVCUT DEGIL!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tKAYDINIZ BASARIYLA DUZENLENDÝ!!!");
	getch();
}
}

void indirim()
{
	system("cls");
	
	FILE *fp;
	char test;
	fp=fopen("indirim.txt","a+");
	if(fp==0)
	{   fp=fopen("indirim.txt","w+");
		system("cls");
		printf("Veritabanýmýzý bilgisayarýnýza yuklerken lutfen bekleyiniz!!");
		printf("\n Ýslem tamamlandi devam etmek için herhangi bir tusa basin!! ");
		getch();
	}
	while(1){
	system("cls");
	char indirim1,indirim2; 
	int a,b,c,d;
	
	printf("Otelimizde size ozel indirimlerden faydalanmak icin indirimler sayfamizdan size uygun indirimleri bulun.\n");
	printf("Sizde indirimlerden faydalanin.\n\n\n\n");
	
	
	printf("Otelimizi ilk kez mi tercih ediyorsunuz?");
	printf("\nHayir --> 1'e Basiniz");
	printf("\nEvet --> 2'ye Basiniz");
	
	indirim1=getche();
	switch(indirim1)
	{
		case '1':
			
			printf("\n\n\nBizi tekrar tercih ettiginiz icin tesekkurler..\n");
			printf("Bize tekrar gelisinize ozel rezerve edeceginiz oda icin YUZDE 8 indirim kazandiniz.\n\n\n");
			
			
			printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    scanf("%d" ,&a);
		    b= (a*8)/100;
		    printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz.\n\n\n\n" ,a,b);
		    
		    printf("Ogrenciler , yeni evli ciftler ve cocuklu aileler icin ayrica indirimlerden");
		    printf(" faydalanmak icin\nasagidaki kategorileri inceleyiniz.\n\n");
		    
		    printf("Ogrenciler icin --> 1'e basiniz\n");
		    printf("Yeni evli ciftler icin --> 2'ye basiniz\n");
		    printf("Cocuklu aileler icin --> 3'e basiniz\n\n");
		    
		    indirim2=getche();
		    switch(indirim2)
		    {
		    	case '1':
		    		printf("Ogrencilere ozel YUZDE 10 indirim kazandiniz.\n\n\n");
		    		printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    		scanf("%d" ,&c);
		            d= (c*10)/100;
		            printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,c,d);
		            printf("\n\n \tIyi gunlerde kullanin..");
		            break;
		        case '2':
		        	printf("Yeni evli ciftlere ozel YUZDE 5 indirim kazandiniz.\n\n\n");
		    		printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    		scanf("%d" ,&c);
		            d= (c*5)/100;
		            printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,c,d);
		            printf("\n\n \tIyi gunlerde kullanin..");
		            break;
		        case '3':
		        	printf("Cocuklu ailelere ozel YUZDE 5 indirim kazandiniz.\n\n\n");
		    		printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    		scanf("%d" ,&c);
		            d= (c*5)/100;
		            printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,c,d);
		            printf("\n\n \tIyi gunlerde kullanin..");
		            break;
			}
		    break;
		
		case '2':
		    printf("\n\n\nOtelimizi ilk kez tercih etmenize ozel rezerve edeceginiz oda icin YUZDE 8 indirim kazandiniz.\n\n\n ");	
		    
		    
		    printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    scanf("%d" ,&a);
		    b= (a*8)/100;
		    printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,a,b);
		    printf("\n\n\nOgrenciler , yeni evli ciftler ve cocuklu aileler icin ayrica indirimlerden");
		    printf(" faydalanmak icin\nasagidaki kategorileri inceleyiniz.\n\n");
		    
		    printf("Ogrenciler icin --> 1'e basiniz\n");
		    printf("Yeni evli ciftler icin --> 2'ye basiniz\n");
		    printf("Cocuklu aileler icin --> 3'e basiniz\n\n");
		    
		    indirim2=getche();
		    switch(indirim2)
		    {
		    	case '1':
		    		printf("Ogrencilere ozel YUZDE 10 indirim kazandiniz.\n\n\n");
		    		printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    		scanf("%d" ,&c);
		            d= (c*10)/100;
		            printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,c,d);
		            printf("\n\n \tIyi gunlerde kullanin..");
		            break;
		        case '2':
		        	printf("Yeni evli ciftlere ozel YUZDE 5 indirim kazandiniz.\n\n\n");
		    		printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    		scanf("%d" ,&c);
		            d= (c*5)/100;
		            printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,c,d);
		            printf("\n\n \tIyi gunlerde kullanin..");
		            break;
		        case '3':
		        	printf("Cocuklu ailelere ozel YUZDE 5 indirim kazandiniz.\n\n\n");
		    		printf("Alacaginiz indirimi ogrenmek icin odeyeceginiz tutari giriniz.\n");
		    		scanf("%d" ,&c);
		            d= (c*5)/100;
		            printf("\nOtelimizden odeyeceginiz %d TL ucret icin %d TL indirim kazandiniz." ,c,d);
		            printf("\n\n \tIyi gunlerde kullanin..");
		            break;
			}
		    break;
		    }
		    printf("\n\n--------------------------------------------------------------------------------------------------------");
		    printf("\nMenuye donmek icin esc tusuna basiniz. \nTekrar indirimleri gozden gecirmek icin herhangi bir tusa basiniz.");
		    test=getche();
		    if(test==27)
			break;
        }
        fclose(fp);
	}
	
void vip() {
	
	system("cls");
	
	FILE *fk;
	char test;
	fk=fopen("vip.txt","a+");
	if(fk==0)
	{   fk=fopen("vip.txt","w+");
		system("cls");
		printf("Veritabanýmýzý bilgisayarýnýza yuklerken lutfen bekleyiniz!!");
		printf("\n Ýslem tamamlandi devam etmek için herhangi bir tusa basin!! ");
		getch();
	}
	
	while(1){
		system("cls");
		int number;
		printf("Istanbul Gelisim Universitesi 1.sinif Bilgisayar Muhendisligi ogrencisi iseniz okul numaranizin\nilk 6 hanesini giriniz lutfen :");
		scanf("%d" ,&number);
		
		if(number%200403==0) {
			printf("%d Vip bolumunu kullanabilirsiniz,sevgilerle." ,number);
		}
		else {
			printf("%d Vip bolumunu kullanamazsiniz,uzgunuz." ,number);
		}
		printf("\n\n--------------------------------------------------------------------------------------------------------");
		    printf("\nMenuye donmek icin esc tusuna basiniz. \nTekrar gozden gecirmek icin herhangi bir tusa basiniz.");
		    test=getche();
		    if(test==27)
		    break;
			}
	fclose(fk);	
}		

#include <stdio.h>
void senjata(){
  printf("1. Daftar Senjata\n");
  printf("2. Belanja\n");
  printf("3. Keluar\n\n");
}//fungsi printf menu
void tbl(){
  printf("\n----------------------------------------------------\n*\t|\t\t\t\t\t   *\n");
	printf("| No\t|  Daftar Senjata\t|   price Senjata  |\n");
	printf("*\t|\t\t\t\t\t   * \n----------------------------------------------------\n");
  printf("| 1\t|  Nunchaku\t\t|\t80K\t   |\n");
  printf("| 2\t|  Pedang\t\t|\t102K\t   |\n");
  printf("| 3\t|  Kunai\t\t|\t12K\t   |\n");
  printf("| 4\t|  Tongkat\t\t|\t28K\t   |\n");
  printf("| 5\t|  Parang\t\t|\t30k\t   |\n");
  printf("| 6\t|  Busur\t\t|\t60K\t   |\n");
  printf("| 7\t|  Tombak\t\t|\t82K\t   |\n");
  printf("| 8\t|  Trisula\t\t|\t90K\t   |\n");
  printf("| 9\t|  Botol Racun\t\t|\t22K\t   |\n");
  printf("| 10\t|  Tameng\t\t|\t100K\t   |\n");
  printf("----------------------------------------------------\n");
}//fungsi printf table
int main(){
int pil, order, b, ukuran=0, totalprice=0, i=0, uang, tambahan, total[60];
int price[10]={80000,102000,12000,28000,30000,60000,82000,90000,22000,100000};
char get;
do {
printf("\n-----------------------------------------------------\n");
printf("-_-_-Selamat Datang di Toko Senjata Koko Rofenso-_-_-\n");
senjata ();
  do{
    printf("Pilihan Anda : "); 
    scanf(" %d", &pil);
    if(pil<1||pil>3){printf("\n");printf("Maaf, Input Anda Tidak Sesuai !\n");}
  }while (!(pil==1||pil==2||pil==3));
      if (pil==1){
        tbl(); //menampilkan tabel menu jika user memilih pilihan daftar menu
        printf("Tekan Enter untuk melanjutkan..."); 
        getchar();//fungsi press enter untuk melanjutkan
      }else if(pil==2){
        printf("\n");
          do{
            do{
              do{     //fungsi memilih menu
                printf("Inputkan Nomor Senjata : ");
                scanf(" %d", &order);
                if(order<1||order>10){
                    printf("\nMaaf pilihan anda tidak tersedia...\n");}
                }while(!(order==1||order==2||order==3||order==4||order==5||order==6||order==7||order==8||order==9||order==10)); //memastikan input menu tersedia
                  if(order>=1||order<=10){printf("Banyak Senjata Yang Diinginkan : "); 
                  scanf(" %d", &b);printf("\n");}
                    total[i]=price[order-1]*b; i++; //Untuk total array
                    ukuran=ukuran+1; //menjumlahkan total array
            }while(!(order==1||order==2||order==3||order==4||order==5||order==6||order==7||order==8||order==9||order==10));
              do{//fungsi untuk memilih pilihan lain jika pesanan lebih dari 1
              printf("\nApakah anda ingin berbelanja? (y/n)\n => "); scanf(" %c", &get);printf("\n");
              if(!(get=='y'||get=='n')){
              printf("\nMaaf pilihan tidak tersedia !\n");}
            }while(!(get=='y'||get=='n'));//memastikan user menginput y atau n
         }while(get=='y');
            if(get=='n'){
                for(i=0; i < ukuran; i++){
                  totalprice = totalprice + total[i];//fungsi untuk dapat total belanja
                }
                    printf("Total Harga Belanjaan      :Rp. %d\n", totalprice);
                    printf("Masukkan Uang Anda         :Rp.  ");scanf(" %d", &uang);
                if(totalprice<=uang){
                    printf("-----------------------------------------\n");
                    printf("Kembalian Anda             :Rp. %d\n\n", uang-totalprice);
                }else if(totalprice>uang){
                    printf("Nominal uang anda kurang   :Rp. %d\n", totalprice-uang);
                    printf("Masukkan Uang Tambahan     :Rp. ");scanf(" %d", &tambahan);
                    printf("------------------------------------------\n");
                    uang=uang+tambahan;
                    printf("Kembalian Anda         :Rp. %d\n\n",uang-totalprice);
                }
                printf("\n^-^Terima kasih telah berbelanja di toko kami ^-^\n\tSilakan Kembali Lagi !-0_0-!");
                break;
             }
      }else if(pil==3){
        printf("\n^-^Terima kasih telah berkunjung di toko kami ^-^\n\tSilakan Kembali Lagi !-0_0-!\n");
          break;
          //menghentikan program 
      }
  }while(getchar() == '\n');//umtul mengulang seluruh fungsi
printf("\n-----------------------------------------------------\n");
return 0;
}

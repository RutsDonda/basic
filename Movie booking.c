#include<stdio.h>
#include<stdlib.h>

int printsngag(int sngag[10][16]){
  printf("\nSeats of Singham again movie :");
  printf("\n\t\t* * * * * * * * * * * *   S\tC\tR\tE\tE\tN   * * * * * * * * * * * * *");
  printf("\nSilver : \n");
  for(int i=0;i<10;i++){
     for(int j=0;j<16;j++){
        if(j==8) printf("\t");
        if(i==8 && j==0) printf("\nPremium : \n");
        if(i==4 && j==0) printf("\nGold : \n");
        printf("%d\t",sngag[i][j]);
     }
     printf("\n");
  }

}

 int bhool3print(int bhool3[10][16]){
  printf("\nSeats of Bhool Bhualiyaa 3 movie :");
  printf("\n\t\t* * * * * * * * * * * *   S\tC\tR\tE\tE\tN   * * * * * * * * * * * * *");
     printf("\nSilver : \n");
  for(int i=0;i<10;i++){
     for(int j=0;j<16;j++){
        if(j==8) printf("\t");
        if(i==8 && j==0) printf("\nPremium : \n");
        if(i==4 && j==0) printf("\nGold : \n");
        printf("%d\t",bhool3[i][j]);
     }
     printf("\n");
  }
 }

int main(){
int sngag[10][16];
int bhool3[10][16];
  int loop=2;
  int avsngag = 160;
  int avbhol3=160;
  
  while(loop!=0){
    char moviename;
    printf("\n\n                                ===============Hello Buddy!================\n");
    printf("\n                                =======Welcome to Innovative Theater!=======\n");
     printf("\n     **  Price of One Silver seat is 150rp.\n");
     printf("\n     **  Price of One Gold seat is 200rp.\n");
     printf("\n     **  Price of One Premium seat is 250rp.\n");

     printf("\n                       *   For Singham Again movie ticket booking enter:'S'\n");
     printf("\n                       *   For Bhool Bhulaiyaa 3 enter:'B'\n");
     printf("Enter which movie you want :");
     scanf("%c",&moviename);
     if(loop==1) scanf("%c",&moviename);
             

  if(loop==1)
  {
   printf("\nFor Singham Again movie ticket booking enter 'S'\nFor Bhool Bhulaiyaa 3 enter 'B'\n");

    if(moviename=='S'){
       printf("\nTotal avaliable seats for Singham Again movie : %d",avsngag);
       printsngag(sngag);}

  else if(moviename=='B'){
        printf("\nTotal avaliable seats for Bhool Bhulaiya 3 movie : %d\n",avbhol3);
     bhool3print(bhool3);}
  }

  else {
  int slv=1;
  
  printf("\nAvaliable Seats for Singham Again movie : 160\n");

  printf("Avaliable Seats for Bhool Bhulaiyaa 3 movie : 160\n");

  printf("\n\t\t* * * * * * * * * * * *   S\tC\tR\tE\tE\tN   * * * * * * * * * * * * *");
  printf("\nSilver:\n");
  for(int i=0;i<10;i++){
    for(int j=0;j<16;j++){
          if(j==8) printf("\t");
          if(j==0 && i==4) printf("\nGold:\n");
          if(j==0 && i==8) printf("\nPremium:\n");
          sngag[i][j]=slv;
          bhool3[i][j]=slv;
          printf("%d\t",sngag[i][j]);
          slv++;
        }
      printf("\n");
    }
   }

     char name[40];
     long long int phno;
     printf("Enter Your name : ");
     scanf("%s",&name);
     printf("\nEnter your Phone Number : ");
     scanf("%lld", &phno);


      int totsngag;
      printf("\nEnter total No. of seats : ");
      scanf("%d",&totsngag);

    int a[totsngag], row=10,col=16,slvprz=0,gldprz=0,preprz=0,temp;
    for(int i=0;i<totsngag;i++){
       scanf("%d",&a[i]);
           while(a[i]<1 || a[i]>160){
            printf("Enter valid seat number from (1 to 160) : ");
            scanf("%d",&a[i]);
           }
       row=(a[i]-1)/16;
       col=(a[i]-1)%16;

          if(moviename=='S'){
               while(sngag[row][col]==0){
                 printf("seat no %d is already booked re enter seat no : ",a[i]);
                 scanf("%d",&a[i]);
                 row=(a[i]-1)/16;  
                 col=(a[i]-1)%16;
           }
             sngag[row][col]=0; }

             else if(moviename=='B'){
               if(bhool3[row][col]==0){
            printf("Seat no %d is already booked re enter seat no : ",a[i]);
            scanf("%d",&a[i]);
             row=(a[i]-1)/16;  
             col=(a[i]-1)%16;
           }
             bhool3[row][col]=0;
             }
                    if(a[i]<=64) slvprz++;
                    else if(a[i]<=142) gldprz++;
                    else preprz++;
   }
      printf("Name : ");
      puts(name);
      printf("\nPhone No : ");
      printf("%lld", phno);
      printf("\nYou have been booked.....\n   Total Silver seats : %d",slvprz);
      printf("\n   Total Gold seats : %d\n",gldprz);
      printf("   Total Platinum seats : %d\n",preprz);
      if(moviename=='S')  printf("Movie : Singham Again\n");
      else printf("Movie : Bhool Bhulaaiyaa\n");

      printf("Total Amount : %d\nThank you for choosing our theater. Have a nice day.\n",slvprz*150 + gldprz*200 + preprz*250);

      printf("\nEnter 1 for continue booking,\nElse enter zero for exit from booking.\n");
      scanf("%d",&loop);

       if(moviename=='S')
       avsngag=avsngag - totsngag;
       else 
       avbhol3=avbhol3 - totsngag;

       if(loop==0) printsngag(sngag);
       printf("\n");
       if(loop==0) bhool3print(bhool3);
  }
}







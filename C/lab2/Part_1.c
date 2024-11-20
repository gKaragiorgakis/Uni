//GIWRGOS KARAGIWRGAKIS
//A.M.: 2011030053

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int inputs[5][24],i,j,r, flag1,k,l,x,input[9],y,diagonals,h,b,flag2,zero;
    char result[10][15],file_name;
    int m,n;
    printf("Name of file:");
    scanf("%c", file_name);
    fp=fopen("file_name", "r");
    if((fp=fopen( "file_name" , "r" ))!= NULL){                         
          fscanf(fp,"%d%d",&n,&m);
          diagonals=(m+n-1);
          int a[diagonals],t;
          t=0;
          for(k=1;k<=4;k++){
               for(l=0;l<=diagonals;l++){
                    fscanf(fp,"%d",inputs[k][l]);
               }
          }  
          for(i=0;i<=(n-1);i++){
               for(j=0;j<=(m-1);j++){
                    result[i][j]=2;//2 is a neutral value
               }
          }
          //count number of cells for each diagonal
          for(h=0;h<=diagonals;h++){
               if (h<=(n-1)){
                    a[h]=1+h;
               }else if(h>(n-1) && h<=(m-1)){
                    a[h]=n;
               }else{
                    t=t+1;
                    a[h]=n-t;
               }
          }      
          //Fill the table with zeros where is a 0                             
          for(k=0;k<=4;k++){
               for(l=0;l<=diagonals;l++){
                    if(inputs[k][l]==0 && k>0){
                         if(k==1 && l<=(n-1)){                          
                              for(j=0;j<=(m-1);j++){
                                   result[l][j]=0;
                              }
                         }else if(k==3 && l<=(m-1)){ 
                              for(i=0;i<=(n-1);i++){
                                   result[i][l]=0;
                              }
                         }else if(k==2){
                              if (l<=(n-1)){
                                  for(x=0;x<=(n-1);x++){
                                   input[x]=inputs[k][(n-1)-x];
                                  }
                                  for(i=0;i<=(n-1)-x;i++){
                                   result[(n-1)-i][i]=0;
                                  }
                              }else if (l>=n && l<=(m-1)){
                                  for(i=0;i<=(n-1);i++){
                                   result[n-i][i+1]=0;
                                  }
                              }else{
                                  for (y=0;y<=((diagonals+1)-l);y++){
                                   result[(n-1)-y][(m-n-1)+y]=0;
                                  }
                              }
                         }else{
                              if(l<=(n-1)){
                                   for(i=0;i<=l;i++){
                                    result[(n-1)-i][(n-1)-l]=0;
                                   }
                              }else if(l>=n && l<=(m-1)){
                                   for(i=0;i<=(n-1);i++){
                                    result[(n-1)-i][n-i]=0;
                                   }
                              }else{
                                   for(y=0;y<=((diagonals+1)-l);y++){
                                    result[y][y+(((m-1)-(n-1))+1)]=0;
                                   }
                              }
                         }
                                                                                       
                    }
               }
          }
          //Fill the table with 1 where there is the max number of cells                
                          
          for(l=0;l<=diagonals;l++){
               if(inputs[1][l]==m && l<=(n-1)){
                    for(j=0;j<=(m-1);j++){
                         result[l][j]=1;
                    }
               }else if(inputs[3][l]==n && l<=(m-1)){
                    for(i=0;i<=(n-1);i++){
                         result[i][l]==1;
                    }
               }else if(inputs[2][l]!=0){
                    for(h=0;h<=diagonals;h++){
                         if(inputs[2][l]==a[h]){
                              if(l<=(n-1)){
                                   for(x=0;x<=(n-1);x++){
                                    input[x]=inputs[k][(n-1)-x];
                                   }
                                   for(i=0;i<=(n-1)-x;i++){
                                    result[(n-1)-i][i]=1;
                                   }
                              }else if(l>=n && l<=(m-1)){
                                   for(i=0;i<=(n-1);i++){
                                     result[n-i][i+1]=1;
                                   }   
                              }else{
                                  for (y=0;y<=((diagonals)-l);y++){
                                   result[(n-1)-y][(m-n-1)+y]=1;
                                  }
                              }
                         }
                    }
               }
          }                                 
//Count the number of 0 & 1 so I can see the 2
//Then I check if i can replace the 2 with 0 or 1 
//Each time a cell fills the process restart 
                                                                                                                                                             
          flag1=0;
          while(flag1==0){
               b=0;
               flag2=0;
               zero=0;
               while(b<=((n-1)+(m-1)+2*diagonals && flag2==0)){
                    if (b<=(n-1)){
                         for(j=0;j<=(m-1);j++){
                              if(result[b][j]==0){
                               zero=zero+1;
                              }
                         }
                         if ((m-1)-zero==inputs[1][b]){
                              for(j=0;j<=(m-1);j++){
                                   if(result[b][j]!=0){
                                        result[b][j]=1;
                                        flag2=1;
                                   }
                              }
                         }
                    }
                    if(b>(n-1) && b<=((n-1)+(m-1))){
                         for(i=0;i<=(n-1);i++){
                              if(result[i][b-(n-1)]==0){
                                   zero=zero+1;
                              }
                         }
                         if((n-1)-zero==inputs[2][b]){
                              for(i=0;i<=(n-1);i++){
                                   if(result[i][b]!=0){
                                        result[i][b]=1;
                                        flag2=1;
                                   }
                              }
                         }
                    }
                    if(b>((n-1)+(m-1)) && b<=((n-1)+(m-1)+diagonals)){
                         if(b>=(n+m-1) && b<=(n+m-1)+(n-1)){
                              for(i=0;i<=b-(n+m-2);i++){
                                   if(result[(n-1)-i][i]==0){
                                        zero=zero+1;
                                   }
                              }
                              if(inputs[3][b-(n+m-1)]==(a[b-(n+m-1)]-zero)){
                                   for(i=0;i<=(n-1);i++){
                                        if(result[(n-1)-i][i]!=0){
                                             result[(n-1)-i][i]=1;
                                             flag2=1;
                                        }
                                   }
                              }
                         }else if(b>2*n+m-2 && b<=(2*n+m-2)+(m-n)){
                              for(i=0;i<=(n-1);i++){
                                   if(result[(n-1)-i][n-1+i]==0){
                                        zero=zero+1;
                                   }
                              }if(inputs[3][b-(2*n+m-2)]==(a[b-(2*n+m-2)]-zero)){
                                   for(i=0;i<=(n-1);i++){
                                        result[(n-1)-i][n-1+i]=1;
                                        flag2=1;
                                   }
                              }
                         }else if(b>(2*n+m-2)+(m-n) && b<=(2*n+m-2)+(m-n)+(n-1)){
                              for(i=(2*n+m-2)+(m-n);i<=(2*n+m-2)+(m-n)+(n-1);i++){
                                   if (result[(n-1)-i][i]==0){
                                        zero=zero+1;
                                   }
                              }
                              if(inputs[3][b-(2*n+m-2)+(m-n)]==(a[b-(2*n+m-2)+(m-n)]-zero)){
                                   for(i=(2*n+m-2)+(m-n);i<=(2*n+m-2)+(m-n)+(n-1);i++){
                                        result[(n-1)-i][i]=1;
                                        flag2=1;
                                   }
                              }
                         }
                    }       
                   //The check if the table is full        
                    b=b+1;
                    for(i=0;i<=(n-1);i++){
                         for(j=0;j<=(m-1);j++){
                              if(result[i][j]!=2){
                                   flag1=1;
                              }
                         }
                    }
               }
               //Writes in the file
               fp=fopen("inputs.dat","w");                      
               for(i=0;i<=(n-1);i++){
                    for(j=0;j<=(m-1);j++){
                         if(result[i][j]==0){
                              fprintf(fp,"%c",'.');
                         }else{fprintf(fp,"%c",'#');}
                    }
                    printf("\n");
               }                                 
          }
     else{printf("The file failed to open");}                              
     fclose(fp);
     system("PAUSE");
     return 0;   
}

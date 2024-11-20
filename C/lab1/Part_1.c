
//GIWRGOS KARAGIWRGAKIS
//A.M.:2011030053
/*
 * File:   main.c
 * Author: ganest
 *
 * Created on November 29, 2011, 4:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char** argv) 
{
                     
char geneseq[10000] = "cagctgtggtgtcatggtcggtgatcgctagggtgccgagcgcatctcgactgcacggtg\
caccaatgcttctggcgtcaggtagttattggaaagctgtggtatggctgtgcaggtcgt\
aaatcactgcataactcgctgctgcctaaggcgcactcccgttctggataatgttttttg\
cgccgacatcataacggttctggcaaatattctgaaatgagctgttgacaattaatcatc\
gaactagttaactagtacgcaagttcacgtaaaaagggtatcgacaatgaaagcaatttt\
cgtactgaaaggttggtggcgcacttcctgaaacgggcagtgtattcaccatgcgtaaag\
caatcagatacccagcccgcctaatgagcgggcttttttttgaacaaaattagagaataa\
caatgcaaacacaaaaaccgactctcgaactgctaacctgcgaaggcgcttatcgcgaca\
atcccaccgcgctttttcaccagttgtgtggggatcgtccggcaacgctgctgctggaat\
ccgcagatatcgacagcaaagatgatttaaaaagcctgctgctggtagacagtgcgctgc\
gcattacagctttaggtgacactgtcacaatccaggcactttccggcaacggcgaagccc\
tcctggcactactggataacgccctgcctgcgggtgtggaaagtgaacaatcaccaaact\
gccgtgtgctgcgcttcccccctgtcagtccactgctggatgaagacgcccgcttatgct\
ccctttcggtttttgacgctttccgtttattgcagaatctgttgaatgtaccgaaggaag\
aacgagaagccatgttcttcagcggcctgttctcttatgaccttgtggcgggatttgaag\
atttaccgcaactgtcagcggaaaataactgccctgatttctgtttttatctcgctgaaa\
cgctgatggtgattgaccatcagaaaaaaagcacccgtattcaggccagcctgtttgctc\
cgaatgaagaagaaaaacaacgtctcactgctcgcctgaacgaactacgtcagcaactga\
ccgaagccgcgccgccgctgccagtggtttccgtgccgcatatgcgttgtgaatgtaatc\
agagcgatgaagagttcggtggcgtagtgcgtttgttgcaaaaagcgattcgcgctggag\
aaattttccaggtggtgccatctcgccgtttctctctgccctgcccgtcaccgctggcgg\
cctattacgtgctgaaaaagagtaatcccagcccgtacatgttttttatgcaggataatg\
atttcaccctatttggcgcgtcgccggaaagctcgctcaagtatgatgccaccagccgcc\
agattgagatcccccggaattcgagctcgcccggggatcctctagagtcgacctgcagcc\
caagcttatcgatgataagctgtcaaacatgagaattaattcttgaagacgaaagggcct\
cgtgatacgcctatttttataggttaatgtcatgataataatggtttcttagacgtcagg\
tggcacttttcggggaaatgtgcgcggaacccctatttgtttatttttctaaatacattc\
aaatatgtatccgctcatgagacaataaccctgataaatgcttcaataatattgaaaaag\
gaagagtatgagtattcaacatttccgtgtcgcccttattcccttttttgcggcattttg\
ccttcctgtttttgctcacccagaaacgctggtgaaagtaaaagatgctgaagatcagtt\
gggtgcacgagtgggttacatcgaactggatctcaacagcggtaagatccttgagagttt\
tcgccccgaagaacgttttccaatgatgagcacttttaaagttctgctatgtggcgcggt\
attatcccgtgttgacgccgggcaagagcaactcggtcgccgcatacactattctcagaa\
tgacttggttgagtactcaccagtcacagaaaagcatcttacggatggcatgacagtaag\
agaattatgcagtgctgccataaccatgagtgataacactgcggccaacttacttctgac\
aacgatcggaggaccgaaggagctaaccgcttttttgcacaacatgggggatcatgtaac\
tcgccttgatcgttgggaaccggagctgaatgaagccataccaaacgacgagcgtgacac\
cacgatgcctgtagcaatggcaacaacgttgcgcaaactattaactggcgaactacttac\
tctagcttcccggcaacaattaatagactggatggaggcggataaagttgcaggaccact\
tctgcgctcggcccttccggctggctggtttattgctgataaatctggagccggtgagcg\
tgggtctcgcggtatcattgcagcactggggccagatggtaagccctcccgtatcgtagt\
tatctacacgacggggagtcaggcaactatggatgaacgaaatagacagatcgctgagat\
aggtgcctcactgattaagcattggtaactgtcagaccaagtttactcatatatacttta\
gattgatttaaaacttcatttttaatttaaaaggatctaggtgaagatcctttttgataa\
tctcatgaccaaaatcccttaacgtgagttttcgttccactgagcgtcagaccccgtaga\
aaagatcaaaggatcttcttgagatcctttttttctgcgcgtaatctgctgcttgcaaac\
aaaaaaaccaccgctaccagcggtggtttgtttgccggatcaagagctaccaactctttt\
tccgaaggtaactggcttcagcagagcgcagataccaaatactgtccttctagtgtagcc\
gtagttaggccaccacttcaagaactctgtagcaccgcctacatacctcgctctgctaat\
cctgttaccagtggctgctgccagtggcgataagtcgtgtcttaccgggttggactcaag\
acgatagttaccggataaggcgcagcggtcgggctgaacggggggttcgtgcacacagcc\
cagcttggagcgaacgacctacaccgaactgagatacctacagcgtgagcattgagaaag\
cgccacgcttcccgaagggagaaaggcggacaggtatccggtaagcggcagggtcggaac\
aggagagcgcacgagggagcttccagggggaaacgcctggtatctttatagtcctgtcgg\
gtttcgccacctctgacttgagcgtcgatttttgtgatgctcgtcaggggggcggagcct\
atggaaaaacgccagcaacgcggcctttttacggttcctggccttttgctggccttttgc\
tcacatgttctttcctgcgttatcccctgattctgtggataaccgtattaccgcctttga\
gtgagctgataccgctcgccgcagccgaacgaccgagcgcagcgagtcagtgagcgagga\
agcggaagagcgcctgatgcggtattttctccttacgcatctgtgcggtatttcacaccg\
catatggtgcactctcagtacaatctgctctgatgccgcatagttaagccagtatacact\
ccgctatcgctacgtgactgggtcatggctgcgccccgacacccgccaacacccgctgac\
gcgccctgacgggcttgtctgctcccggcatccgcttacagacaagctgtgaccgtctcc\
gggagctgcatgtgtcagaggttttcaccgtcatcaccgaaacgcgcgagg";

 /* your code goes here */
 
int size, y;
char protein[300], aminoacid[300][3];
int i, j, k, l, flag1, flag2, flag3, l1;

//Protein test
do{
       printf("Give the protein\n");
       scanf("%s",  protein);
       size=strlen protein);//Count the number of characters entered by the userr
       flag3=0;//A Flag that the protein should reread
       for(i=0;i<size;i++){
              if  protein[i]<'A' || protein[i]>'Y' || size>300){
                     flag3=1;                
                     break;               
              }
       }
}while(flag3==1);

i=0;

//Find the exact genetics of amino acids
while(i<=9999 && (9999-i)>(size-1) && flag2==0){
       flag2=0;
       flag1=0;
       l1=0;
       for(j=0;j<size;j++){
              aminoacid[j][0]=geneseq[l1];
              aminoacid[j][1]=geneseq[l1+1];
              aminoacid[j][2]=geneseq[l1+2];
              l1=l1+3;
       }
              
       j=1;
              
       while(j<=size && flag1==0){
              l=size;
              while(l>j && flag1==0){
                     if(aminoacid[j][1]==aminoacid[l][1] && aminoacid[j][2]==aminoacid[l][2] && aminoacid[j][0]==aminoacid[l][0] && protein[j]= protein[l]){flag1=1;}
                     l=l-1;
              }
              j=j+1;
       }
       if(flag1==0){
              //Print the amino acid sequence 
              for(j=0;j<size;j++)
              {
                     for(k=0;k<3;k++){printf("%c",aminoacid[j][k]);}
                     printf("\n");
              }
              printf("the position from which the genetic sequence of amino acids begins is: %d\n", i);
              flag2=1;
       }
       else{i=i+1;}
}
if (flag2==0){printf("For the suggestion you made, there is no genetic sequence of amino acids.\n");} 
                              
system ("PAUSE");
return 0;
}
  

 



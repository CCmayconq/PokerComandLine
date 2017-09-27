#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <math.h>

#define VRT   186   // ║
#define HRZ2  205   // ═
#define HRZ1  196   // ─
#define TUP   202   // ╩
#define TDWN  209   // ╤
#define INTR  215   // ╫

#define LLCNR 200
#define LUCNR 201
#define RLCNR 188
#define RUCNR 187

#define LINTR 199
#define RINTR 182

int main(void) {
   int r=0, c,width=35,height=5;

   for(c=0;c<width;c++) { //upper row
      if(c==0) {
         printf("%c",LUCNR);
      }else if(c==(width/2)) {
         printf("%c",TDWN);
      }else if(c==width-1) {
         printf("%c",RUCNR);
      }else
         printf("%c",HRZ2);
   }
   printf("\n");
   for(r=1;r<height-1;r++) {    //middle of the box
      for(c=0;c<width;c++) {
         if(r==height/2) {      //draw the middle line
            if(c==0)
               printf("%c",LINTR);
            else if(c==width/2)
               printf("%c",INTR);
            else if(c==width-1 && r==height/2)
               printf("%c",RINTR);
            else
               printf("%c",HRZ1);
         }else {
            if(c==0 || r==height/2 && c==width-1) {
               printf("%c",VRT);
            }else if(r==1 && c==3 || r==1 && c==5) {
               printf("%c",VRT);
            }else if(r==3 && c==3 || r==3 && c==5) {
               printf("%c",VRT);
            }else if(r>0 && r<height-1) {
               printf("%c",' ');
            }
         }
      }
      printf("\n");
   }
   for(c=0;c<width;c++) { //lower row
      if(c==0) {
         printf("%c",LLCNR);
      }else if(c==(width/2)) {
         printf("%c",TUP);
      }else if(c==width-1) {
         printf("%c",RLCNR);
      }else
         printf("%c",HRZ2);
   }

   printf("\n");
   return 0;
}

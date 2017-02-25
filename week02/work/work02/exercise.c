/*
* Name: Hardyin Alexander
* NPM: 1406565732
* Class: OS-A
* Comment: hell yeah
*/
#define LOOP 7//define me!
#include <stdio.h>
int main() {
 int firstnum, secondnum, i, hasil=0;
 printf("1st number: ");
 scanf("%d", &firstnum);
 printf("2nd number: ");
 scanf("%d", &secondnum);
 for(i=1;i<=secondnum;i++)
 {
  hasil+=firstnum;
 }
 printf("Hasil dari %d kali %d adalah %d ",firstnum, secondnum, hasil);
}

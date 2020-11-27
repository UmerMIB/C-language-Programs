#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
  FILE * pFile;
  int buffer[5] = {1,2,3,4,5};
  pFile = fopen ("myfile.txt", "wb");
  fwrite (buffer , sizeof(int), sizeof(buffer), pFile);
  fclose (pFile);
  return 0;
  getche();
}

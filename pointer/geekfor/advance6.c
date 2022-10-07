#include <unistd.h>
#include <stdio.h>

void fun(int *p) 
{ 
  int q = 10; 
  p = &q; //adresini gönderip burada *p = q yapsaydı yine olurdu.
}     
    
int main() 
{ 
  int r = 20; 
  int *p = &r; 
  fun(p); //pnin adresini değil direkt kendisini göndermiş
  printf("%d", *p); 
  return 0; 
}
// nguon https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html
// vi du
#include <stdio.h>
 
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
 
int main() {
  int kq,n;
  printf(" nhap vao n muon tim trong day fibonacci : ");
  scanf("%d", &n);
  kq = fib(n);
  printf("so fibonacci : %d", kq);
}

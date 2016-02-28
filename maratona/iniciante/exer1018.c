#include <stdio.h>
  
int main() {
    int v, lido, rs;
     
    scanf("%d", &v);
    lido = v;
     
    printf("%d\n", lido);
    rs = v - (v % 100);
    v -= rs;
    printf("%d nota(s) de R$ 100,00\n", (rs/100));
    rs = v - (v % 50);
    v -= rs;
    printf("%d nota(s) de R$ 50,00\n", (rs/50));
    rs = v - (v % 20);
    v -= rs;
    printf("%d nota(s) de R$ 20,00\n", (rs/20));
    rs = v - (v % 10);
    v -= rs;
    printf("%d nota(s) de R$ 10,00\n", (rs/10));
    rs = v - (v % 5);
    v -= rs;
    printf("%d nota(s) de R$ 5,00\n", (rs/5));
    rs = v - (v % 2);
    v -= rs;
    printf("%d nota(s) de R$ 2,00\n", (rs/2));
    rs = v - (v % 1);
    v -= rs;
    printf("%d nota(s) de R$ 1,00\n", (rs/1));
  
    return 0;
}
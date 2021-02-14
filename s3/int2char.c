#include <stdio.h>
#include <stdlib.h>

int main() {
  // malloc : 指定バイト分、メモリを確保する
  // http://www9.plala.or.jp/sgwr-t/lib/malloc.html
  // int32_t : 32bit符号付き整数型
  // https://cpprefjp.github.io/reference/cstdint/int32_t.html
  // sizeof : 型や変数のメモリサイズを調べる
  // http://www.kis-lab.com/serikashiki/C/C03.html

  // int32_t型のメモリサイズ分だけメモリを確保して、*cというポインタに格納
  int32_t *c = malloc(sizeof(int32_t));

  // *cにhexで表現される値をセット→メモリに配置される
  *c = 0x65746166;

  // int型のcをcharにキャストしてstdoutに出力
  printf("%s\n", (char *)c);
}
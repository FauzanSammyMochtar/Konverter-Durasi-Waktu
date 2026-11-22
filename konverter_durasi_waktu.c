#include <stdio.h>

int main() {
  int detik;
  int menit;
  int jam;
  printf("Masukkan jumlah detik: ");
  scanf("%d", &detik);
  jam = detik / 3600;
  menit = detik % 3600 / 60;
  detik = detik % 3600 % 60;
  printf("Hasil konversi: %d jam, %d menit, %d detik", jam, menit, detik);
  return 0;
}

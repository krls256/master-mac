#include "api.h"
#include "parameters.h"
#include "rng.h"
#include "ffi_field.h"
#include "ffi_vec.h"
#include <iostream>
#include <iomanip>

void print_block_space() {
  printf("\n==========================================================================================================\n");
}

template <size_t N>
void print_hex(unsigned char (&bts)[N], std::string input) {
  std::cout << std::endl << input << std::endl;
  for(unsigned long i = 0 ; i < N ; i++) std::cout << std::setfill('0') << std::setw(2) << std::uppercase << std::hex << (0xFF & bts[i]);
  print_block_space();
}

const int SEED_SIZE = 48;

void seed() {
  srand(time(NULL));
  unsigned char seed[SEED_SIZE];
  for(unsigned long i = 0 ; i < SEED_SIZE ; i++) seed[i] = std::rand();
  print_hex(seed, "сід:");

  randombytes_init(seed, NULL, 256);
}

int main() {
  printf("Параметри системи:\n");
  printf("M: %d; N: %d; D: %d; R: %d\n", PARAM_M, PARAM_N, PARAM_D, PARAM_R);
  printf("Параметри безпеки: %d біт\n", PARAM_SECURITY);
  printf("Ймовірність помилки: 2^-%d\n", PARAM_DFR);
  printf("Робота пропонує механізм переда чі випадкових 64х (або більше) байтів до сервера,\n");
  printf("а ці 64 байти можна використовувати як сід для генерації симетричних ключів, це може бути симетриничний ключ,\n");
  printf("переданий через шифр одноразового блокноту, або точно так-же передати відкритий текст");

  seed();

  unsigned char pk[PUBLIC_KEY_BYTES];
  unsigned char sk[SECRET_KEY_BYTES];

  unsigned char ct[CIPHERTEXT_BYTES];
  unsigned char ss1[SHARED_SECRET_BYTES];
  unsigned char ss2[SHARED_SECRET_BYTES];

  print_hex(pk, "публічний ключ до генерації:");
  print_hex(sk, "секретний ключ до генерації:");

  crypto_kem_keypair(pk, sk);
  print_hex(pk, "публічний ключ після генерації:");
  print_hex(sk, "секретний ключ після генерації:");
  printf("Сгенерували ключі тепер уявляємо, що клієнт шифруємо спільний секретний токен:\n");

  print_hex(ct, "шифротекст:");
  print_hex(ss1, "секретний токен 1:");
  print_hex(ss2, "секретний токен 2:");

  crypto_kem_enc(ss1, ct, pk);
  print_hex(ct, "шифротекст після ENC:");
  print_hex(ss1, "секретний токен 1 після ENC (на клієнті):");

  printf("Передаємо шифротекст на сервер:\n");

  crypto_kem_dec(ss2, ct, sk);
  print_hex(ct, "шифротекст після DEC:");
  print_hex(ss2, "секретний токен 2 після DEC (на сервері):");

  printf("На сервері і на клієнті спільні секретні токени!!!\n");
}

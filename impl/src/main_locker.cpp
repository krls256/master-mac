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
  print_hex(seed, "seed:");

  randombytes_init(seed, NULL, 256);
}

int main() {
  printf("M: %d   ", PARAM_M);
  printf("N: %d   ", PARAM_N);
  printf("D: %d   ", PARAM_D);
  printf("R: %d   ", PARAM_R);
  printf("\nSecurity: %d bits", PARAM_SECURITY);
  printf("\nFailure rate: 2^-%d\n", PARAM_DFR);
  printf("Demo:\n");

  seed();

  unsigned char pk[PUBLIC_KEY_BYTES];
  unsigned char sk[SECRET_KEY_BYTES];

  unsigned char ct[CIPHERTEXT_BYTES];
  unsigned char ss1[SHARED_SECRET_BYTES];
  unsigned char ss2[SHARED_SECRET_BYTES];

  print_hex(pk, "public before gen:");
  print_hex(sk, "private before gen:");

  crypto_kem_keypair(pk, sk);
  print_hex(pk, "public after gen:");
  print_hex(sk, "private after gen:");
  print_hex(ct, "cypher text:");
  print_hex(ss1, "secret token 1:");
  print_hex(ss2, "secret token 2:");

  crypto_kem_enc(ss1, ct, pk);
  print_hex(ct, "cypher text after enc:");
  print_hex(ss1, "secret token 1 after enc:");
  print_hex(ss2, "secret token 2 after enc:");

  crypto_kem_dec(ss2, ct, sk);
  print_hex(ct, "cypher text after dec:");
  print_hex(ss1, "secret token 1 after dec:");
  print_hex(ss2, "secret token 2 after dec:");
}

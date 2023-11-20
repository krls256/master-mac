
CC=g++
NO_RNG_WARNING:=-Wno-unused-but-set-variable -Wno-unused-parameter -Wno-sign-compare 
CFLAGS:=-O2 -pedantic -Wall -Wextra -Wno-vla 

HASH_SRC:=lib/hash/hash.c
HASH_INCLUDE:=-I lib/hash -lcrypto

RNG_SRC:=lib/rng/rng.c
RNG_INCLUDE:=-I lib/rng

FFI_SRC:=src/ffi
FFI_INCLUDE:=-I src/ffi -lntl -lgmp

SRC:=src
INCLUDE:=-I src $(FFI_INCLUDE)
MAIN_LOCKER:=src/main_locker.cpp
MAIN_KAT:=src/main_kat.c
LIB:=$(HASH_INCLUDE) $(RNG_INCLUDE)

LOCKER_OBJS:=ffi_field.o ffi_elt.o ffi_vec.o parsing.o decoder.o kem.o 
LOCKER_OBJS_VERBOSE:=ffi_field.o ffi_elt.o ffi_vec.o parsing.o decoder-verbose.o kem-verbose.o

LIB_OBJS:=hash.o rng.o

BUILD:=bin/build
BIN:=bin



folders:
	@echo -e "\n### Creating build folders\n"
	mkdir -p $(BUILD)

hash.o: folders
	@echo -e "\n### Compiling $@ (wrapper around openssl SHA512 implementation)\n"
	$(CC) $(CFLAGS) -c $(HASH_SRC) $(HASH_INCLUDE) -o $(BUILD)/$@

rng.o: folders
	@echo -e "\n### Compiling NIST rng.o\n"
	$(CC) $(CFLAGS) $(NO_RNG_WARNING) -c $(RNG_SRC) $(RNG_INCLUDE) -o $(BUILD)/$@



ffi_%.o: $(FFI_SRC)/ffi_%.cpp | folders
	@echo -e "\n### Compiling $@\n"
	$(CC) $(CFLAGS) -c $< $(FFI_INCLUDE) $(LIB) -o $(BUILD)/$@

%.o: $(SRC)/%.cpp | folders
	@echo -e "\n### Compiling $@\n"
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIB) -o $(BUILD)/$@

%-verbose.o: $(SRC)/%.cpp | folders
	@echo -e "\n### Compiling $@ (verbose mode)\n"
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIB) -D VERBOSE -o $(BUILD)/$@



lockerVIII: $(LOCKER_OBJS) $(LIB_OBJS) | folders
	@echo -e "\n### Compiling LOCKER-VIII\n"
	$(CC) $(CFLAGS) $(MAIN_LOCKER) $(addprefix $(BUILD)/, $^) $(INCLUDE) $(LIB) -o $(BIN)/$@

lockerVIII-kat: $(LOCKER_OBJS) $(LIB_OBJS) | folders
	@echo -e "\n### Compiling LOCKER-VIII KAT\n"
	$(CC) $(CFLAGS) $(MAIN_KAT) $(addprefix $(BUILD)/, $^) $(INCLUDE) $(LIB) -o $(BIN)/$@

lockerVIII-verbose: $(LOCKER_OBJS_VERBOSE) $(LIB_OBJS) | folders
	@echo -e "\n### Compiling LOCKER-VIII (verbose mode)\n"
	$(CC) $(CFLAGS) $(MAIN_LOCKER) $(addprefix $(BUILD)/, $^) $(INCLUDE) $(LIB) -D VERBOSE -o $(BIN)/$@



clean:
	rm -f PQCkemKAT_*
	rm -f vgcore.*
	rm -rf ./bin


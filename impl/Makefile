
CC=g++
NO_RNG_WARNING:=-Wno-unused-but-set-variable -Wno-unused-parameter -Wno-sign-compare 
CFLAGS:=-O2 -pedantic -Wall -Wextra -Wno-vla -Wc++11-long-long -Wunused-parameter

HASH_SRC:=lib/hash/hash.cpp
HASH_INCLUDE:=-I lib/hash -lcrypto -I /usr/local/include

RNG_SRC:=lib/rng/rng.cpp
RNG_INCLUDE:=-I lib/rng -I /usr/local/include

FFI_SRC:=src/ffi
FFI_INCLUDE:=-I src/ffi -lntl -lgmp

SRC:=src
INCLUDE:=-I src $(FFI_INCLUDE)
MAIN_LOCKER:=src/main_locker.cpp
MAIN_KAT:=src/main_kat.cpp
LIB:=$(HASH_INCLUDE) $(RNG_INCLUDE) -L /usr/local/lib

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



lockerI: $(LOCKER_OBJS) $(LIB_OBJS) | folders
	@echo -e "\n### Compiling LOCKER-I\n"
	$(CC) $(CFLAGS) $(MAIN_LOCKER) $(addprefix $(BUILD)/, $^) $(INCLUDE) $(LIB) -o $(BIN)/$@

lockerI-kat: $(LOCKER_OBJS) $(LIB_OBJS) | folders
	@echo -e "\n### Compiling LOCKER-I KAT\n"
	$(CC) $(CFLAGS) $(MAIN_KAT) $(addprefix $(BUILD)/, $^) $(INCLUDE) $(LIB) -o $(BIN)/$@

lockerI-verbose: $(LOCKER_OBJS_VERBOSE) $(LIB_OBJS) | folders
	@echo -e "\n### Compiling LOCKER-I (verbose mode)\n"
	$(CC) $(CFLAGS) $(MAIN_LOCKER) $(addprefix $(BUILD)/, $^) $(INCLUDE) $(LIB) -D VERBOSE -o $(BIN)/$@

build-raw:
	g++ -O2 -pedantic -Wall -Wextra -Wno-vla -Wc++11-long-long -Wunused-parameter src/main_locker.cpp bin/build/ffi_field.o bin/build/ffi_elt.o bin/build/ffi_vec.o bin/build/parsing.o bin/build/decoder.o bin/build/kem.o bin/build/hash.o bin/build/rng.o -I src -I src/ffi -lntl -lgmp -I lib/hash -lcrypto -I /usr/local/include -I lib/rng -I /usr/local/include -L /usr/local/lib -o bin/lockerI



clean:
	rm -f PQCkemKAT_*
	rm -f vgcore.*
	rm -rf ./bin


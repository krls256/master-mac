package src

/*
#cgo LDFLAGS: -L.  -lstdc++ -lntl -lgmp -lcrypto -L../bin/build/
#cgo CFLAGS: -O2 -pedantic -Wall -Wextra -Wno-vla -I. -I ffi -I ../lib/hash -I ../lib/rng
#cgo CXXFLAGS: -I. -std=c++14 -I ffi -I ../lib/rng -I ../lib/hash
#include "main_locker.h"
*/
import "C"

func Run() {
	C.run()
}

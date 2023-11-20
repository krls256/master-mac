+=============================================================================+
|                                                                             |
|               ***********************************************               |
|               *     POST-QUANTUM CRYPTO STANDARDIZATION     *               |
|               ***********************************************               |
|                                                                             |
|=============================================================================|
|                                                                             |
|        Proposal: LOCKER                                                     |
|        Principal Submitters (alphabetical order):                           |
|                  - Nicolas ARAGON                                           |
|                  - Olivier BLAZY                                            |
| [backup contact] - Jean-Christophe DENEUVILLE                               |
| [main contact]   - Philippe GABORIT                                         |
|                  - Adrien HAUTEVILLE                                        |
|                  - Olivier RUATTA                                           |
|                  - Jean-Pierre TILLICH                                      |
|                  - Gilles ZÉMOR                                             |
|                                                                             |
|        Inventors: Same as submitters                                        |
|                                                                             |
|        Developers: Same as submitters                                       |
|                                                                             |
|        Owners: Same as submitters                                           |
|                                                                             |
+=============================================================================+

This archive is a proposal in response to NIST's call for proposal for standar-
dization of quantum-resistant public-key cryptographic algorithms.

LOCKER provides POST-QUANTUM CODE-BASED PUBLIC KEY ENCRYPTION and targets NIST
security levels 1, 3, and 5.

This archive is organized as follows:

===============================================================================

.
├── KATs
│   ├── Optimized_Implementation
│   │   ├── LOCKER-I
│   │   │   ├── lockerI-verbose.txt : Verbose output for LOCKERI
│   │   │   ├── PQCkemKAT_787.req : KAT request for LOCKERI
│   │   │   └── PQCkemKAT_787.rsp : KAT response for LOCKERI
│   │   ├── LOCKER-II
│   │   │   ├── lockerII-verbose.txt : Verbose output for LOCKERII
│   │   │   ├── PQCkemKAT_1119.req : KAT request for LOCKERII
│   │   │   └── PQCkemKAT_1119.rsp : KAT response for LOCKERII
│   │   ├── LOCKER-III
│   │   │   ├── lockerIII-verbose.txt : Verbose output for LOCKERIII
│   │   │   ├── PQCkemKAT_1286.req : KAT request for LOCKERIII
│   │   │   └── PQCkemKAT_1286.rsp : KAT response for LOCKERIII
│   │   ├── LOCKER-IV
│   │   │   ├── lockerIV-verbose.txt : Verbose output for LOCKERIV
│   │   │   ├── PQCkemKAT_1050.req : KAT request for LOCKERIV
│   │   │   └── PQCkemKAT_1050.rsp : KAT response for LOCKERIV
│   │   ├── LOCKER-IX
│   │   │   ├── lockerIX-verbose.txt : Verbose output for LOCKERIX
│   │   │   ├── PQCkemKAT_2238.req : KAT request for LOCKERIX
│   │   │   └── PQCkemKAT_2238.rsp : KAT response for LOCKERIX
│   │   ├── LOCKER-V
│   │   │   ├── lockerV-verbose.txt : Verbose output for LOCKERV
│   │   │   ├── PQCkemKAT_1379.req : KAT request for LOCKERV
│   │   │   └── PQCkemKAT_1379.rsp : KAT response for LOCKERV
│   │   ├── LOCKER-VI
│   │   │   ├── lockerVI-verbose.txt : Verbose output for LOCKERVI
│   │   │   ├── PQCkemKAT_1482.req : KAT request for LOCKERVI
│   │   │   └── PQCkemKAT_1482.rsp : KAT response for LOCKERVI
│   │   ├── LOCKER-VII
│   │   │   ├── lockerVII-verbose.txt : Verbose output for LOCKERVII
│   │   │   ├── PQCkemKAT_1679.req : KAT request for LOCKERVII
│   │   │   └── PQCkemKAT_1679.rsp : KAT response for LOCKERVII
│   │   └── LOCKER-VIII
│   │       ├── lockerVIII-verbose.txt : Verbose output for LOCKERVIII
│   │       ├── PQCkemKAT_1977.req : KAT request for LOCKERVIII
│   │       └── PQCkemKAT_1977.rsp : KAT response for LOCKERVIII
│   └── Reference_Implementation
│       ├── LOCKER-I
│       │   ├── lockerI-verbose.txt : Verbose output for LOCKERI
│       │   ├── PQCkemKAT_787.req : KAT request for LOCKERI
│       │   └── PQCkemKAT_787.rsp : KAT response for LOCKERI
│       ├── LOCKER-II
│       │   ├── lockerII-verbose.txt : Verbose output for LOCKERII
│       │   ├── PQCkemKAT_1119.req : KAT request for LOCKERII
│       │   └── PQCkemKAT_1119.rsp : KAT response for LOCKERII
│       ├── LOCKER-III
│       │   ├── lockerIII-verbose.txt : Verbose output for LOCKERIII
│       │   ├── PQCkemKAT_1286.req : KAT request for LOCKERIII
│       │   └── PQCkemKAT_1286.rsp : KAT response for LOCKERIII
│       ├── LOCKER-IV
│       │   ├── lockerIV-verbose.txt : Verbose output for LOCKERIV
│       │   ├── PQCkemKAT_1050.req : KAT request for LOCKERIV
│       │   └── PQCkemKAT_1050.rsp : KAT response for LOCKERIV
│       ├── LOCKER-IX
│       │   ├── lockerIX-verbose.txt : Verbose output for LOCKERIX
│       │   ├── PQCkemKAT_2238.req : KAT request for LOCKERIX
│       │   └── PQCkemKAT_2238.rsp : KAT response for LOCKERIX
│       ├── LOCKER-V
│       │   ├── lockerV-verbose.txt : Verbose output for LOCKERV
│       │   ├── PQCkemKAT_1379.req : KAT request for LOCKERV
│       │   └── PQCkemKAT_1379.rsp : KAT response for LOCKERV
│       ├── LOCKER-VI
│       │   ├── lockerVI-verbose.txt : Verbose output for LOCKERVI
│       │   ├── PQCkemKAT_1482.req : KAT request for LOCKERVI
│       │   └── PQCkemKAT_1482.rsp : KAT response for LOCKERVI
│       ├── LOCKER-VII
│       │   ├── lockerVII-verbose.txt : Verbose output for LOCKERVII
│       │   ├── PQCkemKAT_1679.req : KAT request for LOCKERVII
│       │   └── PQCkemKAT_1679.rsp : KAT response for LOCKERVII
│       └── LOCKER-VIII
│           ├── lockerVIII-verbose.txt : Verbose output for LOCKERVIII
│           ├── PQCkemKAT_1977.req : KAT request for LOCKERVIII
│           └── PQCkemKAT_1977.rsp : KAT response for LOCKERVIII
├── Optimized_Implementation
│   ├── LOCKER-I
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-II
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-III
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-IV
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-IX
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-V
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-VI
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-VII
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   └── LOCKER-VIII
│       ├── doc
│       │   ├── main_page.txt : Main page for Doxygen documentation
│       │   └── refs.bib : References
│       ├── doxygen.conf : Doxygen configuration file
│       ├── lib
│       │   ├── hash
│       │   │   ├── hash.c : Implementation of hash.h
│       │   │   └── hash.h : SHA512 wrapper
│       │   └── rng
│       │       ├── rng.c : Implementation of rng.h
│       │       └── rng.h : NIST provided randomness routines
│       ├── Makefile : Makefile to compile code
│       └── src
│           ├── api.h : NIST api.h
│           ├── decoder.cpp : Implementation of decoder.h
│           ├── decoder.h : Rank Support Recover Algorithm
│           ├── ffi
│           │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│           │   ├── ffi_elt.h : Computations in GF(2^m)
│           │   ├── ffi_field.cpp : Implementation of ffi_field.h
│           │   ├── ffi_field.h : Parameters for the finite field
│           │   ├── ffi.h : Parameters for the finite field
│           │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│           │   └── ffi_vec.h : Vector over GF(2^m)
│           ├── kem.cpp : Implementation of api.h
│           ├── locker_types.h : Types used for LOCKER
│           ├── main_kat.c : Main file for KAT generation
│           ├── main_locker.cpp : Main file for normal and verbose modes
│           ├── parameters.h : Parameters of the scheme
│           ├── parsing.cpp : Implementation of parsing.h
│           └── parsing.h : Conversion from/to locker_types to/from string
├── README.md : This file
├── Reference_Implementation
│   ├── LOCKER-I
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-II
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-III
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-IV
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-IX
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-V
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-VI
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   ├── LOCKER-VII
│   │   ├── doc
│   │   │   ├── main_page.txt : Main page for Doxygen documentation
│   │   │   └── refs.bib : References
│   │   ├── doxygen.conf : Doxygen configuration file
│   │   ├── lib
│   │   │   ├── hash
│   │   │   │   ├── hash.c : Implementation of hash.h
│   │   │   │   └── hash.h : SHA512 wrapper
│   │   │   └── rng
│   │   │       ├── rng.c : Implementation of rng.h
│   │   │       └── rng.h : NIST provided randomness routines
│   │   ├── Makefile : Makefile to compile code
│   │   └── src
│   │       ├── api.h : NIST api.h
│   │       ├── decoder.cpp : Implementation of decoder.h
│   │       ├── decoder.h : Rank Support Recover Algorithm
│   │       ├── ffi
│   │       │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│   │       │   ├── ffi_elt.h : Computations in GF(2^m)
│   │       │   ├── ffi_field.cpp : Implementation of ffi_field.h
│   │       │   ├── ffi_field.h : Parameters for the finite field
│   │       │   ├── ffi.h : Parameters for the finite field
│   │       │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│   │       │   └── ffi_vec.h : Vector over GF(2^m)
│   │       ├── kem.cpp : Implementation of api.h
│   │       ├── locker_types.h : Types used for LOCKER
│   │       ├── main_kat.c : Main file for KAT generation
│   │       ├── main_locker.cpp : Main file for normal and verbose modes
│   │       ├── parameters.h : Parameters of the scheme
│   │       ├── parsing.cpp : Implementation of parsing.h
│   │       └── parsing.h : Conversion from/to locker_types to/from string
│   └── LOCKER-VIII
│       ├── doc
│       │   ├── main_page.txt : Main page for Doxygen documentation
│       │   └── refs.bib : References
│       ├── doxygen.conf : Doxygen configuration file
│       ├── lib
│       │   ├── hash
│       │   │   ├── hash.c : Implementation of hash.h
│       │   │   └── hash.h : SHA512 wrapper
│       │   └── rng
│       │       ├── rng.c : Implementation of rng.h
│       │       └── rng.h : NIST provided randomness routines
│       ├── Makefile : Makefile to compile code
│       └── src
│           ├── api.h : NIST api.h
│           ├── decoder.cpp : Implementation of decoder.h
│           ├── decoder.h : Rank Support Recover Algorithm
│           ├── ffi
│           │   ├── ffi_elt.cpp : Implementation of ffi_elt.h
│           │   ├── ffi_elt.h : Computations in GF(2^m)
│           │   ├── ffi_field.cpp : Implementation of ffi_field.h
│           │   ├── ffi_field.h : Parameters for the finite field
│           │   ├── ffi.h : Parameters for the finite field
│           │   ├── ffi_vec.cpp : Implementation of ffi_vec.h
│           │   └── ffi_vec.h : Vector over GF(2^m)
│           ├── kem.cpp : Implementation of api.h
│           ├── locker_types.h : Types used for LOCKER
│           ├── main_kat.c : Main file for KAT generation
│           ├── main_locker.cpp : Main file for normal and verbose modes
│           ├── parameters.h : Parameters of the scheme
│           ├── parsing.cpp : Implementation of parsing.h
│           └── parsing.h : Conversion from/to locker_types to/from string
└── Supporting_Documentation
    └── LOCKER_Submission.pdf: Complete specification for our proposal

===============================================================================

The authors did their best to make this archive complete and proper.
    
-------------------------------------------------------------------------------

Important note regarding Intellectual Property.

As requested by the NIST, the statements will be sent to Dustin MOODY at the 
address provided by the NIST (see below) *and/or* given to NIST at the first 
PQC Standardization Conference 

Dustin MOODY
Information Technology Laboratory
Attention: Post-Quantum Cryptographic Algorithm Submissions
100 Bureau Drive – Stop 8930
National Institute of Standards and Technology
Gaithersburg, MD 20899-8930

Please note that in the meantime, electronic copies of these statements have
been included in appendix to the supporting documentation.


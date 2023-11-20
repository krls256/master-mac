 1. SUBMISSION OVERVIEW
 ----------------------

 <b>LOCKER</b> is a post-quantum PKE based on rank metric codes. Both reference implementation and optimized implementation provided for this submission are the same. Nine parameters sets denoted respectively LOCKER-I, II, III, IV, V, VI, VII, VII and IX are provided as explained in the supporting documentation. Each parameter set folder is organized as follows:

 - <b>bin/</b>: Files generated during compilation
 - <b>doc/</b>: Technical documentation of the scheme
 - <b>lib/</b>: Third party libraries used 
 - <b>src/</b>: Source code of the scheme  
 - <b>doxygen.conf</b>: Documentation configuration file
 - <b>configure</b>: Configuration file
 - <b>Makefile</b>: Makefile
 
 <br />
 
 2. INSTALLATION INSTRUCTIONS
 ----------------------------
 
 <h3>2.1 Requirements</h3>

 The following softwares and librairies are required: <b>make</b>, <b>g++</b>, <b>openssl</b>, <b>ntl</b> and <b>gmp</b>.

 <h3>2.2 Compilation Step</h3>

 Let <b>X</b> denotes, for example, <b>I<b>, depending on the parameter set considered. LOCKER can be compiled in three differents ways:
 - Execute <b>make lockerX</b> to compile a working example of the scheme. Run <b>bin/lockerX</b> to execute the scheme and display its performances.
 - Execute <b>make lockerX-kat</b> to compile the NIST KAT generator. Run <b>bin/lockerX-kat</b> to generate KAT files.
 - Execute <b>make lockerX-verbose</b> to compile a working example of the scheme in verbose mode. Run <b>bin/lockerX-verbose</b> to generate intermediate values.

 During compilation, the following files are created inside the <b>bin/build</b> folder:
 - <b>hash.o</b>: A wrapper around openssl SHA512 implementation
 - <b>rng.o</b>: NIST rng
 - <b>ffi_field.o</b>: Functions to manipulate finite fields.
 - <b>ffi_elt.o</b>: Functions to manipulate finite fields elements.
 - <b>ffi_vec.o</b>: Functions to manipulate vectors over finite fields.
 - <b>parsing.o</b>: Functions to parse public key, secret key and ciphertext of the scheme.
 - <b>decoder.o</b>: Functions to solve the cyclic-support error decoding problem (either in normal mode or verbose mode).
 - <b>kem.o</b>: The LOCKER scheme (either in normal mode or verbose mode).

<br />

 3. DOCUMENTATION GENERATION
 ---------------------------

 <h3>3.1 Requirements</h3>

 The following softwares are required: <b>doxygen</b> and <b>bibtex</b>.

 <h3>3.2 Generation Step</h3>

 - Run <b>doxygen doxygen.conf</b> to generate the code documentation
 - Browse <b>doc/html/index.html</b> to read the documentation

<br />

 4. ADDITIONAL INFORMATIONS
 --------------------------

 <h3>4.1 Implementation overview</h3>

 The <b>LOCKER</b> scheme is defined in the api.h and parameters.h files and implemented in kem.cpp.
 During the decapsulation step, it uses a cyclic-support error decoder based on LRPC codes (see decoder.h and decoder.cpp). 
 The files ffi.h, ffi_field.h, ffi_elt.h, ffi_vec.h, ffi_field.cpp, ffi_elt.cpp and ffi_vec.cpp provide the functions performing the various operations over finite fields required by the scheme.
 As public key, secret key and ciphertext can manipulated either with theirs mathematical representations or as bit strings, the files parsing.h and parsing.cpp provide functions to switch between these two representations.
 Finally, the files hash.h, rng.h, <b>hash.c</b> and <b>rng.c</b> (inside the <b>lib/</b> folder) contain respectively a wrapper around OpenSSL SHA512 implementation and the NIST random functions.  

 <h3>4.2 Finite field interface</h3>

 LOCKER is a rank-based scheme and as such heavily relies on finite field arithmetic. 
 We have provided an interface for finite fields (through files ffi.h, ffi_field.h, ffi_elt.h and ffi_vec.h) describing the various operations required by the scheme. 
 In this submission, the <b>f</b>inite <b>f</b>ield <b>i</b>nterface (<b>ffi</b>) is implemented using the NTL library \cite shoup2001ntl but one should note that LOCKER can work with any implementation of our finite field interface as long as its API is respected. 
 
 In the context of our ffi interface, a finite field always describes an extension of a binary field namely a finite field of the form GF(2^m).
 The ffi interface works as follows:
 - <b>ffi.h</b>: Constants that defines the considered finite field ;
 - <b>ffi_field.h</b>: Functions to initialize finite fields ;
 - <b>ffi_elt.h</b>: Functions to manipulate elements of GF(2^m) ;
 - <b>ffi_vec.h</b>: Functions to manipulate either vectors over GF(2^m) or vector spaces spanned by a vector over GF(2^m).
 
 In addition, the <b>ffi_elt</b> and <b>ffi_vec</b> types are respectively implemented as NTL <b>GF2E</b> and <b>GF2EX</b> types.

 <h3>4.3 Public key, secret key, ciphertext and shared secret</h3>

 The representation we choose to store the vectors as bit strings may contain unecessary zeros that can be removed if necessary.
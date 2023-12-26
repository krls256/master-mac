FROM ubuntu

COPY . /app
WORKDIR /app

RUN apt-get update
RUN apt-get -y install g++
RUN apt-get -y install perl
RUN apt-get -y install make
RUN apt-get -y install m4
RUN apt-get -y install openssl
RUN apt-get -y install libssl-dev
RUN apt-get -y install libgmp-dev
RUN apt-get -y install libntl-dev
RUN #cd /app/arch/gmp-6.3.0/ && ./configure && make && make install
RUN #cd /app/arch/ntl-10.3.0/src/ && ./configure && make && make install
RUN cd /app/

RUN make folders
RUN make hash.o
RUN make rng.o
RUN make lockerI

CMD ["./bin/lockerI"]
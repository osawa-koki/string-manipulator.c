FROM ubuntu:22.04
WORKDIR /src
RUN apt update -y && apt install build-essential cmake -y
COPY . .
RUN cmake -S . -B build && cmake --build build
CMD ["./build/src/a.out"]

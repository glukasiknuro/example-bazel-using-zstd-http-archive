#include <stdio.h>
#include <stdlib.h>
#include <fake-prefix-to-assure-external-used/lib/zstd.h>

int main(int argc, char** argv) {
    printf("Got ZSTD version: %d\n", ZSTD_VERSION_NUMBER);
    exit(ZSTD_VERSION_NUMBER != 10405);
}

// Copyright (c) C-Web, under licence CC BY-NC-SA 4.0, created by Capitaine_steeve78 the 31/12/2025

# include <packet.h>
#include <stdio.h>

int main() {
    Packet packet;
    packet.type = 1;
    packet.length = 0;

    printf("packet type: %d\n", packet.type);
    printf("length: %d\n", packet.length);

    return 0;
}

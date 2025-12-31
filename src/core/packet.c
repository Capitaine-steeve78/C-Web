// © 2025 C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

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

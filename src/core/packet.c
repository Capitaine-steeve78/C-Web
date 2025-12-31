// © 2025 C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

# include "packet.h"
#include <string.h>
#include <stdio.h>

int main() {

    Packet packet = {0};
    Metadata metadata = {0};

    strcpy(metadata.protocol, "CWP");
    metadata.type = 1;
    strcpy(metadata.version, "0.0.0.1");
    strcpy(metadata.ver_compat, "0.0.0.1, 0.0.0.1");
    strcpy(metadata.from, "001.001.001");
    strcpy(metadata.to, "001.001.002");

    packet.metadata = metadata;
    packet.length = 5;
    memcpy(packet.payload, "Hello", packet.length);


    printf("Protocol: %s\n", packet.metadata.protocol);
    printf("Version: %s\n", packet.metadata.version);
    printf("Ver Compat: %s\n", packet.metadata.ver_compat);
    printf("From: %s\n", packet.metadata.from);
    printf("To: %s\n", packet.metadata.to);
    printf("Payload: %.*s\n", packet.length, packet.payload);
    return 0;
}

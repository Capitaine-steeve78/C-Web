// © 2025 C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

#ifndef C_WEB_PACKET_H
#define C_WEB_PACKET_H

# include <stdint.h>
#define MAX_PAYLOAD 256

typedef struct {
    char protocol[4];
    char version[8];
    uint8_t type;
    char ver_compat[20];
    char from[64];
    char to[64];
}Metadata;
typedef struct {
    Metadata metadata;
    uint16_t length;
    uint8_t payload[MAX_PAYLOAD];
}Packet;

#endif //C_WEB_PACKET_H
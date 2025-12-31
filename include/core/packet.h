// © $today.year C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

#ifndef C_WEB_PACKET_H
#define C_WEB_PACKET_H

# include <stdint.h>
#define MAX_PAYLOAD 256

typedef struct {
    uint8_t type;
    uint16_t length;
    uint8_t payload[MAX_PAYLOAD];
}Packet;

#endif //C_WEB_PACKET_H
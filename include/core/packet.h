// Copyright (c) C-Web, under licence CC BY-NC-SA 4.0, created by Capitaine_steeve78 the 31/12/2025

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
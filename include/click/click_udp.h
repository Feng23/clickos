#ifndef CLICK_UDP_H
#define CLICK_UDP_H

/*
 * click_udp.h -- our own definition of the UDP header
 * based on a file from one of the BSDs
 */

struct click_udp {
    uint16_t uh_sport;
    uint16_t uh_dport;
    uint16_t uh_ulen;
    uint16_t uh_sum;
};

#endif

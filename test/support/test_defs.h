/*
 *  Copyright (C) 2021 Express VPN International Ltd.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef HE_TEST_DEFS
#define HE_TEST_DEFS

#define FIXTURE_FATAL_ERROR -1

char *bad_string_too_long = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

char *good_username = "fsdfkjsfrwejkr";
char *good_password = "dsgfdfgghgfhgf";

uint8_t fake_cert[] = {0x10, 0x11, 0x12, 0x13, 0x14};

uint8_t empty_data[1500] = {0};

uint8_t fake_ipv4_packet[] = {0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

uint8_t bad_fake_ipv4_packet[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

uint8_t fake_he_packet[] = {0x48, 0x65, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

uint8_t fake_he_packet_session_reject[] = {0x48, 0x65, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
                                           0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

uint16_t calculate_wolf_mtu(uint16_t he_mtu) {
  return he_mtu - HE_PACKET_OVERHEAD + HE_WOLF_MAX_HEADER_SIZE;
}

int call_counter;

he_return_code_t write_cb(he_conn_t *conn, uint8_t *packet, size_t length, void *context) {
  call_counter++;
  return HE_SUCCESS;
}

he_return_code_t state_cb(he_conn_t *conn, he_client_state_t new_state, void *context) {
  call_counter++;
  return HE_SUCCESS;
}

he_return_code_t nudge_time_cb(he_conn_t *conn, int timeout, void *context) {
  call_counter++;
  return HE_SUCCESS;
}

he_return_code_t network_config_ipv4_cb(he_conn_t *conn, he_network_config_ipv4_t *config,
                                        void *context) {
  call_counter++;
  return HE_SUCCESS;
}

he_return_code_t state_change_cb(he_conn_t *conn, he_client_state_t new_state, void *context) {
  call_counter++;
  return HE_SUCCESS;
}

he_return_code_t event_cb(he_conn_t *conn, he_client_event_t event, void *context) {
  call_counter++;
  return HE_SUCCESS;
}

bool auth_cb(he_conn_t *conn, char const *username, char const *password, void *context) {
  call_counter++;
  return HE_SUCCESS;
}

he_return_code_t pop_network_config_cb(he_conn_t *conn, he_network_config_ipv4_t *config,
                                       void *context) {
  call_counter++;
  return HE_SUCCESS;
}

#endif  // HE_TEST_DEFS

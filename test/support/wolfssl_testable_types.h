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

#ifndef WOLFSSL_TESTABLE_TYPES
#define WOLFSSL_TESTABLE_TYPES

//        #define WOLFSSL_API   __attribute__ ((visibility("default")))
//        #define WOLFSSL_LOCAL __attribute__ ((visibility("hidden")))

#define WOLFSSL_API
#define WOLFSSL_LOCAL

typedef struct WOLFSSL {
  int id;
} WOLFSSL;

typedef struct WOLFSSL_CTX {
  int id;
} WOLFSSL_CTX;

struct WOLFSSL_CERT_MANAGER {
  int id;
};

struct WOLFSSL_X509 {
  int id;
};

struct WOLFSSL_X509_CRL {
  int id;
};

struct WOLFSSL_X509_NAME {
  int id;
};

struct WOLFSSL_X509_NAME_ENTRY {
  int id;
};

struct WOLFSSL_X509_CHAIN {
  int id;
};

struct WOLFSSL_X509_VERIFY_PARAM {
  int id;
};

struct WOLFSSL_CRL {
  int id;
};

struct WOLFSSL_STACK {
  int id;
};

struct WOLFSSL_CIPHER {
  int id;
};

struct WOLFSSL_METHOD {
  int id;
};

struct WOLFSSL_CHAIN {
  int id;
};

struct WOLFSSL_SESSION {
  int id;
};

struct WOLFSSL_DH {
  int id;
};

struct WOLFSSL_RSA {
  int id;
};

struct WC_PKCS12 {
  int id;
};

struct WOLFSSL_EVP_MD_CTX {
  int id;
};

#endif

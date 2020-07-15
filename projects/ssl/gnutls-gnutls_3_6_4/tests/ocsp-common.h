/*
 * Copyright (C) 2017 Red Hat, Inc.
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GnuTLS.
 *
 * The GnuTLS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#ifndef OCSP_COMMON_H
#define OCSP_COMMON_H

#if defined __clang__ || __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
#  pragma GCC diagnostic push
#  pragma GCC diagnostic ignored "-Wunused-variable"
#endif

/* Date for responses to be valid */
#define OCSP_RESP_DATE 1508329639

/* ocsp response with unknown status for
 * server_ca3_localhost6_cert. Signed with
 * RSA-SHA256.
 */
static const char _ocsp_ca3_localhost6_unknown[] = {
	0x30, 0x82, 0x02, 0x3A, 0x0A, 0x01, 0x00, 0xA0,
	0x82, 0x02, 0x33, 0x30, 0x82, 0x02, 0x2F, 0x06,
	0x09, 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x30,
	0x01, 0x01, 0x04, 0x82, 0x02, 0x20, 0x30, 0x82,
	0x02, 0x1C, 0x30, 0x81, 0x85, 0xA1, 0x14, 0x30,
	0x12, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x13, 0x07, 0x73, 0x75, 0x62, 0x43,
	0x41, 0x2D, 0x33, 0x18, 0x0F, 0x32, 0x30, 0x31,
	0x37, 0x31, 0x30, 0x31, 0x38, 0x31, 0x32, 0x32,
	0x30, 0x34, 0x39, 0x5A, 0x30, 0x5C, 0x30, 0x5A,
	0x30, 0x45, 0x30, 0x09, 0x06, 0x05, 0x2B, 0x0E,
	0x03, 0x02, 0x1A, 0x05, 0x00, 0x04, 0x14, 0xB2,
	0xE6, 0x5C, 0x8E, 0x6E, 0x83, 0x4B, 0xBD, 0x11,
	0xD9, 0x97, 0xFA, 0x36, 0x93, 0x59, 0x9E, 0xAD,
	0x5C, 0x15, 0xC4, 0x04, 0x14, 0x9E, 0x91, 0xEC,
	0x8C, 0xAA, 0x24, 0x5B, 0x22, 0xE0, 0xE8, 0x11,
	0xE8, 0xE9, 0xA4, 0x91, 0xB5, 0x91, 0x26, 0x00,
	0xF1, 0x02, 0x0C, 0x57, 0xA3, 0x1D, 0x32, 0x37,
	0x64, 0x58, 0xFA, 0x7B, 0x52, 0x6F, 0xD7, 0x82,
	0x00, 0x18, 0x0F, 0x32, 0x30, 0x31, 0x37, 0x31,
	0x30, 0x31, 0x38, 0x31, 0x32, 0x32, 0x30, 0x34,
	0x39, 0x5A, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86,
	0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x0B, 0x05,
	0x00, 0x03, 0x82, 0x01, 0x81, 0x00, 0x98, 0x3C,
	0xFF, 0xD1, 0x76, 0x93, 0xB0, 0xDD, 0x42, 0xCA,
	0x8C, 0x7D, 0x4F, 0x9F, 0xE7, 0x78, 0x14, 0x1D,
	0x90, 0x25, 0x67, 0x34, 0x51, 0x3C, 0xF6, 0x10,
	0x7E, 0xB9, 0x8C, 0x19, 0xF4, 0x9A, 0x32, 0x6A,
	0xFD, 0x5B, 0x77, 0xE9, 0x0A, 0xB2, 0xCD, 0x31,
	0x5E, 0x0F, 0x5B, 0x11, 0xA7, 0x75, 0x38, 0x7B,
	0x01, 0xFA, 0x2B, 0x68, 0x2C, 0x14, 0x6F, 0xAF,
	0x90, 0xC9, 0x69, 0x67, 0x13, 0x70, 0x78, 0x51,
	0x44, 0x0B, 0xA6, 0x16, 0x84, 0x6B, 0x09, 0xC3,
	0x27, 0xFF, 0x06, 0x25, 0x90, 0x27, 0x08, 0x87,
	0x23, 0xCB, 0x1A, 0x56, 0x61, 0x9E, 0x28, 0x9C,
	0x42, 0x19, 0xEA, 0x93, 0x7C, 0x05, 0x14, 0x04,
	0x7F, 0xC7, 0x1C, 0x40, 0xDD, 0x35, 0xC6, 0x50,
	0x79, 0x46, 0xD7, 0x6A, 0xB1, 0x59, 0xAF, 0xC6,
	0xDA, 0x0C, 0xD2, 0x1B, 0xAC, 0x3B, 0x46, 0x09,
	0x0E, 0x7B, 0x02, 0xC3, 0x01, 0x55, 0x5E, 0xE9,
	0x4F, 0x10, 0x58, 0x16, 0xB8, 0x54, 0xA8, 0x54,
	0xBB, 0x31, 0xEB, 0x99, 0x64, 0x73, 0xEE, 0x3F,
	0x44, 0xCE, 0xBB, 0xF9, 0x0A, 0xDB, 0x36, 0x90,
	0x51, 0x80, 0xAA, 0xE1, 0x6F, 0xC3, 0x00, 0x13,
	0x65, 0x80, 0x36, 0x3A, 0x63, 0x48, 0x05, 0x52,
	0x7F, 0x91, 0x96, 0xB0, 0x7F, 0x53, 0xFC, 0x5D,
	0x87, 0x0C, 0x6E, 0x5C, 0xAC, 0x0A, 0x45, 0x22,
	0x83, 0x72, 0xC0, 0xAF, 0x5E, 0xDB, 0x5C, 0xE4,
	0xA9, 0x80, 0x16, 0x43, 0xAB, 0x55, 0x72, 0x9B,
	0x37, 0x41, 0xBB, 0xEF, 0x20, 0x45, 0xD5, 0xCB,
	0xF8, 0xCE, 0xA9, 0x50, 0x12, 0x79, 0xAC, 0x6E,
	0xC0, 0x79, 0xA4, 0x74, 0x1C, 0xF8, 0x48, 0xD4,
	0xFC, 0xDC, 0xBB, 0xDA, 0x36, 0x72, 0x46, 0x05,
	0x32, 0x97, 0x4C, 0x6B, 0xA4, 0x3C, 0xA0, 0x0E,
	0xB7, 0xAC, 0x49, 0xA4, 0x52, 0xF0, 0xAC, 0xD5,
	0x8D, 0x86, 0x07, 0xDB, 0xC3, 0x67, 0xE4, 0x95,
	0x62, 0x52, 0x33, 0x33, 0x2D, 0x00, 0x49, 0x23,
	0xCC, 0x12, 0x62, 0xFB, 0x89, 0x27, 0xD5, 0x27,
	0xCB, 0x75, 0xC4, 0xCB, 0x60, 0x17, 0xFD, 0x4E,
	0x7A, 0x2A, 0xD7, 0x0B, 0x09, 0x84, 0x03, 0x20,
	0x38, 0x53, 0x73, 0x71, 0x66, 0xFC, 0x64, 0x9C,
	0x6E, 0x1A, 0x1E, 0xC5, 0x5E, 0x0C, 0xAD, 0x9D,
	0xE3, 0x37, 0xF2, 0xC2, 0xFC, 0xA1, 0x31, 0x26,
	0x2C, 0xA1, 0xDF, 0x05, 0x19, 0xD6, 0x18, 0xE8,
	0x25, 0x7C, 0x23, 0x23, 0xDE, 0x89, 0x6F, 0x5E,
	0x98, 0xE8, 0xB6, 0xB2, 0x25, 0x28, 0x30, 0x12,
	0x19, 0xB1, 0x84, 0x95, 0x8F, 0x8F, 0x65, 0x75,
	0x2D, 0x90, 0xA8, 0x8D, 0xD9, 0xC3, 0x40, 0x79,
	0xC8, 0xC8, 0xA1, 0xDC, 0xD0, 0x16, 0x02, 0xFE,
	0x60, 0xBE, 0xA3, 0x58, 0xA2, 0xC4, 0xBA, 0xE5,
	0x86, 0x4F, 0xF3, 0x2F, 0x46, 0xB9, 0x62, 0x2F,
	0xCD, 0xE4, 0x1A, 0x62, 0x83, 0x76
};

const char _ocsp_ca3_localhost6_unknown_pem[] =
	"-----BEGIN OCSP RESPONSE-----\n"
	"MIICOgoBAKCCAjMwggIvBgkrBgEFBQcwAQEEggIgMIICHDCBhaEUMBIxEDAOBgNV\n"
	"BAMTB3N1YkNBLTMYDzIwMTcxMDE4MTIyMDQ5WjBcMFowRTAJBgUrDgMCGgUABBSy\n"
	"5lyOboNLvRHZl/o2k1merVwVxAQUnpHsjKokWyLg6BHo6aSRtZEmAPECDFejHTI3\n"
	"ZFj6e1Jv14IAGA8yMDE3MTAxODEyMjA0OVowDQYJKoZIhvcNAQELBQADggGBAJg8\n"
	"/9F2k7DdQsqMfU+f53gUHZAlZzRRPPYQfrmMGfSaMmr9W3fpCrLNMV4PWxGndTh7\n"
	"AforaCwUb6+QyWlnE3B4UUQLphaEawnDJ/8GJZAnCIcjyxpWYZ4onEIZ6pN8BRQE\n"
	"f8ccQN01xlB5RtdqsVmvxtoM0husO0YJDnsCwwFVXulPEFgWuFSoVLsx65lkc+4/\n"
	"RM67+QrbNpBRgKrhb8MAE2WANjpjSAVSf5GWsH9T/F2HDG5crApFIoNywK9e21zk\n"
	"qYAWQ6tVcps3QbvvIEXVy/jOqVASeaxuwHmkdBz4SNT83LvaNnJGBTKXTGukPKAO\n"
	"t6xJpFLwrNWNhgfbw2fklWJSMzMtAEkjzBJi+4kn1SfLdcTLYBf9Tnoq1wsJhAMg\n"
	"OFNzcWb8ZJxuGh7FXgytneM38sL8oTEmLKHfBRnWGOglfCMj3olvXpjotrIlKDAS\n"
	"GbGElY+PZXUtkKiN2cNAecjIodzQFgL+YL6jWKLEuuWGT/MvRrliL83kGmKDdg==\n"
	"-----END OCSP RESPONSE-----";

static gnutls_datum_t ocsp_ca3_localhost6_unknown = {
	(void *)_ocsp_ca3_localhost6_unknown,
	    sizeof(_ocsp_ca3_localhost6_unknown)
};

static gnutls_datum_t ocsp_ca3_localhost6_unknown_pem = {
	(void *)_ocsp_ca3_localhost6_unknown_pem,
	    sizeof(_ocsp_ca3_localhost6_unknown_pem)-1
};

/* ocsp response with unknown status for
 * server_ca3_localhost_cert. Signed with
 * RSA-SHA512.
 */
static const char _ocsp_ca3_localhost_unknown[] = {
	0x30, 0x82, 0x06, 0x53, 0x0A, 0x01, 0x00, 0xA0,
	0x82, 0x06, 0x4C, 0x30, 0x82, 0x06, 0x48, 0x06,
	0x09, 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x30,
	0x01, 0x01, 0x04, 0x82, 0x06, 0x39, 0x30, 0x82,
	0x06, 0x35, 0x30, 0x81, 0x85, 0xA1, 0x14, 0x30,
	0x12, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x13, 0x07, 0x73, 0x75, 0x62, 0x43,
	0x41, 0x2D, 0x33, 0x18, 0x0F, 0x32, 0x30, 0x31,
	0x37, 0x31, 0x30, 0x31, 0x38, 0x31, 0x32, 0x30,
	0x39, 0x33, 0x30, 0x5A, 0x30, 0x5C, 0x30, 0x5A,
	0x30, 0x45, 0x30, 0x09, 0x06, 0x05, 0x2B, 0x0E,
	0x03, 0x02, 0x1A, 0x05, 0x00, 0x04, 0x14, 0xB2,
	0xE6, 0x5C, 0x8E, 0x6E, 0x83, 0x4B, 0xBD, 0x11,
	0xD9, 0x97, 0xFA, 0x36, 0x93, 0x59, 0x9E, 0xAD,
	0x5C, 0x15, 0xC4, 0x04, 0x14, 0x9E, 0x91, 0xEC,
	0x8C, 0xAA, 0x24, 0x5B, 0x22, 0xE0, 0xE8, 0x11,
	0xE8, 0xE9, 0xA4, 0x91, 0xB5, 0x91, 0x26, 0x00,
	0xF1, 0x02, 0x0C, 0x57, 0xA3, 0x1D, 0x32, 0x36,
	0xC8, 0x0C, 0xA1, 0xCA, 0xB0, 0xBD, 0xF6, 0x82,
	0x00, 0x18, 0x0F, 0x32, 0x30, 0x31, 0x37, 0x31,
	0x30, 0x31, 0x38, 0x31, 0x32, 0x30, 0x39, 0x33,
	0x30, 0x5A, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86,
	0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x0D, 0x05,
	0x00, 0x03, 0x82, 0x01, 0x81, 0x00, 0x56, 0x64,
	0x2B, 0x10, 0xAA, 0xE7, 0x26, 0x7F, 0xF1, 0x7F,
	0x86, 0x97, 0x0E, 0x18, 0xB4, 0x75, 0x92, 0x65,
	0x12, 0x2B, 0x46, 0x9F, 0x3E, 0x96, 0x98, 0xE4,
	0xAB, 0x10, 0xD1, 0x0E, 0xEA, 0x08, 0xE2, 0xA5,
	0x01, 0x75, 0xA4, 0x5B, 0x76, 0xAC, 0x49, 0x2B,
	0x9E, 0xF1, 0x4A, 0xF2, 0x79, 0x3A, 0x4E, 0x15,
	0x81, 0xFF, 0x4D, 0xD3, 0x65, 0x8E, 0xAE, 0x4A,
	0xBB, 0x33, 0x35, 0x8B, 0x0F, 0xB6, 0x5D, 0x32,
	0xEF, 0xF5, 0xE1, 0x25, 0xBF, 0xBD, 0x52, 0x1D,
	0x99, 0xF2, 0x34, 0xE0, 0xFB, 0x38, 0x34, 0x6C,
	0x9A, 0xEF, 0x53, 0xB2, 0x90, 0xC6, 0xFB, 0x75,
	0xA0, 0x8C, 0xBC, 0x6B, 0x8E, 0xD8, 0xDE, 0x33,
	0xE4, 0x6F, 0xF2, 0xAD, 0xF2, 0xA2, 0x4F, 0xC2,
	0x58, 0x47, 0xE2, 0x68, 0x6D, 0x3A, 0x3A, 0xB3,
	0x0A, 0x82, 0x3D, 0xA4, 0x85, 0x00, 0x58, 0x3E,
	0x00, 0x35, 0x9D, 0x6B, 0x1F, 0xFF, 0x9F, 0xAE,
	0xB0, 0x9A, 0xE2, 0xC7, 0x0E, 0x9A, 0xB3, 0x7C,
	0x52, 0xE9, 0xDA, 0x50, 0x57, 0x35, 0x72, 0x71,
	0x81, 0xA7, 0xC0, 0x40, 0x28, 0xEA, 0x2B, 0xCE,
	0x09, 0x47, 0x1D, 0xB1, 0x80, 0x41, 0x59, 0xF6,
	0x5D, 0xD3, 0x3C, 0xEA, 0x11, 0xD8, 0x13, 0xB9,
	0x0F, 0x32, 0x6A, 0x29, 0x72, 0xBE, 0xC1, 0xC3,
	0x1B, 0xB5, 0x4C, 0x4D, 0x0D, 0xA1, 0xD5, 0xF0,
	0xC4, 0xEC, 0xC5, 0x5A, 0x93, 0x41, 0x7A, 0x01,
	0x24, 0xB3, 0x7A, 0x71, 0x82, 0xA3, 0xC6, 0x08,
	0x42, 0x91, 0x0E, 0x6B, 0xE7, 0x86, 0x0B, 0xAF,
	0xBE, 0xDF, 0x07, 0x5A, 0x8C, 0x35, 0xF8, 0x5F,
	0x7F, 0x2F, 0x60, 0x04, 0xDD, 0x2A, 0xF2, 0x0D,
	0xC0, 0x1C, 0x6F, 0xA0, 0x30, 0x80, 0xA4, 0x35,
	0x83, 0xD3, 0xC3, 0xCC, 0x35, 0x46, 0x36, 0xEB,
	0xE9, 0xB1, 0x3C, 0x08, 0x8F, 0xCC, 0x5D, 0xCA,
	0xD9, 0xAF, 0x3E, 0xD4, 0x58, 0xBB, 0x90, 0x5D,
	0xEF, 0x01, 0x9C, 0xD9, 0x3E, 0x56, 0x7E, 0xCF,
	0x13, 0xAA, 0x11, 0xC4, 0x22, 0xD2, 0xA0, 0x9F,
	0x1B, 0xE9, 0xF0, 0x78, 0x70, 0x3B, 0xCC, 0x21,
	0x7D, 0x6B, 0x46, 0x97, 0x3F, 0x3B, 0x0C, 0x5B,
	0x8F, 0xA8, 0x28, 0x72, 0x4A, 0x41, 0x4D, 0xE6,
	0xDD, 0x2E, 0xBD, 0xF1, 0xA4, 0x1E, 0xA2, 0xA2,
	0x94, 0x6E, 0xAD, 0x33, 0xC2, 0x56, 0xD3, 0x29,
	0xCF, 0x75, 0x5E, 0x35, 0x59, 0xEB, 0x07, 0x78,
	0x23, 0x0B, 0x20, 0x4E, 0xEB, 0x61, 0x2B, 0x46,
	0x77, 0x0A, 0x9F, 0xA4, 0x57, 0xA8, 0x45, 0x45,
	0x6E, 0x8F, 0xB4, 0xD5, 0x9C, 0xFC, 0x84, 0x78,
	0xC3, 0x82, 0xD9, 0xB6, 0xA7, 0xD5, 0x76, 0xE0,
	0x23, 0x09, 0x2B, 0x9A, 0x7C, 0x7C, 0xB5, 0x6D,
	0x84, 0x9D, 0x1F, 0x47, 0x0C, 0x9C, 0xD6, 0x86,
	0x2B, 0xDD, 0xF4, 0xFA, 0x97, 0xE7, 0x72, 0xE7,
	0x42, 0x52, 0x74, 0xE8, 0x4D, 0x01, 0xA0, 0x82,
	0x04, 0x15, 0x30, 0x82, 0x04, 0x11, 0x30, 0x82,
	0x04, 0x0D, 0x30, 0x82, 0x02, 0x75, 0xA0, 0x03,
	0x02, 0x01, 0x02, 0x02, 0x0C, 0x57, 0xA3, 0x1D,
	0x32, 0x35, 0xB3, 0x4F, 0xD0, 0xB9, 0xF5, 0xE7,
	0x3C, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48,
	0x86, 0xF7, 0x0D, 0x01, 0x01, 0x0B, 0x05, 0x00,
	0x30, 0x0F, 0x31, 0x0D, 0x30, 0x0B, 0x06, 0x03,
	0x55, 0x04, 0x03, 0x13, 0x04, 0x43, 0x41, 0x2D,
	0x33, 0x30, 0x20, 0x17, 0x0D, 0x31, 0x36, 0x30,
	0x35, 0x31, 0x30, 0x30, 0x38, 0x34, 0x38, 0x33,
	0x30, 0x5A, 0x18, 0x0F, 0x39, 0x39, 0x39, 0x39,
	0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39,
	0x35, 0x39, 0x5A, 0x30, 0x12, 0x31, 0x10, 0x30,
	0x0E, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x07,
	0x73, 0x75, 0x62, 0x43, 0x41, 0x2D, 0x33, 0x30,
	0x82, 0x01, 0xA2, 0x30, 0x0D, 0x06, 0x09, 0x2A,
	0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01,
	0x05, 0x00, 0x03, 0x82, 0x01, 0x8F, 0x00, 0x30,
	0x82, 0x01, 0x8A, 0x02, 0x82, 0x01, 0x81, 0x00,
	0xA0, 0x39, 0xC3, 0x57, 0xCD, 0x2B, 0x4E, 0x9D,
	0x11, 0x68, 0x8B, 0x4E, 0x5A, 0x31, 0x12, 0xDE,
	0x30, 0x1E, 0x39, 0x5F, 0x86, 0xB6, 0xB2, 0xB4,
	0x81, 0xBA, 0x5D, 0xD4, 0x2F, 0x10, 0xD2, 0x1A,
	0x32, 0x0F, 0xD0, 0x41, 0x25, 0xFF, 0xF5, 0xF6,
	0x58, 0xB8, 0xA8, 0xA5, 0xEF, 0xF1, 0x34, 0xBF,
	0x1B, 0x3C, 0x24, 0x69, 0x23, 0x5B, 0x12, 0x55,
	0x79, 0x7C, 0x1D, 0xBD, 0x5C, 0x2B, 0x7A, 0x96,
	0x34, 0x66, 0xB3, 0x56, 0x60, 0xBB, 0xC5, 0x6D,
	0x3B, 0x37, 0x12, 0xF6, 0xE8, 0x8F, 0x3A, 0x7B,
	0x7F, 0xC1, 0x55, 0x19, 0xEA, 0xF2, 0x2A, 0x15,
	0xB6, 0xF3, 0xD0, 0xC0, 0x4A, 0x6F, 0xB8, 0x8F,
	0x05, 0xF7, 0xBC, 0x75, 0xBC, 0xBF, 0xE7, 0xF9,
	0xC7, 0xDC, 0x76, 0x43, 0x7B, 0xEC, 0xD4, 0x9C,
	0xAF, 0x90, 0xBD, 0x8C, 0x73, 0x15, 0x8A, 0x84,
	0x6F, 0x0B, 0xEA, 0x8A, 0xCF, 0xD6, 0xD4, 0x07,
	0x1E, 0x43, 0x4B, 0x24, 0x95, 0xEB, 0xA3, 0xD1,
	0xE7, 0xEC, 0x06, 0xB0, 0x90, 0xEF, 0x91, 0xFB,
	0x26, 0x8D, 0x53, 0xA0, 0xAA, 0x24, 0xE5, 0x49,
	0x64, 0x12, 0xE4, 0x6D, 0xE7, 0x30, 0xCA, 0xB4,
	0x46, 0x2C, 0x6C, 0x73, 0x97, 0x4F, 0xE5, 0x6C,
	0xA0, 0x91, 0xB7, 0x61, 0xF7, 0xEE, 0x39, 0x50,
	0x2B, 0x4E, 0x6D, 0xC9, 0xC7, 0x00, 0x12, 0x6B,
	0x3F, 0xE1, 0xAD, 0x2E, 0x21, 0xB4, 0x00, 0xE5,
	0x31, 0xEA, 0x83, 0xF3, 0x3E, 0xD7, 0x99, 0x2F,
	0x5D, 0xDE, 0xAD, 0x65, 0xE0, 0xEF, 0x36, 0x2E,
	0xB1, 0x36, 0xAB, 0x8F, 0xDA, 0xD3, 0x71, 0xDB,
	0x20, 0x47, 0xF2, 0x26, 0xD6, 0x62, 0x33, 0x98,
	0x3D, 0xA2, 0xEC, 0x68, 0x49, 0xA3, 0x81, 0xA3,
	0xD1, 0x29, 0x37, 0x46, 0xAF, 0x77, 0x27, 0x27,
	0x80, 0xF8, 0x0C, 0xB9, 0x50, 0xF9, 0xAA, 0x72,
	0x6F, 0x9D, 0xA9, 0x7D, 0x34, 0x6F, 0x8F, 0x4C,
	0x4D, 0x3B, 0xF8, 0x1A, 0xD3, 0xB9, 0xDE, 0x42,
	0xD0, 0x48, 0x25, 0xD8, 0x14, 0x9F, 0x7A, 0x8D,
	0xC3, 0x22, 0x5C, 0xCC, 0xC1, 0x14, 0x90, 0xF5,
	0x44, 0xEB, 0x1D, 0x93, 0x85, 0x94, 0x79, 0xDF,
	0xED, 0x24, 0xC1, 0xDF, 0x7E, 0xDB, 0x43, 0xCF,
	0xD8, 0xF7, 0x59, 0xCB, 0x97, 0xF4, 0xCD, 0xA7,
	0xCD, 0x34, 0xF6, 0xC6, 0x56, 0xAE, 0xA2, 0x48,
	0xDB, 0x10, 0x08, 0x51, 0x0D, 0x1C, 0x39, 0x7F,
	0x10, 0x85, 0x66, 0x1E, 0xD3, 0x6E, 0x66, 0x87,
	0xE2, 0xFC, 0xAC, 0x0C, 0xEF, 0x54, 0x65, 0x75,
	0x44, 0x5D, 0x22, 0xCA, 0xA2, 0x74, 0x36, 0x2E,
	0x6C, 0xAC, 0xA3, 0x8F, 0x2C, 0xFC, 0x6D, 0xF4,
	0x56, 0x69, 0x52, 0x8E, 0xD3, 0xED, 0x26, 0xA4,
	0x6C, 0xBF, 0xFA, 0x0F, 0xA4, 0x23, 0xBF, 0x73,
	0x40, 0xFA, 0x06, 0xB9, 0x07, 0x57, 0x9E, 0x41,
	0xE3, 0xCC, 0x5F, 0x9B, 0x22, 0x05, 0x8E, 0x01,
	0x02, 0x03, 0x01, 0x00, 0x01, 0xA3, 0x64, 0x30,
	0x62, 0x30, 0x0F, 0x06, 0x03, 0x55, 0x1D, 0x13,
	0x01, 0x01, 0xFF, 0x04, 0x05, 0x30, 0x03, 0x01,
	0x01, 0xFF, 0x30, 0x0F, 0x06, 0x03, 0x55, 0x1D,
	0x0F, 0x01, 0x01, 0xFF, 0x04, 0x05, 0x03, 0x03,
	0x07, 0x06, 0x00, 0x30, 0x1D, 0x06, 0x03, 0x55,
	0x1D, 0x0E, 0x04, 0x16, 0x04, 0x14, 0x2D, 0x33,
	0x04, 0x1B, 0x27, 0x7F, 0x94, 0x04, 0x7C, 0xC7,
	0xE3, 0x35, 0x4F, 0xE9, 0x25, 0xA4, 0x94, 0xE1,
	0xB7, 0xA1, 0x30, 0x1F, 0x06, 0x03, 0x55, 0x1D,
	0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0xF9,
	0xA8, 0x86, 0x19, 0x63, 0xB6, 0xA4, 0x14, 0x13,
	0x60, 0x76, 0x0F, 0x01, 0x9A, 0x35, 0x36, 0xEF,
	0xF1, 0xB4, 0xAF, 0x30, 0x0D, 0x06, 0x09, 0x2A,
	0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x0B,
	0x05, 0x00, 0x03, 0x82, 0x01, 0x81, 0x00, 0x32,
	0x28, 0xB9, 0x1B, 0x1D, 0xFF, 0x77, 0xFE, 0x7C,
	0xA0, 0x34, 0x72, 0xE5, 0xAD, 0x28, 0x3E, 0xF4,
	0x21, 0x91, 0x4D, 0x1D, 0x29, 0xAE, 0xB5, 0x35,
	0xF8, 0xE3, 0x3B, 0x3F, 0x6E, 0xAB, 0x13, 0x52,
	0x8A, 0x52, 0xC9, 0x13, 0xB8, 0xC6, 0x24, 0xF6,
	0x86, 0xDA, 0xD2, 0xAD, 0x0B, 0xF5, 0xD4, 0xD5,
	0x86, 0xEA, 0x97, 0x6B, 0x6A, 0x41, 0x8E, 0xBC,
	0x92, 0x88, 0x23, 0x2A, 0xCD, 0xF5, 0x40, 0x2E,
	0x91, 0x16, 0x4A, 0x19, 0x00, 0x5A, 0x2E, 0x4C,
	0x9B, 0x75, 0xD6, 0x4C, 0xDB, 0x81, 0x55, 0x8A,
	0x7B, 0x00, 0xA4, 0xDF, 0xF3, 0xAB, 0x03, 0x4F,
	0xD9, 0x91, 0x1A, 0xC0, 0x7C, 0x4D, 0x0F, 0x99,
	0xAF, 0xCD, 0x21, 0x34, 0x70, 0x4C, 0x79, 0x93,
	0xB1, 0x03, 0x9D, 0xBF, 0xF6, 0xF3, 0x47, 0xEC,
	0x48, 0x3E, 0x18, 0xCA, 0xC4, 0xAA, 0xCA, 0xC8,
	0x91, 0x4C, 0x1B, 0x9C, 0x5B, 0xF9, 0x0D, 0x0E,
	0x29, 0x26, 0xDD, 0xF2, 0x40, 0xE9, 0x81, 0x85,
	0x8A, 0xA1, 0xBE, 0x71, 0xDA, 0x3B, 0x0D, 0x62,
	0x01, 0x03, 0xA7, 0xC9, 0xD8, 0x49, 0x14, 0xF8,
	0xE5, 0x21, 0xB0, 0xED, 0xCE, 0xC5, 0x72, 0xE9,
	0xA4, 0x5F, 0x3D, 0xA7, 0x03, 0xAA, 0xF9, 0x37,
	0x06, 0xE7, 0x84, 0x42, 0xEF, 0x34, 0x52, 0xBC,
	0x7F, 0x3B, 0x18, 0xF9, 0x02, 0x4A, 0x1D, 0xA0,
	0x25, 0x27, 0xD0, 0x9C, 0x96, 0x58, 0x8F, 0xD4,
	0xF8, 0xA2, 0x01, 0xC9, 0x76, 0x2D, 0x0A, 0x36,
	0x81, 0xAC, 0xA0, 0x58, 0xD8, 0x83, 0xFA, 0x08,
	0x27, 0xAB, 0x3C, 0xBB, 0x9E, 0xA6, 0xA6, 0xF6,
	0xB8, 0x9E, 0x38, 0xE3, 0x07, 0x96, 0xCD, 0x64,
	0x28, 0x50, 0x05, 0xAD, 0x6C, 0xB6, 0x83, 0xF7,
	0x01, 0x85, 0x37, 0xD2, 0xFB, 0xFE, 0xD2, 0x86,
	0x97, 0xB1, 0xEC, 0xD2, 0xB6, 0x18, 0x08, 0xAE,
	0x8E, 0x05, 0x15, 0xD1, 0x36, 0x47, 0x13, 0x21,
	0x19, 0xB7, 0xAB, 0xA6, 0xE2, 0x02, 0xD2, 0xF6,
	0xFC, 0x14, 0x2A, 0xCF, 0xD1, 0xE1, 0x74, 0xBD,
	0x54, 0xBF, 0xDB, 0x06, 0x57, 0xC0, 0xCB, 0x68,
	0x40, 0x55, 0x37, 0x94, 0x7A, 0x38, 0x91, 0x04,
	0x67, 0x93, 0x26, 0x4A, 0x81, 0xBB, 0xBF, 0x9C,
	0xE0, 0x57, 0x6B, 0x08, 0x1C, 0x95, 0x85, 0xA7,
	0x90, 0x01, 0x23, 0x18, 0xBB, 0xF9, 0x60, 0x6B,
	0xC7, 0x9A, 0x18, 0xBD, 0x73, 0x25, 0xB2, 0x5E,
	0xD8, 0x14, 0x16, 0x23, 0xBE, 0x78, 0x28, 0x36,
	0x03, 0x4F, 0xDA, 0x8A, 0x36, 0xA1, 0xA5, 0x83,
	0x2B, 0x2B, 0xE0, 0x05, 0x63, 0x7B, 0xBC, 0xF5,
	0x63, 0x53, 0x10, 0xEF, 0x64, 0xA7, 0x7E, 0xBC,
	0xD8, 0x49, 0x0C, 0x3A, 0x04, 0x1F, 0x39, 0x0A,
	0xEA, 0xC1, 0xEA, 0x2A, 0x2E, 0xDD, 0x0F, 0x9E,
	0x33, 0x8A, 0x38, 0x83, 0xFF, 0xB1, 0x18, 0x4B,
	0x83, 0xA3, 0x43, 0x5E, 0xFF, 0xC8, 0xAB
};

const char _ocsp_ca3_localhost_unknown_pem[] =
	"-----BEGIN OCSP RESPONSE-----\n"
	"MIICNwoBAKCCAjAwggIsBgkrBgEFBQcwAQEEggIdMIICGTCBgqERMA8xDTALBgNV\n"
	"BAMTBENBLTMYDzIwMTcxMDE4MTIzODUyWjBcMFowRTAJBgUrDgMCGgUABBS3yg+r\n"
	"3G+4sJZ6FayYCg8Z/qQS3gQUHoXtf55x+gidN0hDoBLv5arh44oCDFejHTI1s0/Q\n"
	"ufXnPIIAGA8yMDE3MTAxODEyMzg1MlowDQYJKoZIhvcNAQELBQADggGBALMParB9\n"
	"K97DlT4FmMdPScoT7oAAsar4XxKLU9+oraht7H+WTAYSpnCxh/ugR17G0jtzTzIw\n"
	"nLQFAyR9MDYKp4Om4YqQ7r+43DiIqKVU25WcrVifUbtkR+LbjH+Bk1UHvFE8mCOX\n"
	"ZB+cmQyjGap1RX0dnj2Wm48vUwqp71nA8AYcXL575xZ4rb9DDhaoV2h3S0Zlu4IN\n"
	"btuDIVsxJ53kqkGjjVB4/R0RtqCXOI2ThMK3SfDWqwzF9tYA763VVXi+g+w3oyv4\n"
	"ZtP8QUWOVUY4azpElX1wqoO8znUjxs1AzROLUeLPK8GMLVIZLP361J2kLgcj0Gdq\n"
	"GIVH5N54p6bl5OgSUP3EdKbFRZyCVZ2n8Der3Cf9PtfvGV7Ze4Cv/CCN6rJkk54P\n"
	"6auP6pEJg0ESGC5fop5HFCyVM+W/ot0A1cxN0+cHYlqB1NQholLqe3psDjJ2EoIK\n"
	"LtN5dRLO6z5L74CwwiJ1SeLh8XyJtr/ee9RnFB56XCzO7lyhbHPx/VT6Qw==\n"
	"-----END OCSP RESPONSE-----";

static gnutls_datum_t ocsp_ca3_localhost_unknown = {
	(void *)_ocsp_ca3_localhost_unknown, sizeof(_ocsp_ca3_localhost_unknown)
};

static gnutls_datum_t ocsp_ca3_localhost_unknown_pem = {
	(void *)_ocsp_ca3_localhost_unknown_pem, sizeof(_ocsp_ca3_localhost_unknown_pem)
};


/* ocsp response with unknown status for
 * server_ca3_localhost_cert. Signed with
 * RSA-SHA1.
 */
static const char _ocsp_ca3_localhost_unknown_sha1[] = {
	0x30, 0x82, 0x02, 0x3A, 0x0A, 0x01, 0x00, 0xA0,
	0x82, 0x02, 0x33, 0x30, 0x82, 0x02, 0x2F, 0x06,
	0x09, 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x30,
	0x01, 0x01, 0x04, 0x82, 0x02, 0x20, 0x30, 0x82,
	0x02, 0x1C, 0x30, 0x81, 0x85, 0xA1, 0x14, 0x30,
	0x12, 0x31, 0x10, 0x30, 0x0E, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x13, 0x07, 0x73, 0x75, 0x62, 0x43,
	0x41, 0x2D, 0x33, 0x18, 0x0F, 0x32, 0x30, 0x31,
	0x37, 0x31, 0x30, 0x31, 0x38, 0x31, 0x32, 0x32,
	0x32, 0x30, 0x36, 0x5A, 0x30, 0x5C, 0x30, 0x5A,
	0x30, 0x45, 0x30, 0x09, 0x06, 0x05, 0x2B, 0x0E,
	0x03, 0x02, 0x1A, 0x05, 0x00, 0x04, 0x14, 0xB2,
	0xE6, 0x5C, 0x8E, 0x6E, 0x83, 0x4B, 0xBD, 0x11,
	0xD9, 0x97, 0xFA, 0x36, 0x93, 0x59, 0x9E, 0xAD,
	0x5C, 0x15, 0xC4, 0x04, 0x14, 0x9E, 0x91, 0xEC,
	0x8C, 0xAA, 0x24, 0x5B, 0x22, 0xE0, 0xE8, 0x11,
	0xE8, 0xE9, 0xA4, 0x91, 0xB5, 0x91, 0x26, 0x00,
	0xF1, 0x02, 0x0C, 0x57, 0xA3, 0x1D, 0x32, 0x36,
	0xC8, 0x0C, 0xA1, 0xCA, 0xB0, 0xBD, 0xF6, 0x82,
	0x00, 0x18, 0x0F, 0x32, 0x30, 0x31, 0x37, 0x31,
	0x30, 0x31, 0x38, 0x31, 0x32, 0x32, 0x32, 0x30,
	0x36, 0x5A, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86,
	0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05,
	0x00, 0x03, 0x82, 0x01, 0x81, 0x00, 0x29, 0x91,
	0xFA, 0x87, 0x8F, 0x4D, 0xC2, 0x25, 0x67, 0x4F,
	0x2A, 0x39, 0xF9, 0xDA, 0x05, 0x4A, 0x8E, 0xBC,
	0x72, 0xB7, 0x8B, 0xF1, 0x6C, 0x77, 0x5E, 0x2F,
	0x0F, 0xA4, 0xEC, 0x7F, 0xD6, 0x63, 0xEA, 0x39,
	0x17, 0x6F, 0xAA, 0x4B, 0x86, 0x46, 0x0E, 0xB2,
	0xE1, 0x65, 0x1C, 0xEC, 0x97, 0x05, 0x00, 0x4D,
	0xAC, 0xBA, 0xA5, 0xD4, 0x1B, 0xB8, 0x4A, 0x05,
	0x94, 0x6C, 0xC9, 0xE1, 0x41, 0x5B, 0x44, 0x4F,
	0x39, 0x9C, 0xF7, 0xAF, 0x04, 0x31, 0x1A, 0x5B,
	0xF8, 0x5E, 0x42, 0xDA, 0xEA, 0xFF, 0x25, 0x67,
	0x75, 0x3E, 0x46, 0xC4, 0x7D, 0x31, 0x74, 0xBD,
	0x19, 0xFF, 0x11, 0x7F, 0x21, 0x39, 0x4D, 0xE3,
	0x07, 0x2F, 0xF4, 0xF5, 0x6B, 0xE7, 0x10, 0xF8,
	0x6C, 0x57, 0x7B, 0x83, 0x84, 0xCD, 0x3D, 0x61,
	0xFD, 0x91, 0x87, 0x03, 0x03, 0xDD, 0x7A, 0x60,
	0xF9, 0x1D, 0x82, 0xE9, 0xD9, 0x4B, 0xC9, 0xF2,
	0x6F, 0xE5, 0x09, 0xCC, 0xEC, 0x63, 0xD7, 0xC1,
	0xED, 0x54, 0x6D, 0x03, 0xC8, 0xC5, 0x92, 0xBC,
	0x22, 0x11, 0xCD, 0x3A, 0x2E, 0x51, 0xCD, 0x5F,
	0xA5, 0xB5, 0xA3, 0x5C, 0x8D, 0x54, 0x92, 0x85,
	0x6B, 0x92, 0x2A, 0x23, 0x5E, 0xFB, 0x35, 0xFB,
	0x23, 0xDA, 0x17, 0x16, 0x6D, 0xB2, 0xFB, 0xD8,
	0x8D, 0x43, 0x9F, 0x36, 0xE9, 0x5E, 0xA2, 0xCB,
	0xA5, 0x2D, 0xAE, 0xDD, 0x63, 0xFC, 0x53, 0x90,
	0xB5, 0x54, 0x82, 0x7C, 0xBD, 0x08, 0xD7, 0x4E,
	0xEA, 0x11, 0x84, 0x3C, 0x5B, 0x63, 0x06, 0xA5,
	0x2C, 0x8B, 0x09, 0x13, 0xC7, 0x04, 0x5F, 0xAF,
	0x73, 0xB1, 0x89, 0x40, 0x12, 0xEA, 0x9C, 0x56,
	0xC6, 0x08, 0x39, 0xD4, 0xAA, 0x1F, 0xAF, 0x74,
	0x78, 0xCC, 0x84, 0xC2, 0x8A, 0xE8, 0x0B, 0xCD,
	0xD3, 0x2D, 0xCD, 0x98, 0x2E, 0x8D, 0xAB, 0x59,
	0xFC, 0xCF, 0x4C, 0x1A, 0x30, 0xED, 0x8E, 0x3F,
	0xF8, 0xC7, 0xBD, 0xE3, 0x64, 0x94, 0x0C, 0xFC,
	0x24, 0x85, 0x35, 0x0A, 0x0E, 0x65, 0xA7, 0x2C,
	0x0B, 0x80, 0xB9, 0xB0, 0x97, 0xA5, 0x70, 0xE0,
	0x12, 0x86, 0x69, 0x74, 0x22, 0xEA, 0xE3, 0x11,
	0x4B, 0x34, 0xB1, 0xFB, 0x24, 0xEE, 0x00, 0x73,
	0x71, 0x33, 0x74, 0x62, 0x64, 0x10, 0xDD, 0x5A,
	0x3A, 0x10, 0xA3, 0x8E, 0x36, 0x03, 0x0D, 0x17,
	0xE3, 0x72, 0x29, 0xAE, 0x5A, 0xBD, 0x2E, 0xE0,
	0xFD, 0xB1, 0xDF, 0x8F, 0x2C, 0x24, 0xCF, 0xB9,
	0x10, 0x99, 0x68, 0xA2, 0x55, 0x01, 0x1E, 0xFB,
	0x9B, 0x14, 0x4C, 0x1E, 0xB4, 0x59, 0x79, 0xB7,
	0x8F, 0x07, 0x28, 0x3E, 0xB4, 0x2E, 0x8F, 0x91,
	0x51, 0xFD, 0x8F, 0x12, 0x8D, 0xC6, 0x57, 0x7B,
	0x87, 0xEF, 0x9C, 0x8B, 0x90, 0xD3, 0xA5, 0xB0,
	0xBE, 0x4B, 0xFA, 0x33, 0x54, 0x87, 0x81, 0xCF,
	0x96, 0x9A, 0xD3, 0xDC, 0xA9, 0xB6
};

static gnutls_datum_t ocsp_ca3_localhost_unknown_sha1 = {
	(void *)_ocsp_ca3_localhost_unknown_sha1,
	    sizeof(_ocsp_ca3_localhost_unknown_sha1)
};

/* ocsp response with unknown status for
 * subca3_cert_pem. Signed with
 * RSA-SHA256.
 */
static const char _ocsp_subca3_unknown[] = {
	0x30, 0x82, 0x02, 0x37, 0x0A, 0x01, 0x00, 0xA0,
	0x82, 0x02, 0x30, 0x30, 0x82, 0x02, 0x2C, 0x06,
	0x09, 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x30,
	0x01, 0x01, 0x04, 0x82, 0x02, 0x1D, 0x30, 0x82,
	0x02, 0x19, 0x30, 0x81, 0x82, 0xA1, 0x11, 0x30,
	0x0F, 0x31, 0x0D, 0x30, 0x0B, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x13, 0x04, 0x43, 0x41, 0x2D, 0x33,
	0x18, 0x0F, 0x32, 0x30, 0x31, 0x37, 0x31, 0x30,
	0x31, 0x38, 0x31, 0x32, 0x33, 0x38, 0x35, 0x32,
	0x5A, 0x30, 0x5C, 0x30, 0x5A, 0x30, 0x45, 0x30,
	0x09, 0x06, 0x05, 0x2B, 0x0E, 0x03, 0x02, 0x1A,
	0x05, 0x00, 0x04, 0x14, 0xB7, 0xCA, 0x0F, 0xAB,
	0xDC, 0x6F, 0xB8, 0xB0, 0x96, 0x7A, 0x15, 0xAC,
	0x98, 0x0A, 0x0F, 0x19, 0xFE, 0xA4, 0x12, 0xDE,
	0x04, 0x14, 0x1E, 0x85, 0xED, 0x7F, 0x9E, 0x71,
	0xFA, 0x08, 0x9D, 0x37, 0x48, 0x43, 0xA0, 0x12,
	0xEF, 0xE5, 0xAA, 0xE1, 0xE3, 0x8A, 0x02, 0x0C,
	0x57, 0xA3, 0x1D, 0x32, 0x35, 0xB3, 0x4F, 0xD0,
	0xB9, 0xF5, 0xE7, 0x3C, 0x82, 0x00, 0x18, 0x0F,
	0x32, 0x30, 0x31, 0x37, 0x31, 0x30, 0x31, 0x38,
	0x31, 0x32, 0x33, 0x38, 0x35, 0x32, 0x5A, 0x30,
	0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
	0x0D, 0x01, 0x01, 0x0B, 0x05, 0x00, 0x03, 0x82,
	0x01, 0x81, 0x00, 0xB3, 0x0F, 0x6A, 0xB0, 0x7D,
	0x2B, 0xDE, 0xC3, 0x95, 0x3E, 0x05, 0x98, 0xC7,
	0x4F, 0x49, 0xCA, 0x13, 0xEE, 0x80, 0x00, 0xB1,
	0xAA, 0xF8, 0x5F, 0x12, 0x8B, 0x53, 0xDF, 0xA8,
	0xAD, 0xA8, 0x6D, 0xEC, 0x7F, 0x96, 0x4C, 0x06,
	0x12, 0xA6, 0x70, 0xB1, 0x87, 0xFB, 0xA0, 0x47,
	0x5E, 0xC6, 0xD2, 0x3B, 0x73, 0x4F, 0x32, 0x30,
	0x9C, 0xB4, 0x05, 0x03, 0x24, 0x7D, 0x30, 0x36,
	0x0A, 0xA7, 0x83, 0xA6, 0xE1, 0x8A, 0x90, 0xEE,
	0xBF, 0xB8, 0xDC, 0x38, 0x88, 0xA8, 0xA5, 0x54,
	0xDB, 0x95, 0x9C, 0xAD, 0x58, 0x9F, 0x51, 0xBB,
	0x64, 0x47, 0xE2, 0xDB, 0x8C, 0x7F, 0x81, 0x93,
	0x55, 0x07, 0xBC, 0x51, 0x3C, 0x98, 0x23, 0x97,
	0x64, 0x1F, 0x9C, 0x99, 0x0C, 0xA3, 0x19, 0xAA,
	0x75, 0x45, 0x7D, 0x1D, 0x9E, 0x3D, 0x96, 0x9B,
	0x8F, 0x2F, 0x53, 0x0A, 0xA9, 0xEF, 0x59, 0xC0,
	0xF0, 0x06, 0x1C, 0x5C, 0xBE, 0x7B, 0xE7, 0x16,
	0x78, 0xAD, 0xBF, 0x43, 0x0E, 0x16, 0xA8, 0x57,
	0x68, 0x77, 0x4B, 0x46, 0x65, 0xBB, 0x82, 0x0D,
	0x6E, 0xDB, 0x83, 0x21, 0x5B, 0x31, 0x27, 0x9D,
	0xE4, 0xAA, 0x41, 0xA3, 0x8D, 0x50, 0x78, 0xFD,
	0x1D, 0x11, 0xB6, 0xA0, 0x97, 0x38, 0x8D, 0x93,
	0x84, 0xC2, 0xB7, 0x49, 0xF0, 0xD6, 0xAB, 0x0C,
	0xC5, 0xF6, 0xD6, 0x00, 0xEF, 0xAD, 0xD5, 0x55,
	0x78, 0xBE, 0x83, 0xEC, 0x37, 0xA3, 0x2B, 0xF8,
	0x66, 0xD3, 0xFC, 0x41, 0x45, 0x8E, 0x55, 0x46,
	0x38, 0x6B, 0x3A, 0x44, 0x95, 0x7D, 0x70, 0xAA,
	0x83, 0xBC, 0xCE, 0x75, 0x23, 0xC6, 0xCD, 0x40,
	0xCD, 0x13, 0x8B, 0x51, 0xE2, 0xCF, 0x2B, 0xC1,
	0x8C, 0x2D, 0x52, 0x19, 0x2C, 0xFD, 0xFA, 0xD4,
	0x9D, 0xA4, 0x2E, 0x07, 0x23, 0xD0, 0x67, 0x6A,
	0x18, 0x85, 0x47, 0xE4, 0xDE, 0x78, 0xA7, 0xA6,
	0xE5, 0xE4, 0xE8, 0x12, 0x50, 0xFD, 0xC4, 0x74,
	0xA6, 0xC5, 0x45, 0x9C, 0x82, 0x55, 0x9D, 0xA7,
	0xF0, 0x37, 0xAB, 0xDC, 0x27, 0xFD, 0x3E, 0xD7,
	0xEF, 0x19, 0x5E, 0xD9, 0x7B, 0x80, 0xAF, 0xFC,
	0x20, 0x8D, 0xEA, 0xB2, 0x64, 0x93, 0x9E, 0x0F,
	0xE9, 0xAB, 0x8F, 0xEA, 0x91, 0x09, 0x83, 0x41,
	0x12, 0x18, 0x2E, 0x5F, 0xA2, 0x9E, 0x47, 0x14,
	0x2C, 0x95, 0x33, 0xE5, 0xBF, 0xA2, 0xDD, 0x00,
	0xD5, 0xCC, 0x4D, 0xD3, 0xE7, 0x07, 0x62, 0x5A,
	0x81, 0xD4, 0xD4, 0x21, 0xA2, 0x52, 0xEA, 0x7B,
	0x7A, 0x6C, 0x0E, 0x32, 0x76, 0x12, 0x82, 0x0A,
	0x2E, 0xD3, 0x79, 0x75, 0x12, 0xCE, 0xEB, 0x3E,
	0x4B, 0xEF, 0x80, 0xB0, 0xC2, 0x22, 0x75, 0x49,
	0xE2, 0xE1, 0xF1, 0x7C, 0x89, 0xB6, 0xBF, 0xDE,
	0x7B, 0xD4, 0x67, 0x14, 0x1E, 0x7A, 0x5C, 0x2C,
	0xCE, 0xEE, 0x5C, 0xA1, 0x6C, 0x73, 0xF1, 0xFD,
	0x54, 0xFA, 0x43
};

const char _ocsp_subca3_unknown_pem[] =
	"-----BEGIN OCSP RESPONSE-----\n"
	"MIIGUwoBAKCCBkwwggZIBgkrBgEFBQcwAQEEggY5MIIGNTCBhaEUMBIxEDAOBgNV\n"
	"BAMTB3N1YkNBLTMYDzIwMTcxMDE4MTIwOTMwWjBcMFowRTAJBgUrDgMCGgUABBSy\n"
	"5lyOboNLvRHZl/o2k1merVwVxAQUnpHsjKokWyLg6BHo6aSRtZEmAPECDFejHTI2\n"
	"yAyhyrC99oIAGA8yMDE3MTAxODEyMDkzMFowDQYJKoZIhvcNAQENBQADggGBAFZk\n"
	"KxCq5yZ/8X+Glw4YtHWSZRIrRp8+lpjkqxDRDuoI4qUBdaRbdqxJK57xSvJ5Ok4V\n"
	"gf9N02WOrkq7MzWLD7ZdMu/14SW/vVIdmfI04Ps4NGya71OykMb7daCMvGuO2N4z\n"
	"5G/yrfKiT8JYR+JobTo6swqCPaSFAFg+ADWdax//n66wmuLHDpqzfFLp2lBXNXJx\n"
	"gafAQCjqK84JRx2xgEFZ9l3TPOoR2BO5DzJqKXK+wcMbtUxNDaHV8MTsxVqTQXoB\n"
	"JLN6cYKjxghCkQ5r54YLr77fB1qMNfhffy9gBN0q8g3AHG+gMICkNYPTw8w1Rjbr\n"
	"6bE8CI/MXcrZrz7UWLuQXe8BnNk+Vn7PE6oRxCLSoJ8b6fB4cDvMIX1rRpc/Owxb\n"
	"j6gockpBTebdLr3xpB6iopRurTPCVtMpz3VeNVnrB3gjCyBO62ErRncKn6RXqEVF\n"
	"bo+01Zz8hHjDgtm2p9V24CMJK5p8fLVthJ0fRwyc1oYr3fT6l+dy50JSdOhNAaCC\n"
	"BBUwggQRMIIEDTCCAnWgAwIBAgIMV6MdMjWzT9C59ec8MA0GCSqGSIb3DQEBCwUA\n"
	"MA8xDTALBgNVBAMTBENBLTMwIBcNMTYwNTEwMDg0ODMwWhgPOTk5OTEyMzEyMzU5\n"
	"NTlaMBIxEDAOBgNVBAMTB3N1YkNBLTMwggGiMA0GCSqGSIb3DQEBAQUAA4IBjwAw\n"
	"ggGKAoIBgQCgOcNXzStOnRFoi05aMRLeMB45X4a2srSBul3ULxDSGjIP0EEl//X2\n"
	"WLiope/xNL8bPCRpI1sSVXl8Hb1cK3qWNGazVmC7xW07NxL26I86e3/BVRnq8ioV\n"
	"tvPQwEpvuI8F97x1vL/n+cfcdkN77NScr5C9jHMVioRvC+qKz9bUBx5DSySV66PR\n"
	"5+wGsJDvkfsmjVOgqiTlSWQS5G3nMMq0Rixsc5dP5Wygkbdh9+45UCtObcnHABJr\n"
	"P+GtLiG0AOUx6oPzPteZL13erWXg7zYusTarj9rTcdsgR/Im1mIzmD2i7GhJo4Gj\n"
	"0Sk3Rq93JyeA+Ay5UPmqcm+dqX00b49MTTv4GtO53kLQSCXYFJ96jcMiXMzBFJD1\n"
	"ROsdk4WUed/tJMHffttDz9j3WcuX9M2nzTT2xlauokjbEAhRDRw5fxCFZh7TbmaH\n"
	"4vysDO9UZXVEXSLKonQ2Lmyso48s/G30VmlSjtPtJqRsv/oPpCO/c0D6BrkHV55B\n"
	"48xfmyIFjgECAwEAAaNkMGIwDwYDVR0TAQH/BAUwAwEB/zAPBgNVHQ8BAf8EBQMD\n"
	"BwYAMB0GA1UdDgQWBBQtMwQbJ3+UBHzH4zVP6SWklOG3oTAfBgNVHSMEGDAWgBT5\n"
	"qIYZY7akFBNgdg8BmjU27/G0rzANBgkqhkiG9w0BAQsFAAOCAYEAMii5Gx3/d/58\n"
	"oDRy5a0oPvQhkU0dKa61NfjjOz9uqxNSilLJE7jGJPaG2tKtC/XU1Ybql2tqQY68\n"
	"kogjKs31QC6RFkoZAFouTJt11kzbgVWKewCk3/OrA0/ZkRrAfE0Pma/NITRwTHmT\n"
	"sQOdv/bzR+xIPhjKxKrKyJFMG5xb+Q0OKSbd8kDpgYWKob5x2jsNYgEDp8nYSRT4\n"
	"5SGw7c7FcumkXz2nA6r5NwbnhELvNFK8fzsY+QJKHaAlJ9CclliP1PiiAcl2LQo2\n"
	"gaygWNiD+ggnqzy7nqam9rieOOMHls1kKFAFrWy2g/cBhTfS+/7Shpex7NK2GAiu\n"
	"jgUV0TZHEyEZt6um4gLS9vwUKs/R4XS9VL/bBlfAy2hAVTeUejiRBGeTJkqBu7+c\n"
	"4FdrCByVhaeQASMYu/lga8eaGL1zJbJe2BQWI754KDYDT9qKNqGlgysr4AVje7z1\n"
	"Y1MQ72SnfrzYSQw6BB85CurB6iou3Q+eM4o4g/+xGEuDo0Ne/8ir\n"
	"-----END OCSP RESPONSE-----\n";

static gnutls_datum_t ocsp_subca3_unknown = {
	(void *)_ocsp_subca3_unknown, sizeof(_ocsp_subca3_unknown)
};

static gnutls_datum_t ocsp_subca3_unknown_pem = {
	(void *)_ocsp_subca3_unknown_pem, sizeof(_ocsp_subca3_unknown_pem)-1
};

#if defined __clang__ || __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
#  pragma GCC diagnostic pop
#endif

#endif

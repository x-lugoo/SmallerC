/*
  Copyright (c) 2014, Alexey Frunze
  2-clause BSD license.
*/
#ifndef __FCNTL_H
#define __FCNTL_H

#include <sys/stat.h>

#define O_RDONLY    0x0000
#define O_WRONLY    0x0001
#define O_RDWR      0x0002
#define O_ACCMODE   0x0003

#define O_CREAT     0x0010
#define O_EXCL      0x0020
#define O_NOCTTY    0x0040
#define O_TRUNC     0x0080
#define O_APPEND    0x0100
#define O_NONBLOCK  0x0200

#ifndef __MODE_T_DEF
#define __MODE_T_DEF
typedef int mode_t;
#endif

#ifdef __SMALLER_C_32__
#ifndef __OFF_T_DEF
#define __OFF_T_DEF
typedef long off_t;
#endif
#endif

int creat(char*, mode_t);
int open(char*, int, ...);

#endif

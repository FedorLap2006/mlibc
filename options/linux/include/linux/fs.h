
#ifndef _LINUX_FS_H
#define _LINUX_FS_H

#include <sys/ioctl.h>

#define BLKRRPART _IO(0x12, 95)
#define BLKIOMIN _IO(0x12, 120)
#define BLKIOOPT _IO(0x12, 121)
#define BLKALIGNOFF _IO(0x12, 122)
#define BLKPBSZGET _IO(0x12, 123)

#endif // _LINUX_FS_H


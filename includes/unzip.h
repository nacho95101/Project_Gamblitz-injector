#ifndef _UNZIP_H_
#define _UNZIP_H_

#define UP_EUR          0
#define UP_US           1
#define UP_JP           2
#define UP_APP          3
#define REBOOT_PAYLOAD  4

int unzip(const char *output, int mode);

#endif
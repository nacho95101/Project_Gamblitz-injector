#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define EUR_URL "https://github.com/nacho95101/plaza-mod-injector/releases/download/main/US.zip"
#define JP_URL  "https://github.com/nacho95101/plaza-mod-injector/releases/download/main/US.zip"
#define US_URL  "https://github.com/nacho95101/plaza-mod-injector/releases/download/main/US.zip"
#define APP_URL "https://github.com/nacho95101/plaza-mod-injector/releases/latest/download/plaza-mod-injector.nro"

int downloadFile(const char *url, const char *output, int api_mode);

#endif
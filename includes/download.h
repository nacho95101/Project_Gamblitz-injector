#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define EUR_URL "https://github.com/nacho95101/installer-test/releases/download/test/eur.zip"
#define JP_URL  "https://github.com/nacho95101/installer-test/releases/download/test/jp.zip"
#define US_URL  "https://github.com/nacho95101/installer-test/releases/download/test/us.zip"
#define APP_URL "https://github.com/nacho95101/plaza-mod-injector/releases/latest/download/plaza-mod-injector.nro"

int downloadFile(const char *url, const char *output, int api_mode);

#endif
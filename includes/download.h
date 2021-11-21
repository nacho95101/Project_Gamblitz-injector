#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define AMS_URL     "h://api.github.com/repos/Atmosphere-NX/Atmosphere/releases"
#define HEKATE_URL  "h://api.github.com/repos/CTCaer/hekate/releases/latest"
#define APP_URL     "https://github.com/nacho95101/plaza-mod-injector/releases/latest/download/plaza-mod-injector.nro"

int downloadFile(const char *url, const char *output, int api_mode);

#endif
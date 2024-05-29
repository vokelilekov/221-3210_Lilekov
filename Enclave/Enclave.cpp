#include "Enclave_t.h"
#include "sgx_trts.h"
#include <string.h>

#define BUFLEN 1024

const char* personalData[] = {
    "Asfefe Aasdfg 12345343",
    "Bccsdc Bkjhgf 12353455",
    "Crgbbb Cerghj 12453455",
    "Cuymmu Aokjdd 12457887",
    "Anyuny Awerty 12904321",
    "Agbrdg A;lkij 12345789",
    "Asfefe Aasdfg 12345343",
    "Bccsdc Bkjhgf 12353455",
    "Crgbbb Cerghj 12453455",
    "Cuymmu Aokjdd 12457887",
    "Anyuny Awerty 12904321",
    "Agbrdg A;lkij 12345789"
};

void accessPD(char* outbuf, size_t len, int i) {
    size_t maxPD = sizeof(personalData) / sizeof(char*);
    if (i >= maxPD || i < 0) {
        memset(outbuf, 0, len);
    }
    else {
        const size_t datalen = strlen(personalData[i]);
        if (datalen >= len) {
            memcpy(outbuf, personalData[i], len - 1);
            outbuf[len - 1] = '\0';
        }
        else {
            memcpy(outbuf, personalData[i], datalen);
            outbuf[datalen] = '\0';
        }
    }
}

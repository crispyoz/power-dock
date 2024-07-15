#ifndef _ONIONDEBUG_H_
#define _ONIONDEBUG_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


#ifdef __cplusplus
extern "C" {
#endif

#define ONION_SEVERITY_INFO     0
#define ONION_SEVERITY_DEBUG    1

void onionPrint(int verbosity, char *s, ...);

#ifdef __cplusplus
}
#endif
#endif // _ONIONDEBUG_H_

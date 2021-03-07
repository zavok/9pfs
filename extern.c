#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#include <netinet/in.h>
#include <netdb.h>

#include <unistd.h>
#include <fcntl.h>
#include <fuse.h>
#include <pwd.h>
#include <grp.h>
#include <err.h>
#include <errno.h>

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

#include "libc.h"
#include "fcall.h"
#include "9pfs.h"

FILE *logfile;
FFid *rootfid;
FFid *authfid;
int msize;
int srvfd;
int debug;


#ifndef __EGLIB_CONFIG_H
#define __EGLIB_CONFIG_H

#ifdef _MSC_VER

#include <io.h>
#include <stddef.h>

#define MAXPATHLEN 242

#define STDOUT_FILENO (1)
#define STDERR_FILENO (2)

/* FIXME: what should this be ?*/
#define X_OK 4 /* This is really read */
#define F_SETFD 1
#define FD_CLOEXEC 1

#ifndef __cplusplus
#undef inline
#define inline __inline
#endif

#define strtok_r strtok_s

#undef G_HAVE_UNISTD_H

#else

#define HAVE_ALLOCA_H 1
#define HAVE_UNISTD_H 1

#ifdef HAVE_ALLOCA_H
#define G_HAVE_ALLOCA_H
#endif

#if HAVE_UNISTD_H
#define G_HAVE_UNISTD_H
#endif

#endif

/*
 * System-dependent settings
 */
#define G_GNUC_PRETTY_FUNCTION   
#define G_GNUC_UNUSED            
#define G_BYTE_ORDER             G_LITTLE_ENDIAN
#define G_SEARCHPATH_SEPARATOR_S ":"
#define G_SEARCHPATH_SEPARATOR   ':'
#define G_DIR_SEPARATOR          '/'
#define G_DIR_SEPARATOR_S        "/"
#define G_BREAKPOINT()           G_STMT_START { raise(SIGTRAP); } G_STMT_END
#define G_OS_UNIX          1
#define G_GSIZE_FORMAT           "\"zu\""

#if defined (HOST_WATCHOS)
#undef G_BREAKPOINT
#define G_BREAKPOINT()
#endif

#if defined (HOST_WASM)
#undef G_BREAKPOINT
#define G_BREAKPOINT() do { printf ("MONO: BREAKPOINT\n"); abort (); } while (0)
#endif

typedef size_t gsize;
typedef ssize_t gssize;

#ifdef _MSC_VER
typedef int pid_t;
#endif

#endif

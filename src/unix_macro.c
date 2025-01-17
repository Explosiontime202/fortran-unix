/* unix_macro.c */
#include <errno.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>
#include <syslog.h>

/*
 * Macro replacements.
 */

/* Returns variable `errno` from `errno.h`. */
int c_errno()
{
    return errno;
}

/*
 * Non-variadic wrapper procedures.
 */

/* int execl(const char *path, const char *arg, ...) */
int c_execl(const char *path, const char *arg1, const char *arg2, const char *arg3, void *ptr)
{
    return execl(path, arg1, arg2, arg3, ptr, NULL);
}

/* int fcntl(int fd, int cmd, ...) */
int c_fcntl(int fd, int cmd, int arg)
{
    return fcntl(fd, cmd, arg);
}

/* int fprintf(FILE *stream, const char *format, ...) */
int c_fprintf(FILE *stream, const char *format, const char *arg)
{
    return fprintf(stream, format, arg);
}

/* int ioctl(int fd, unsigned long request, ...) */
int c_ioctl(int fd, unsigned long request, void *arg)
{
    return ioctl(fd, request, arg);
}

/* int open(const char *pathname, int flags, ...) */
int c_open(const char *pathname, int flags, mode_t mode)
{
    return open(pathname, flags, mode);
}

/* int scanf(const char *format, ...) */
int c_scanf(const char *format, const char *arg)
{
    return scanf(format, arg);
}

/* void syslog(int priority, const char *format, ...) */
void c_syslog(int priority, const char *format, const char *arg)
{
    syslog(priority, format, arg);
}

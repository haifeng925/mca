const char *__nanos_family __attribute__((weak))  = "deps_api";
int __nanos_version __attribute__((weak))  = 1001;
int __mcc_deps_api __attribute__((weak))  = 1001;
int __mcc_master __attribute__((weak))  = 5019;
int __mcc_openmp __attribute__((weak))  = 6;
int __mcc_trunk __attribute__((weak))  = 399;
int __mcc_worksharing __attribute__((weak))  = 1000;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct 
{
        int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef __ssize_t ssize_t;
typedef long unsigned int size_t;
typedef __gid_t gid_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __useconds_t useconds_t;
typedef __pid_t pid_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access(__const char *__name, int __type) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__((__nothrow__)) __attribute__((__nonnull__(2))) __attribute__((__warn_unused_result__));
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute__((__nothrow__));
extern int close(int __fd);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes) __attribute__((__warn_unused_result__));
extern ssize_t write(int __fd, __const void *__buf, size_t __n) __attribute__((__warn_unused_result__));
extern ssize_t pread(int __fd, void *__buf, size_t __nbytes, __off_t __offset) __attribute__((__warn_unused_result__));
extern ssize_t pwrite(int __fd, __const void *__buf, size_t __n, __off_t __offset) __attribute__((__warn_unused_result__));
extern int pipe(int __pipedes[2]) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern unsigned int alarm(unsigned int __seconds) __attribute__((__nothrow__));
extern unsigned int sleep(unsigned int __seconds);
extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval) __attribute__((__nothrow__));
extern int usleep(__useconds_t __useconds);
extern int pause(void);
extern int chown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int fchown(int __fd, __uid_t __owner, __gid_t __group) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int lchown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int fchownat(int __fd, __const char *__file, __uid_t __owner, __gid_t __group, int __flag) __attribute__((__nothrow__)) __attribute__((__nonnull__(2))) __attribute__((__warn_unused_result__));
extern int chdir(__const char *__path) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int fchdir(int __fd) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *getcwd(char *__buf, size_t __size) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *getwd(char *__buf) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__deprecated__)) __attribute__((__warn_unused_result__));
extern int dup(int __fd) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int dup2(int __fd, int __fd2) __attribute__((__nothrow__));
extern char **__environ;
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int execv(__const char *__path, char *__const __argv[]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int nice(int __inc) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void _exit(int __status) __attribute__((__noreturn__));
enum 
{
    _PC_LINK_MAX, 
    _PC_MAX_CANON, 
    _PC_MAX_INPUT, 
    _PC_NAME_MAX, 
    _PC_PATH_MAX, 
    _PC_PIPE_BUF, 
    _PC_CHOWN_RESTRICTED, 
    _PC_NO_TRUNC, 
    _PC_VDISABLE, 
    _PC_SYNC_IO, 
    _PC_ASYNC_IO, 
    _PC_PRIO_IO, 
    _PC_SOCK_MAXBUF, 
    _PC_FILESIZEBITS, 
    _PC_REC_INCR_XFER_SIZE, 
    _PC_REC_MAX_XFER_SIZE, 
    _PC_REC_MIN_XFER_SIZE, 
    _PC_REC_XFER_ALIGN, 
    _PC_ALLOC_SIZE_MIN, 
    _PC_SYMLINK_MAX, 
    _PC_2_SYMLINKS
};
enum 
{
    _SC_ARG_MAX, 
    _SC_CHILD_MAX, 
    _SC_CLK_TCK, 
    _SC_NGROUPS_MAX, 
    _SC_OPEN_MAX, 
    _SC_STREAM_MAX, 
    _SC_TZNAME_MAX, 
    _SC_JOB_CONTROL, 
    _SC_SAVED_IDS, 
    _SC_REALTIME_SIGNALS, 
    _SC_PRIORITY_SCHEDULING, 
    _SC_TIMERS, 
    _SC_ASYNCHRONOUS_IO, 
    _SC_PRIORITIZED_IO, 
    _SC_SYNCHRONIZED_IO, 
    _SC_FSYNC, 
    _SC_MAPPED_FILES, 
    _SC_MEMLOCK, 
    _SC_MEMLOCK_RANGE, 
    _SC_MEMORY_PROTECTION, 
    _SC_MESSAGE_PASSING, 
    _SC_SEMAPHORES, 
    _SC_SHARED_MEMORY_OBJECTS, 
    _SC_AIO_LISTIO_MAX, 
    _SC_AIO_MAX, 
    _SC_AIO_PRIO_DELTA_MAX, 
    _SC_DELAYTIMER_MAX, 
    _SC_MQ_OPEN_MAX, 
    _SC_MQ_PRIO_MAX, 
    _SC_VERSION, 
    _SC_PAGESIZE, 
    _SC_RTSIG_MAX, 
    _SC_SEM_NSEMS_MAX, 
    _SC_SEM_VALUE_MAX, 
    _SC_SIGQUEUE_MAX, 
    _SC_TIMER_MAX, 
    _SC_BC_BASE_MAX, 
    _SC_BC_DIM_MAX, 
    _SC_BC_SCALE_MAX, 
    _SC_BC_STRING_MAX, 
    _SC_COLL_WEIGHTS_MAX, 
    _SC_EQUIV_CLASS_MAX, 
    _SC_EXPR_NEST_MAX, 
    _SC_LINE_MAX, 
    _SC_RE_DUP_MAX, 
    _SC_CHARCLASS_NAME_MAX, 
    _SC_2_VERSION, 
    _SC_2_C_BIND, 
    _SC_2_C_DEV, 
    _SC_2_FORT_DEV, 
    _SC_2_FORT_RUN, 
    _SC_2_SW_DEV, 
    _SC_2_LOCALEDEF, 
    _SC_PII, 
    _SC_PII_XTI, 
    _SC_PII_SOCKET, 
    _SC_PII_INTERNET, 
    _SC_PII_OSI, 
    _SC_POLL, 
    _SC_SELECT, 
    _SC_UIO_MAXIOV, 
    _SC_IOV_MAX = _SC_UIO_MAXIOV, 
    _SC_PII_INTERNET_STREAM, 
    _SC_PII_INTERNET_DGRAM, 
    _SC_PII_OSI_COTS, 
    _SC_PII_OSI_CLTS, 
    _SC_PII_OSI_M, 
    _SC_T_IOV_MAX, 
    _SC_THREADS, 
    _SC_THREAD_SAFE_FUNCTIONS, 
    _SC_GETGR_R_SIZE_MAX, 
    _SC_GETPW_R_SIZE_MAX, 
    _SC_LOGIN_NAME_MAX, 
    _SC_TTY_NAME_MAX, 
    _SC_THREAD_DESTRUCTOR_ITERATIONS, 
    _SC_THREAD_KEYS_MAX, 
    _SC_THREAD_STACK_MIN, 
    _SC_THREAD_THREADS_MAX, 
    _SC_THREAD_ATTR_STACKADDR, 
    _SC_THREAD_ATTR_STACKSIZE, 
    _SC_THREAD_PRIORITY_SCHEDULING, 
    _SC_THREAD_PRIO_INHERIT, 
    _SC_THREAD_PRIO_PROTECT, 
    _SC_THREAD_PROCESS_SHARED, 
    _SC_NPROCESSORS_CONF, 
    _SC_NPROCESSORS_ONLN, 
    _SC_PHYS_PAGES, 
    _SC_AVPHYS_PAGES, 
    _SC_ATEXIT_MAX, 
    _SC_PASS_MAX, 
    _SC_XOPEN_VERSION, 
    _SC_XOPEN_XCU_VERSION, 
    _SC_XOPEN_UNIX, 
    _SC_XOPEN_CRYPT, 
    _SC_XOPEN_ENH_I18N, 
    _SC_XOPEN_SHM, 
    _SC_2_CHAR_TERM, 
    _SC_2_C_VERSION, 
    _SC_2_UPE, 
    _SC_XOPEN_XPG2, 
    _SC_XOPEN_XPG3, 
    _SC_XOPEN_XPG4, 
    _SC_CHAR_BIT, 
    _SC_CHAR_MAX, 
    _SC_CHAR_MIN, 
    _SC_INT_MAX, 
    _SC_INT_MIN, 
    _SC_LONG_BIT, 
    _SC_WORD_BIT, 
    _SC_MB_LEN_MAX, 
    _SC_NZERO, 
    _SC_SSIZE_MAX, 
    _SC_SCHAR_MAX, 
    _SC_SCHAR_MIN, 
    _SC_SHRT_MAX, 
    _SC_SHRT_MIN, 
    _SC_UCHAR_MAX, 
    _SC_UINT_MAX, 
    _SC_ULONG_MAX, 
    _SC_USHRT_MAX, 
    _SC_NL_ARGMAX, 
    _SC_NL_LANGMAX, 
    _SC_NL_MSGMAX, 
    _SC_NL_NMAX, 
    _SC_NL_SETMAX, 
    _SC_NL_TEXTMAX, 
    _SC_XBS5_ILP32_OFF32, 
    _SC_XBS5_ILP32_OFFBIG, 
    _SC_XBS5_LP64_OFF64, 
    _SC_XBS5_LPBIG_OFFBIG, 
    _SC_XOPEN_LEGACY, 
    _SC_XOPEN_REALTIME, 
    _SC_XOPEN_REALTIME_THREADS, 
    _SC_ADVISORY_INFO, 
    _SC_BARRIERS, 
    _SC_BASE, 
    _SC_C_LANG_SUPPORT, 
    _SC_C_LANG_SUPPORT_R, 
    _SC_CLOCK_SELECTION, 
    _SC_CPUTIME, 
    _SC_THREAD_CPUTIME, 
    _SC_DEVICE_IO, 
    _SC_DEVICE_SPECIFIC, 
    _SC_DEVICE_SPECIFIC_R, 
    _SC_FD_MGMT, 
    _SC_FIFO, 
    _SC_PIPE, 
    _SC_FILE_ATTRIBUTES, 
    _SC_FILE_LOCKING, 
    _SC_FILE_SYSTEM, 
    _SC_MONOTONIC_CLOCK, 
    _SC_MULTI_PROCESS, 
    _SC_SINGLE_PROCESS, 
    _SC_NETWORKING, 
    _SC_READER_WRITER_LOCKS, 
    _SC_SPIN_LOCKS, 
    _SC_REGEXP, 
    _SC_REGEX_VERSION, 
    _SC_SHELL, 
    _SC_SIGNALS, 
    _SC_SPAWN, 
    _SC_SPORADIC_SERVER, 
    _SC_THREAD_SPORADIC_SERVER, 
    _SC_SYSTEM_DATABASE, 
    _SC_SYSTEM_DATABASE_R, 
    _SC_TIMEOUTS, 
    _SC_TYPED_MEMORY_OBJECTS, 
    _SC_USER_GROUPS, 
    _SC_USER_GROUPS_R, 
    _SC_2_PBS, 
    _SC_2_PBS_ACCOUNTING, 
    _SC_2_PBS_LOCATE, 
    _SC_2_PBS_MESSAGE, 
    _SC_2_PBS_TRACK, 
    _SC_SYMLOOP_MAX, 
    _SC_STREAMS, 
    _SC_2_PBS_CHECKPOINT, 
    _SC_V6_ILP32_OFF32, 
    _SC_V6_ILP32_OFFBIG, 
    _SC_V6_LP64_OFF64, 
    _SC_V6_LPBIG_OFFBIG, 
    _SC_HOST_NAME_MAX, 
    _SC_TRACE, 
    _SC_TRACE_EVENT_FILTER, 
    _SC_TRACE_INHERIT, 
    _SC_TRACE_LOG, 
    _SC_LEVEL1_ICACHE_SIZE, 
    _SC_LEVEL1_ICACHE_ASSOC, 
    _SC_LEVEL1_ICACHE_LINESIZE, 
    _SC_LEVEL1_DCACHE_SIZE, 
    _SC_LEVEL1_DCACHE_ASSOC, 
    _SC_LEVEL1_DCACHE_LINESIZE, 
    _SC_LEVEL2_CACHE_SIZE, 
    _SC_LEVEL2_CACHE_ASSOC, 
    _SC_LEVEL2_CACHE_LINESIZE, 
    _SC_LEVEL3_CACHE_SIZE, 
    _SC_LEVEL3_CACHE_ASSOC, 
    _SC_LEVEL3_CACHE_LINESIZE, 
    _SC_LEVEL4_CACHE_SIZE, 
    _SC_LEVEL4_CACHE_ASSOC, 
    _SC_LEVEL4_CACHE_LINESIZE, 
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, 
    _SC_RAW_SOCKETS, 
    _SC_V7_ILP32_OFF32, 
    _SC_V7_ILP32_OFFBIG, 
    _SC_V7_LP64_OFF64, 
    _SC_V7_LPBIG_OFFBIG, 
    _SC_SS_REPL_MAX, 
    _SC_TRACE_EVENT_NAME_MAX, 
    _SC_TRACE_NAME_MAX, 
    _SC_TRACE_SYS_MAX, 
    _SC_TRACE_USER_EVENT_MAX, 
    _SC_XOPEN_STREAMS, 
    _SC_THREAD_ROBUST_PRIO_INHERIT, 
    _SC_THREAD_ROBUST_PRIO_PROTECT
};
enum 
{
    _CS_PATH, 
    _CS_V6_WIDTH_RESTRICTED_ENVS, 
    _CS_GNU_LIBC_VERSION, 
    _CS_GNU_LIBPTHREAD_VERSION, 
    _CS_V5_WIDTH_RESTRICTED_ENVS, 
    _CS_V7_WIDTH_RESTRICTED_ENVS, 
    _CS_LFS_CFLAGS = 1000, 
    _CS_LFS_LDFLAGS, 
    _CS_LFS_LIBS, 
    _CS_LFS_LINTFLAGS, 
    _CS_LFS64_CFLAGS, 
    _CS_LFS64_LDFLAGS, 
    _CS_LFS64_LIBS, 
    _CS_LFS64_LINTFLAGS, 
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, 
    _CS_XBS5_ILP32_OFF32_LDFLAGS, 
    _CS_XBS5_ILP32_OFF32_LIBS, 
    _CS_XBS5_ILP32_OFF32_LINTFLAGS, 
    _CS_XBS5_ILP32_OFFBIG_CFLAGS, 
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS, 
    _CS_XBS5_ILP32_OFFBIG_LIBS, 
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, 
    _CS_XBS5_LP64_OFF64_CFLAGS, 
    _CS_XBS5_LP64_OFF64_LDFLAGS, 
    _CS_XBS5_LP64_OFF64_LIBS, 
    _CS_XBS5_LP64_OFF64_LINTFLAGS, 
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS, 
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, 
    _CS_XBS5_LPBIG_OFFBIG_LIBS, 
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, 
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 
    _CS_POSIX_V6_ILP32_OFF32_LIBS, 
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, 
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, 
    _CS_POSIX_V6_LP64_OFF64_CFLAGS, 
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 
    _CS_POSIX_V6_LP64_OFF64_LIBS, 
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, 
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, 
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS, 
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, 
    _CS_POSIX_V7_ILP32_OFF32_LIBS, 
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, 
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, 
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, 
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS, 
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, 
    _CS_POSIX_V7_LP64_OFF64_CFLAGS, 
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS, 
    _CS_POSIX_V7_LP64_OFF64_LIBS, 
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, 
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, 
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, 
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, 
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS, 
    _CS_V6_ENV, 
    _CS_V7_ENV
};
extern long int pathconf(__const char *__path, int __name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern long int fpathconf(int __fd, int __name) __attribute__((__nothrow__));
extern long int sysconf(int __name) __attribute__((__nothrow__));
extern size_t confstr(int __name, char *__buf, size_t __len) __attribute__((__nothrow__));
extern __pid_t getpid(void) __attribute__((__nothrow__));
extern __pid_t getppid(void) __attribute__((__nothrow__));
extern __pid_t getpgrp(void) __attribute__((__nothrow__));
extern __pid_t __getpgid(__pid_t __pid) __attribute__((__nothrow__));
extern __pid_t getpgid(__pid_t __pid) __attribute__((__nothrow__));
extern int setpgid(__pid_t __pid, __pid_t __pgid) __attribute__((__nothrow__));
extern int setpgrp(void) __attribute__((__nothrow__));
extern __pid_t setsid(void) __attribute__((__nothrow__));
extern __pid_t getsid(__pid_t __pid) __attribute__((__nothrow__));
extern __uid_t getuid(void) __attribute__((__nothrow__));
extern __uid_t geteuid(void) __attribute__((__nothrow__));
extern __gid_t getgid(void) __attribute__((__nothrow__));
extern __gid_t getegid(void) __attribute__((__nothrow__));
extern int getgroups(int __size, __gid_t __list[]) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int setuid(__uid_t __uid) __attribute__((__nothrow__));
extern int setreuid(__uid_t __ruid, __uid_t __euid) __attribute__((__nothrow__));
extern int seteuid(__uid_t __uid) __attribute__((__nothrow__));
extern int setgid(__gid_t __gid) __attribute__((__nothrow__));
extern int setregid(__gid_t __rgid, __gid_t __egid) __attribute__((__nothrow__));
extern int setegid(__gid_t __gid) __attribute__((__nothrow__));
extern __pid_t fork(void) __attribute__((__nothrow__));
extern __pid_t vfork(void) __attribute__((__nothrow__));
extern char *ttyname(int __fd) __attribute__((__nothrow__));
extern int ttyname_r(int __fd, char *__buf, size_t __buflen) __attribute__((__nothrow__)) __attribute__((__nonnull__(2))) __attribute__((__warn_unused_result__));
extern int isatty(int __fd) __attribute__((__nothrow__));
extern int ttyslot(void) __attribute__((__nothrow__));
extern int link(__const char *__from, __const char *__to) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__));
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 4))) __attribute__((__warn_unused_result__));
extern int symlink(__const char *__from, __const char *__to) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__));
extern ssize_t readlink(__const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__));
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 3))) __attribute__((__warn_unused_result__));
extern ssize_t readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3))) __attribute__((__warn_unused_result__));
extern int unlink(__const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int rmdir(__const char *__path) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern __pid_t tcgetpgrp(int __fd) __attribute__((__nothrow__));
extern int tcsetpgrp(int __fd, __pid_t __pgrp_id) __attribute__((__nothrow__));
extern char *getlogin(void);
extern int getlogin_r(char *__name, size_t __name_len) __attribute__((__nonnull__(1)));
extern int setlogin(__const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__((__nothrow__));
extern int gethostname(char *__name, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int sethostname(__const char *__name, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int sethostid(long int __id) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int getdomainname(char *__name, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int setdomainname(__const char *__name, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int vhangup(void) __attribute__((__nothrow__));
extern int revoke(__const char *__file) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int profil(unsigned short int *__sample_buffer, size_t __size, size_t __offset, unsigned int __scale) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int acct(__const char *__name) __attribute__((__nothrow__));
extern char *getusershell(void) __attribute__((__nothrow__));
extern void endusershell(void) __attribute__((__nothrow__));
extern void setusershell(void) __attribute__((__nothrow__));
extern int daemon(int __nochdir, int __noclose) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int chroot(__const char *__path) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern char *getpass(__const char *__prompt) __attribute__((__nonnull__(1)));
extern int fsync(int __fd);
extern long int gethostid(void);
extern void sync(void) __attribute__((__nothrow__));
extern int getpagesize(void) __attribute__((__nothrow__)) __attribute__((__const__));
extern int getdtablesize(void) __attribute__((__nothrow__));
extern int truncate(__const char *__file, __off_t __length) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int ftruncate(int __fd, __off_t __length) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int brk(void *__addr) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void *sbrk(intptr_t __delta) __attribute__((__nothrow__));
extern long int syscall(long int __sysno, ...) __attribute__((__nothrow__));
extern int lockf(int __fd, int __cmd, __off_t __len) __attribute__((__warn_unused_result__));
extern int fdatasync(int __fildes);
extern char *ctermid(char *__s) __attribute__((__nothrow__));
extern ssize_t __read_chk(int __fd, void *__buf, size_t __nbytes, size_t __buflen) __attribute__((__warn_unused_result__));
extern ssize_t __read_alias(int __fd, void *__buf, size_t __nbytes) __asm__ ("""read") __attribute__((__warn_unused_result__));
extern ssize_t __read_chk_warn(int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("""__read_chk") __attribute__((__warn_unused_result__)) __attribute__((__warning__("read called with bigger length than size of ""the destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) ssize_t read(int __fd, void *__buf, size_t __nbytes)
{
    if (__builtin_object_size(__buf, 0) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__nbytes))
            return __read_chk(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
        if (__nbytes > __builtin_object_size(__buf, 0))
            return __read_chk_warn(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
    }
    return __read_alias(__fd, __buf, __nbytes);
}
extern ssize_t __readlink_chk(__const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__));
extern ssize_t __readlink_alias(__const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("""readlink") __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__));
extern ssize_t __readlink_chk_warn(__const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("""__readlink_chk") __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__)) __attribute__((__warning__("readlink called with bigger length ""than size of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__nonnull__(1, 2))) __attribute__((__warn_unused_result__)) ssize_t __attribute__((__nothrow__)) readlink(__const char *__restrict __path, char *__restrict __buf, size_t __len)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__len))
            return __readlink_chk(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
        if (__len > __builtin_object_size(__buf, 2 > 1))
            return __readlink_chk_warn(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
    }
    return __readlink_alias(__path, __buf, __len);
}
extern ssize_t __readlinkat_chk(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3))) __attribute__((__warn_unused_result__));
extern ssize_t __readlinkat_alias(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("""readlinkat") __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3))) __attribute__((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("""__readlinkat_chk") __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3))) __attribute__((__warn_unused_result__)) __attribute__((__warning__("readlinkat called with bigger ""length than size of destination ""buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__nonnull__(2, 3))) __attribute__((__warn_unused_result__)) ssize_t __attribute__((__nothrow__)) readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__len))
            return __readlinkat_chk(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
        if (__len > __builtin_object_size(__buf, 2 > 1))
            return __readlinkat_chk_warn(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
    }
    return __readlinkat_alias(__fd, __path, __buf, __len);
}
extern char *__getcwd_chk(char *__buf, size_t __size, size_t __buflen) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *__getcwd_alias(char *__buf, size_t __size) __asm__ ("""getcwd") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *__getcwd_chk_warn(char *__buf, size_t __size, size_t __buflen) __asm__ ("""__getcwd_chk") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__)) __attribute__((__warning__("getcwd caller with bigger length than size of ""destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) char *__attribute__((__nothrow__)) getcwd(char *__buf, size_t __size)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__size))
            return __getcwd_chk(__buf, __size, __builtin_object_size(__buf, 2 > 1));
        if (__size > __builtin_object_size(__buf, 2 > 1))
            return __getcwd_chk_warn(__buf, __size, __builtin_object_size(__buf, 2 > 1));
    }
    return __getcwd_alias(__buf, __size);
}
extern char *__getwd_chk(char *__buf, size_t buflen) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern char *__getwd_warn(char *__buf) __asm__ ("""getwd") __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__)) __attribute__((__warning__("please use getcwd instead, as getwd ""doesn't specify buffer size")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__nonnull__(1))) __attribute__((__deprecated__)) __attribute__((__warn_unused_result__)) char *__attribute__((__nothrow__)) getwd(char *__buf)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
        return __getwd_chk(__buf, __builtin_object_size(__buf, 2 > 1));
    return __getwd_warn(__buf);
}
extern size_t __confstr_chk(int __name, char *__buf, size_t __len, size_t __buflen) __attribute__((__nothrow__));
extern size_t __confstr_alias(int __name, char *__buf, size_t __len) __asm__ ("""confstr") __attribute__((__nothrow__));
extern size_t __confstr_chk_warn(int __name, char *__buf, size_t __len, size_t __buflen) __asm__ ("""__confstr_chk") __attribute__((__nothrow__)) __attribute__((__warning__("confstr called with bigger length than size of destination ""buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) size_t __attribute__((__nothrow__)) confstr(int __name, char *__buf, size_t __len)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__len))
            return __confstr_chk(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
        if (__builtin_object_size(__buf, 2 > 1) < __len)
            return __confstr_chk_warn(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
    }
    return __confstr_alias(__name, __buf, __len);
}
extern int __getgroups_chk(int __size, __gid_t __list[], size_t __listlen) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int __getgroups_alias(int __size, __gid_t __list[]) __asm__ ("""getgroups") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int __getgroups_chk_warn(int __size, __gid_t __list[], size_t __listlen) __asm__ ("""__getgroups_chk") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__)) __attribute__((__warning__("getgroups called with bigger group count than what ""can fit into destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) getgroups(int __size, __gid_t __list[])
{
    if (__builtin_object_size(__list, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__size) || __size < 0)
            return __getgroups_chk(__size, __list, __builtin_object_size(__list, 2 > 1));
        if (__size * sizeof(__gid_t) > __builtin_object_size(__list, 2 > 1))
            return __getgroups_chk_warn(__size, __list, __builtin_object_size(__list, 2 > 1));
    }
    return __getgroups_alias(__size, __list);
}
extern int __ttyname_r_chk(int __fd, char *__buf, size_t __buflen, size_t __nreal) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int __ttyname_r_alias(int __fd, char *__buf, size_t __buflen) __asm__ ("""ttyname_r") __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int __ttyname_r_chk_warn(int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("""__ttyname_r_chk") __attribute__((__nothrow__)) __attribute__((__nonnull__(2))) __attribute__((__warning__("ttyname_r called with bigger buflen than ""size of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) ttyname_r(int __fd, char *__buf, size_t __buflen)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__buflen))
            return __ttyname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
        if (__buflen > __builtin_object_size(__buf, 2 > 1))
            return __ttyname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
    }
    return __ttyname_r_alias(__fd, __buf, __buflen);
}
extern int __getlogin_r_chk(char *__buf, size_t __buflen, size_t __nreal) __attribute__((__nonnull__(1)));
extern int __getlogin_r_alias(char *__buf, size_t __buflen) __asm__ ("""getlogin_r") __attribute__((__nonnull__(1)));
extern int __getlogin_r_chk_warn(char *__buf, size_t __buflen, size_t __nreal) __asm__ ("""__getlogin_r_chk") __attribute__((__nonnull__(1))) __attribute__((__warning__("getlogin_r called with bigger buflen than ""size of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int getlogin_r(char *__buf, size_t __buflen)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__buflen))
            return __getlogin_r_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
        if (__buflen > __builtin_object_size(__buf, 2 > 1))
            return __getlogin_r_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
    }
    return __getlogin_r_alias(__buf, __buflen);
}
extern int __gethostname_chk(char *__buf, size_t __buflen, size_t __nreal) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int __gethostname_alias(char *__buf, size_t __buflen) __asm__ ("""gethostname") __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int __gethostname_chk_warn(char *__buf, size_t __buflen, size_t __nreal) __asm__ ("""__gethostname_chk") __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warning__("gethostname called with bigger buflen than ""size of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) gethostname(char *__buf, size_t __buflen)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__buflen))
            return __gethostname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
        if (__buflen > __builtin_object_size(__buf, 2 > 1))
            return __gethostname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
    }
    return __gethostname_alias(__buf, __buflen);
}
extern int __getdomainname_chk(char *__buf, size_t __buflen, size_t __nreal) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int __getdomainname_alias(char *__buf, size_t __buflen) __asm__ ("""getdomainname") __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int __getdomainname_chk_warn(char *__buf, size_t __buflen, size_t __nreal) __asm__ ("""__getdomainname_chk") __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__)) __attribute__((__warning__("getdomainname called with bigger ""buflen than size of destination ""buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) getdomainname(char *__buf, size_t __buflen)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__buflen))
            return __getdomainname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
        if (__buflen > __builtin_object_size(__buf, 2 > 1))
            return __getdomainname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
    }
    return __getdomainname_alias(__buf, __buflen);
}
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct 
{
        int __count;
        union 
        {
                unsigned int __wch;
                char __wchb[4];
        } __value;
} __mbstate_t;
typedef struct 
{
        __off_t __pos;
        __mbstate_t __state;
} _G_fpos_t;
typedef struct 
{
        __off64_t __pos;
        __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__((__mode__(__HI__)));
typedef int _G_int32_t __attribute__((__mode__(__SI__)));
typedef unsigned int _G_uint16_t __attribute__((__mode__(__HI__)));
typedef unsigned int _G_uint32_t __attribute__((__mode__(__SI__)));
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
        struct _IO_marker *_next;
        struct _IO_FILE *_sbuf;
        int _pos;
};
enum __codecvt_result
{
    __codecvt_ok, 
    __codecvt_partial, 
    __codecvt_error, 
    __codecvt_noconv
};
struct _IO_FILE
{
        int _flags;
        char *_IO_read_ptr;
        char *_IO_read_end;
        char *_IO_read_base;
        char *_IO_write_base;
        char *_IO_write_ptr;
        char *_IO_write_end;
        char *_IO_buf_base;
        char *_IO_buf_end;
        char *_IO_save_base;
        char *_IO_backup_base;
        char *_IO_save_end;
        struct _IO_marker *_markers;
        struct _IO_FILE *_chain;
        int _fileno;
        int _flags2;
        __off_t _old_offset;
        unsigned short _cur_column;
        signed char _vtable_offset;
        char _shortbuf[1];
        _IO_lock_t *_lock;
        __off64_t _offset;
        void *__pad1;
        void *__pad2;
        void *__pad3;
        void *__pad4;
        size_t __pad5;
        int _mode;
        char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn(void *__cookie, __const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE *__fp);
extern int _IO_putc(int __c, _IO_FILE *__fp);
extern int _IO_feof(_IO_FILE *__fp) __attribute__((__nothrow__));
extern int _IO_ferror(_IO_FILE *__fp) __attribute__((__nothrow__));
extern int _IO_peekc_locked(_IO_FILE *__fp);
extern void _IO_flockfile(_IO_FILE *) __attribute__((__nothrow__));
extern void _IO_funlockfile(_IO_FILE *) __attribute__((__nothrow__));
extern int _IO_ftrylockfile(_IO_FILE *) __attribute__((__nothrow__));
extern int _IO_vfscanf(_IO_FILE *__restrict , const char *__restrict , __gnuc_va_list, int *__restrict );
extern int _IO_vfprintf(_IO_FILE *__restrict , const char *__restrict , __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area(_IO_FILE *) __attribute__((__nothrow__));
typedef __gnuc_va_list va_list;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove(__const char *__filename) __attribute__((__nothrow__));
extern int rename(__const char *__old, __const char *__new) __attribute__((__nothrow__));
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__((__nothrow__));
extern FILE *tmpfile(void) __attribute__((__warn_unused_result__));
extern char *tmpnam(char *__s) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *tmpnam_r(char *__s) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
extern int fclose(FILE *__stream);
extern int fflush(FILE *__stream);
extern int fflush_unlocked(FILE *__stream);
extern FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes) __attribute__((__warn_unused_result__));
extern FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern FILE *fdopen(int __fd, __const char *__modes) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern FILE *fmemopen(void *__s, size_t __len, __const char *__modes) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern FILE *open_memstream(char **__bufloc, size_t *__sizeloc) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void setbuf(FILE *__restrict __stream, char *__restrict __buf) __attribute__((__nothrow__));
extern int setvbuf(FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __n) __attribute__((__nothrow__));
extern void setbuffer(FILE *__restrict __stream, char *__restrict __buf, size_t __size) __attribute__((__nothrow__));
extern void setlinebuf(FILE *__stream) __attribute__((__nothrow__));
extern int fprintf(FILE *__restrict __stream, __const char *__restrict __format, ...);
extern int printf(__const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__((__nothrow__));
extern int vfprintf(FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg);
extern int vprintf(__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 0)));
extern int vdprintf(int __fd, __const char *__restrict __fmt, __gnuc_va_list __arg) __attribute__((__format__(__printf__, 2, 0)));
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__((__format__(__printf__, 2, 3)));
extern int fscanf(FILE *__restrict __stream, __const char *__restrict __format, ...) __attribute__((__warn_unused_result__));
extern int scanf(__const char *__restrict __format, ...) __attribute__((__warn_unused_result__));
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__((__nothrow__));
extern int fscanf(FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf") __attribute__((__warn_unused_result__));
extern int scanf(__const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf") __attribute__((__warn_unused_result__));
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__((__nothrow__));
extern int vfscanf(FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__((__format__(__scanf__, 2, 0))) __attribute__((__warn_unused_result__));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __attribute__((__format__(__scanf__, 1, 0))) __attribute__((__warn_unused_result__));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__((__nothrow__)) __attribute__((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__((__format__(__scanf__, 2, 0))) __attribute__((__warn_unused_result__));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__((__format__(__scanf__, 1, 0))) __attribute__((__warn_unused_result__));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__((__nothrow__)) __attribute__((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE *__stream);
extern int getc(FILE *__stream);
extern int getchar(void);
extern int getc_unlocked(FILE *__stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE *__stream);
extern int fputc(int __c, FILE *__stream);
extern int putc(int __c, FILE *__stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE *__stream);
extern int putc_unlocked(int __c, FILE *__stream);
extern int putchar_unlocked(int __c);
extern int getw(FILE *__stream);
extern int putw(int __w, FILE *__stream);
extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern char *gets(char *__s) __attribute__((__warn_unused_result__));
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t *__restrict __n, int __delimiter, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern __ssize_t getdelim(char **__restrict __lineptr, size_t *__restrict __n, int __delimiter, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern int fputs(__const char *__restrict __s, FILE *__restrict __stream);
extern int puts(__const char *__s);
extern int ungetc(int __c, FILE *__stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern size_t fwrite(__const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __s) __attribute__((__warn_unused_result__));
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern size_t fwrite_unlocked(__const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern int fseek(FILE *__stream, long int __off, int __whence);
extern long int ftell(FILE *__stream) __attribute__((__warn_unused_result__));
extern void rewind(FILE *__stream);
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello(FILE *__stream) __attribute__((__warn_unused_result__));
extern int fgetpos(FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos(FILE *__stream, __const fpos_t *__pos);
extern void clearerr(FILE *__stream) __attribute__((__nothrow__));
extern int feof(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int ferror(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void clearerr_unlocked(FILE *__stream) __attribute__((__nothrow__));
extern int feof_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int ferror_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void perror(__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int fileno_unlocked(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern FILE *popen(__const char *__command, __const char *__modes) __attribute__((__warn_unused_result__));
extern int pclose(FILE *__stream);
extern char *ctermid(char *__s) __attribute__((__nothrow__));
extern void flockfile(FILE *__stream) __attribute__((__nothrow__));
extern int ftrylockfile(FILE *__stream) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void funlockfile(FILE *__stream) __attribute__((__nothrow__));
extern __inline __attribute__((__gnu_inline__)) int getchar(void)
{
    return _IO_getc(stdin);
}
extern __inline __attribute__((__gnu_inline__)) int fgetc_unlocked(FILE *__fp)
{
    return (__builtin_expect(((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow(__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__((__gnu_inline__)) int getc_unlocked(FILE *__fp)
{
    return (__builtin_expect(((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow(__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__((__gnu_inline__)) int getchar_unlocked(void)
{
    return (__builtin_expect(((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow(stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}
extern __inline __attribute__((__gnu_inline__)) int putchar(int __c)
{
    return _IO_putc(__c, stdout);
}
extern __inline __attribute__((__gnu_inline__)) int fputc_unlocked(int __c, FILE *__stream)
{
    return (__builtin_expect(((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow(__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__((__gnu_inline__)) int putc_unlocked(int __c, FILE *__stream)
{
    return (__builtin_expect(((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow(__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__((__gnu_inline__)) int putchar_unlocked(int __c)
{
    return (__builtin_expect(((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow(stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__((__gnu_inline__)) int __attribute__((__nothrow__)) feof_unlocked(FILE *__stream)
{
    return (((__stream)->_flags & 0x10) != 0);
}
extern __inline __attribute__((__gnu_inline__)) int __attribute__((__nothrow__)) ferror_unlocked(FILE *__stream)
{
    return (((__stream)->_flags & 0x20) != 0);
}
extern int __sprintf_chk(char *__restrict __s, int __flag, size_t __slen, __const char *__restrict __format, ...) __attribute__((__nothrow__));
extern int __vsprintf_chk(char *__restrict __s, int __flag, size_t __slen, __const char *__restrict __format, __gnuc_va_list __ap) __attribute__((__nothrow__));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) sprintf(char *__restrict __s, __const char *__restrict __fmt, ...)
{
    return __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) vsprintf(char *__restrict __s, __const char *__restrict __fmt, __gnuc_va_list __ap)
{
    return __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
}
extern int __snprintf_chk(char *__restrict __s, size_t __n, int __flag, size_t __slen, __const char *__restrict __format, ...) __attribute__((__nothrow__));
extern int __vsnprintf_chk(char *__restrict __s, size_t __n, int __flag, size_t __slen, __const char *__restrict __format, __gnuc_va_list __ap) __attribute__((__nothrow__));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) snprintf(char *__restrict __s, size_t __n, __const char *__restrict __fmt, ...)
{
    return __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) vsnprintf(char *__restrict __s, size_t __n, __const char *__restrict __fmt, __gnuc_va_list __ap)
{
    return __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
}
extern int __fprintf_chk(FILE *__restrict __stream, int __flag, __const char *__restrict __format, ...);
extern int __printf_chk(int __flag, __const char *__restrict __format, ...);
extern int __vfprintf_chk(FILE *__restrict __stream, int __flag, __const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk(int __flag, __const char *__restrict __format, __gnuc_va_list __ap);
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int fprintf(FILE *__restrict __stream, __const char *__restrict __fmt, ...)
{
    return __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack());
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int printf(__const char *__restrict __fmt, ...)
{
    return __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack());
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int vprintf(__const char *__restrict __fmt, __gnuc_va_list __ap)
{
    return __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int vfprintf(FILE *__restrict __stream, __const char *__restrict __fmt, __gnuc_va_list __ap)
{
    return __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
}
extern char *__gets_chk(char *__str, size_t) __attribute__((__warn_unused_result__));
extern char *__gets_warn(char *__str) __asm__ ("""gets") __attribute__((__warn_unused_result__)) __attribute__((__warning__("please use fgets or getline instead, gets can't ""specify buffer size")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) char *gets(char *__str)
{
    if (__builtin_object_size(__str, 2 > 1) != (size_t) - 1)
        return __gets_chk(__str, __builtin_object_size(__str, 2 > 1));
    return __gets_warn(__str);
}
extern char *__fgets_chk(char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern char *__fgets_alias(char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("""fgets") __attribute__((__warn_unused_result__));
extern char *__fgets_chk_warn(char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("""__fgets_chk") __attribute__((__warn_unused_result__)) __attribute__((__warning__("fgets called with bigger size than length ""of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream)
{
    if (__builtin_object_size(__s, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__n) || __n <= 0)
            return __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
        if ((size_t) __n > __builtin_object_size(__s, 2 > 1))
            return __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
    }
    return __fgets_alias(__s, __n, __stream);
}
extern size_t __fread_chk(void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern size_t __fread_alias(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("""fread") __attribute__((__warn_unused_result__));
extern size_t __fread_chk_warn(void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("""__fread_chk") __attribute__((__warn_unused_result__)) __attribute__((__warning__("fread called with bigger size * nmemb than length ""of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream)
{
    if (__builtin_object_size(__ptr, 0) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__size) || !__builtin_constant_p(__n) || (__size | __n) >= (((size_t) 1) << (8 * sizeof(size_t) / 2)))
            return __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
        if (__size * __n > __builtin_object_size(__ptr, 0))
            return __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
    }
    return __fread_alias(__ptr, __size, __n, __stream);
}
extern size_t __fread_unlocked_chk(void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __attribute__((__warn_unused_result__));
extern size_t __fread_unlocked_alias(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("""fread_unlocked") __attribute__((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn(void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("""__fread_unlocked_chk") __attribute__((__warn_unused_result__)) __attribute__((__warning__("fread_unlocked called with bigger size * nmemb than ""length of destination buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream)
{
    if (__builtin_object_size(__ptr, 0) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__size) || !__builtin_constant_p(__n) || (__size | __n) >= (((size_t) 1) << (8 * sizeof(size_t) / 2)))
            return __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
        if (__size * __n > __builtin_object_size(__ptr, 0))
            return __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
    }
    if (__builtin_constant_p(__size) && __builtin_constant_p(__n) && (__size | __n) < (((size_t) 1) << (8 * sizeof(size_t) / 2)) && __size * __n <= 8)
    {
        size_t __cnt = __size * __n;
        char *__cptr = (char *) __ptr;
        if (__cnt == 0)
            return 0;
        for (;
            __cnt > 0;
            --__cnt)
        {
            int __c = (__builtin_expect(((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow(__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
            if (__c == (- 1))
                break;
            *__cptr++ = __c;
        }
        return (__cptr - (char *) __ptr) / __size;
    }
    return __fread_unlocked_alias(__ptr, __size, __n, __stream);
}
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
typedef long int ptrdiff_t;
typedef int wchar_t;
typedef struct 
{
        size_t size;
        size_t lower_bound;
        size_t accessed_length;
} nanos_region_dimension_internal_t;
typedef struct 
{
        _Bool input : 1;
        _Bool output : 1;
        _Bool can_rename : 1;
        _Bool concurrent : 1;
        _Bool commutative : 1;
} nanos_access_type_internal_t;
typedef struct 
{
        void *address;
        nanos_access_type_internal_t flags;
        short dimension_count;
        nanos_region_dimension_internal_t const *dimensions;
        ptrdiff_t offset;
} nanos_data_access_internal_t;
typedef enum 
{
    NANOS_PRIVATE, 
    NANOS_SHARED
} nanos_sharing_t;
typedef struct 
{
        void *original;
        void *privates;
        size_t element_size;
        void *descriptor;
        void (*bop)(void *, void *);
        void (*vop)(int n, void *, void *);
        void (*cleanup)(void *);
} nanos_reduction_t;
typedef struct 
{
        uint64_t address;
        nanos_sharing_t sharing;
        struct 
        {
                _Bool input : 1;
                _Bool output : 1;
        } flags;
        size_t size;
} nanos_copy_data_internal_t;
typedef nanos_access_type_internal_t nanos_access_type_t;
typedef nanos_region_dimension_internal_t nanos_region_dimension_t;
typedef nanos_data_access_internal_t nanos_data_access_t;
typedef nanos_copy_data_internal_t nanos_copy_data_t;
typedef void *nanos_thread_t;
typedef void *nanos_wd_t;
typedef struct 
{
        int nsect;
        nanos_wd_t lwd[];
} nanos_compound_wd_data_t;
typedef struct 
{
        int n;
} nanos_repeat_n_info_t;
typedef struct 
{
        int lower;
        int upper;
        int step;
        _Bool last;
        int chunk;
        int stride;
        int thid;
        void *args;
} nanos_loop_info_t;
typedef void *nanos_ws_t;
typedef void *nanos_ws_info_t;
typedef void *nanos_ws_data_t;
typedef void *nanos_ws_item_t;
typedef struct 
{
        int lower_bound;
        int upper_bound;
        int loop_step;
        int chunk_size;
} nanos_ws_info_loop_t;
typedef struct 
{
        int lower;
        int upper;
        _Bool execute : 1;
        _Bool last : 1;
} nanos_ws_item_loop_t;
typedef struct nanos_ws_desc
{
        volatile nanos_ws_t ws;
        nanos_ws_data_t data;
        struct nanos_ws_desc *next;
        nanos_thread_t *threads;
        int nths;
} nanos_ws_desc_t;
typedef struct 
{
        _Bool mandatory_creation : 1;
        _Bool tied : 1;
        _Bool reserved0 : 1;
        _Bool reserved1 : 1;
        _Bool reserved2 : 1;
        _Bool reserved3 : 1;
        _Bool reserved4 : 1;
        _Bool reserved5 : 1;
} nanos_wd_props_t;
typedef struct 
{
        nanos_thread_t tie_to;
        unsigned int priority;
} nanos_wd_dyn_props_t;
typedef struct 
{
        void *(*factory)(void *arg);
        void *arg;
} nanos_device_t;
typedef enum 
{
    NANOS_STATE_START, 
    NANOS_STATE_END, 
    NANOS_SUBSTATE_START, 
    NANOS_SUBSTATE_END, 
    NANOS_BURST_START, 
    NANOS_BURST_END, 
    NANOS_PTP_START, 
    NANOS_PTP_END, 
    NANOS_POINT, 
    EVENT_TYPES
} nanos_event_type_t;
typedef unsigned int nanos_event_key_t;
typedef unsigned long long nanos_event_value_t;
typedef enum 
{
    NANOS_NOT_CREATED, 
    NANOS_NOT_RUNNING, 
    NANOS_STARTUP, 
    NANOS_SHUTDOWN, 
    NANOS_ERROR, 
    NANOS_IDLE, 
    NANOS_RUNTIME, 
    NANOS_RUNNING, 
    NANOS_SYNCHRONIZATION, 
    NANOS_SCHEDULING, 
    NANOS_CREATION, 
    NANOS_MEM_TRANSFER_IN, 
    NANOS_MEM_TRANSFER_OUT, 
    NANOS_MEM_TRANSFER_LOCAL, 
    NANOS_MEM_TRANSFER_DEVICE_IN, 
    NANOS_MEM_TRANSFER_DEVICE_OUT, 
    NANOS_MEM_TRANSFER_DEVICE_LOCAL, 
    NANOS_CACHE, 
    NANOS_YIELD, 
    NANOS_ACQUIRING_LOCK, 
    NANOS_CONTEXT_SWITCH, 
    NANOS_DEBUG, 
    NANOS_EVENT_STATE_TYPES
} nanos_event_state_value_t;
typedef enum 
{
    NANOS_WD_DOMAIN, 
    NANOS_WD_DEPENDENCY, 
    NANOS_WAIT, 
    NANOS_WD_REMOTE, 
    NANOS_XFER_PUT, 
    NANOS_XFER_GET
} nanos_event_domain_t;
typedef long long nanos_event_id_t;
typedef struct 
{
        nanos_event_type_t type;
        nanos_event_key_t key;
        nanos_event_value_t value;
        nanos_event_domain_t domain;
        nanos_event_id_t id;
} nanos_event_t;
typedef enum 
{
    NANOS_LOCK_FREE = 0, 
    NANOS_LOCK_BUSY = 1
} nanos_lock_state_t;
typedef struct nanos_lock_t
{
        volatile nanos_lock_state_t state_;
} nanos_lock_t;
typedef void (*nanos_translate_args_t)(void *, nanos_wd_t);
typedef void (nanos_init_func_t)(void *);
typedef struct 
{
        nanos_init_func_t *func;
        void *data;
} nanos_init_desc_t;
typedef enum 
{
    NANOS_OK = 0, 
    NANOS_UNKNOWN_ERR, 
    NANOS_UNIMPLEMENTED, 
    NANOS_ENOMEM
} nanos_err_t;
typedef void *nanos_wg_t;
typedef void *nanos_team_t;
typedef void *nanos_sched_t;
typedef void *nanos_slicer_t;
typedef void *nanos_dd_t;
typedef void *nanos_sync_cond_t;
typedef unsigned int nanos_copy_id_t;
typedef struct nanos_const_wd_definition_tag
{
        nanos_wd_props_t props;
        size_t data_alignment;
        size_t num_copies;
        size_t num_devices;
} nanos_const_wd_definition_t;
typedef struct 
{
        int nthreads;
        void *arch;
} nanos_constraint_t;
typedef struct 
{
        void (*outline)(void *);
} nanos_smp_args_t;
extern char *nanos_get_mode_(void);
extern char *nanos_get_mode(void);
extern nanos_wd_t nanos_current_wd_(void);
extern nanos_wd_t nanos_current_wd(void);
extern int nanos_get_wd_id_(nanos_wd_t wd);
extern int nanos_get_wd_id(nanos_wd_t wd);
extern unsigned int nanos_get_wd_priority_(nanos_wd_t wd);
extern unsigned int nanos_get_wd_priority(nanos_wd_t wd);
extern nanos_slicer_t nanos_find_slicer_(const char *slicer);
extern nanos_slicer_t nanos_find_slicer(const char *slicer);
extern nanos_ws_t nanos_find_worksharing_(const char *label);
extern nanos_ws_t nanos_find_worksharing(const char *label);
extern nanos_err_t nanos_create_wd_compact_(nanos_wd_t *wd, nanos_const_wd_definition_t *const_data, nanos_wd_dyn_props_t *dyn_props, size_t data_size, void **data, nanos_wg_t wg, nanos_copy_data_t **copies);
extern nanos_err_t nanos_create_wd_compact(nanos_wd_t *wd, nanos_const_wd_definition_t *const_data, nanos_wd_dyn_props_t *dyn_props, size_t data_size, void **data, nanos_wg_t wg, nanos_copy_data_t **copies);
extern nanos_err_t nanos_set_translate_function_(nanos_wd_t wd, nanos_translate_args_t translate_args);
extern nanos_err_t nanos_set_translate_function(nanos_wd_t wd, nanos_translate_args_t translate_args);
extern nanos_err_t nanos_create_sliced_wd_(nanos_wd_t *uwd, size_t num_devices, nanos_device_t *devices, size_t outline_data_size, int outline_data_align, void **outline_data, nanos_wg_t uwg, nanos_slicer_t slicer, nanos_wd_props_t *props, nanos_wd_dyn_props_t *dyn_props, size_t num_copies, nanos_copy_data_t **copies);
extern nanos_err_t nanos_create_sliced_wd(nanos_wd_t *uwd, size_t num_devices, nanos_device_t *devices, size_t outline_data_size, int outline_data_align, void **outline_data, nanos_wg_t uwg, nanos_slicer_t slicer, nanos_wd_props_t *props, nanos_wd_dyn_props_t *dyn_props, size_t num_copies, nanos_copy_data_t **copies);
extern nanos_err_t nanos_submit_(nanos_wd_t wd, size_t num_data_accesses, nanos_data_access_t *data_accesses, nanos_team_t team);
extern nanos_err_t nanos_submit(nanos_wd_t wd, size_t num_data_accesses, nanos_data_access_t *data_accesses, nanos_team_t team);
extern nanos_err_t nanos_create_wd_and_run_compact_(nanos_const_wd_definition_t *const_data, nanos_wd_dyn_props_t *dyn_props, size_t data_size, void *data, size_t num_data_accesses, nanos_data_access_t *data_accesses, nanos_copy_data_t *copies, nanos_translate_args_t translate_args);
extern nanos_err_t nanos_create_wd_and_run_compact(nanos_const_wd_definition_t *const_data, nanos_wd_dyn_props_t *dyn_props, size_t data_size, void *data, size_t num_data_accesses, nanos_data_access_t *data_accesses, nanos_copy_data_t *copies, nanos_translate_args_t translate_args);
extern nanos_err_t nanos_create_for_(void);
extern nanos_err_t nanos_create_for(void);
extern nanos_err_t nanos_set_internal_wd_data_(nanos_wd_t wd, void *data);
extern nanos_err_t nanos_set_internal_wd_data(nanos_wd_t wd, void *data);
extern nanos_err_t nanos_get_internal_wd_data_(nanos_wd_t wd, void **data);
extern nanos_err_t nanos_get_internal_wd_data(nanos_wd_t wd, void **data);
extern nanos_err_t nanos_yield_(void);
extern nanos_err_t nanos_yield(void);
extern nanos_err_t nanos_slicer_get_specific_data_(nanos_slicer_t slicer, void **data);
extern nanos_err_t nanos_slicer_get_specific_data(nanos_slicer_t slicer, void **data);
extern nanos_err_t nanos_get_num_ready_tasks_(unsigned int *ready_tasks);
extern nanos_err_t nanos_get_num_ready_tasks(unsigned int *ready_tasks);
extern nanos_err_t nanos_get_num_total_tasks_(unsigned int *total_tasks);
extern nanos_err_t nanos_get_num_total_tasks(unsigned int *total_tasks);
extern nanos_err_t nanos_get_num_nonready_tasks_(unsigned int *nonready_tasks);
extern nanos_err_t nanos_get_num_nonready_tasks(unsigned int *nonready_tasks);
extern nanos_err_t nanos_get_num_running_tasks_(unsigned int *running_tasks);
extern nanos_err_t nanos_get_num_running_tasks(unsigned int *running_tasks);
extern nanos_err_t nanos_get_num_blocked_tasks_(unsigned int *blocked_tasks);
extern nanos_err_t nanos_get_num_blocked_tasks(unsigned int *blocked_tasks);
extern nanos_err_t nanos_create_team_(nanos_team_t *team, nanos_sched_t sg, unsigned int *nthreads, nanos_constraint_t *constraints, _Bool reuse, nanos_thread_t *info);
extern nanos_err_t nanos_create_team(nanos_team_t *team, nanos_sched_t sg, unsigned int *nthreads, nanos_constraint_t *constraints, _Bool reuse, nanos_thread_t *info);
extern nanos_err_t nanos_create_team_mapped_(nanos_team_t *team, nanos_sched_t sg, unsigned int *nthreads, unsigned int *mapping);
extern nanos_err_t nanos_create_team_mapped(nanos_team_t *team, nanos_sched_t sg, unsigned int *nthreads, unsigned int *mapping);
extern nanos_err_t nanos_enter_team_(void);
extern nanos_err_t nanos_enter_team(void);
extern nanos_err_t nanos_leave_team_(void);
extern nanos_err_t nanos_leave_team(void);
extern nanos_err_t nanos_end_team_(nanos_team_t team);
extern nanos_err_t nanos_end_team(nanos_team_t team);
extern nanos_err_t nanos_team_barrier_(void);
extern nanos_err_t nanos_team_barrier(void);
extern nanos_err_t nanos_single_guard_(_Bool *);
extern nanos_err_t nanos_single_guard(_Bool *);
extern nanos_err_t nanos_enter_sync_init_(_Bool *b);
extern nanos_err_t nanos_enter_sync_init(_Bool *b);
extern nanos_err_t nanos_wait_sync_init_(void);
extern nanos_err_t nanos_wait_sync_init(void);
extern nanos_err_t nanos_release_sync_init_(void);
extern nanos_err_t nanos_release_sync_init(void);
extern nanos_err_t nanos_memory_fence_(void);
extern nanos_err_t nanos_memory_fence(void);
extern nanos_err_t nanos_team_get_num_starring_threads_(int *n);
extern nanos_err_t nanos_team_get_num_starring_threads(int *n);
extern nanos_err_t nanos_team_get_starring_threads_(int *n, nanos_thread_t *list_of_threads);
extern nanos_err_t nanos_team_get_starring_threads(int *n, nanos_thread_t *list_of_threads);
extern nanos_err_t nanos_team_get_num_supporting_threads_(int *n);
extern nanos_err_t nanos_team_get_num_supporting_threads(int *n);
extern nanos_err_t nanos_team_get_supporting_threads_(int *n, nanos_thread_t *list_of_threads);
extern nanos_err_t nanos_team_get_supporting_threads(int *n, nanos_thread_t *list_of_threads);
extern nanos_err_t nanos_register_reduction_(nanos_reduction_t *red);
extern nanos_err_t nanos_register_reduction(nanos_reduction_t *red);
extern nanos_err_t nanos_reduction_get_private_data_(void **copy, void *original);
extern nanos_err_t nanos_reduction_get_private_data(void **copy, void *original);
extern nanos_err_t nanos_reduction_get_(nanos_reduction_t **dest, void *original);
extern nanos_err_t nanos_reduction_get(nanos_reduction_t **dest, void *original);
extern nanos_err_t nanos_worksharing_create_(nanos_ws_desc_t **wsd, nanos_ws_t ws, nanos_ws_info_t *info, _Bool *b);
extern nanos_err_t nanos_worksharing_create(nanos_ws_desc_t **wsd, nanos_ws_t ws, nanos_ws_info_t *info, _Bool *b);
extern nanos_err_t nanos_worksharing_next_item_(nanos_ws_desc_t *wsd, nanos_ws_item_t *wsi);
extern nanos_err_t nanos_worksharing_next_item(nanos_ws_desc_t *wsd, nanos_ws_item_t *wsi);
extern nanos_err_t nanos_wg_wait_completion_(nanos_wg_t wg, _Bool avoid_flush);
extern nanos_err_t nanos_wg_wait_completion(nanos_wg_t wg, _Bool avoid_flush);
extern nanos_err_t nanos_create_int_sync_cond_(nanos_sync_cond_t *sync_cond, volatile int *p, int condition);
extern nanos_err_t nanos_create_int_sync_cond(nanos_sync_cond_t *sync_cond, volatile int *p, int condition);
extern nanos_err_t nanos_create_bool_sync_cond_(nanos_sync_cond_t *sync_cond, volatile _Bool *p, _Bool condition);
extern nanos_err_t nanos_create_bool_sync_cond(nanos_sync_cond_t *sync_cond, volatile _Bool *p, _Bool condition);
extern nanos_err_t nanos_sync_cond_wait_(nanos_sync_cond_t sync_cond);
extern nanos_err_t nanos_sync_cond_wait(nanos_sync_cond_t sync_cond);
extern nanos_err_t nanos_sync_cond_signal_(nanos_sync_cond_t sync_cond);
extern nanos_err_t nanos_sync_cond_signal(nanos_sync_cond_t sync_cond);
extern nanos_err_t nanos_destroy_sync_cond_(nanos_sync_cond_t sync_cond);
extern nanos_err_t nanos_destroy_sync_cond(nanos_sync_cond_t sync_cond);
extern nanos_err_t nanos_wait_on_(size_t num_data_accesses, nanos_data_access_t *data_accesses);
extern nanos_err_t nanos_wait_on(size_t num_data_accesses, nanos_data_access_t *data_accesses);
extern nanos_err_t nanos_init_lock_(nanos_lock_t **lock);
extern nanos_err_t nanos_init_lock(nanos_lock_t **lock);
extern nanos_err_t nanos_set_lock_(nanos_lock_t *lock);
extern nanos_err_t nanos_set_lock(nanos_lock_t *lock);
extern nanos_err_t nanos_unset_lock_(nanos_lock_t *lock);
extern nanos_err_t nanos_unset_lock(nanos_lock_t *lock);
extern nanos_err_t nanos_try_lock_(nanos_lock_t *lock, _Bool *result);
extern nanos_err_t nanos_try_lock(nanos_lock_t *lock, _Bool *result);
extern nanos_err_t nanos_destroy_lock_(nanos_lock_t *lock);
extern nanos_err_t nanos_destroy_lock(nanos_lock_t *lock);
extern nanos_err_t nanos_get_addr_(nanos_copy_id_t copy_id, void **addr, nanos_wd_t cwd);
extern nanos_err_t nanos_get_addr(nanos_copy_id_t copy_id, void **addr, nanos_wd_t cwd);
extern nanos_err_t nanos_copy_value_(void *dst, nanos_copy_id_t copy_id, nanos_wd_t cwd);
extern nanos_err_t nanos_copy_value(void *dst, nanos_copy_id_t copy_id, nanos_wd_t cwd);
extern const char *nanos_get_default_architecture_();
extern const char *nanos_get_default_architecture();
extern const char *nanos_get_pm_();
extern const char *nanos_get_pm();
extern nanos_err_t nanos_get_default_binding_(_Bool *res);
extern nanos_err_t nanos_get_default_binding(_Bool *res);
extern const char *nanos_get_default_scheduler_();
extern const char *nanos_get_default_scheduler();
extern nanos_err_t nanos_start_scheduler_();
extern nanos_err_t nanos_start_scheduler();
extern nanos_err_t nanos_stop_scheduler_();
extern nanos_err_t nanos_stop_scheduler();
extern nanos_err_t nanos_scheduler_enabled_(_Bool *res);
extern nanos_err_t nanos_scheduler_enabled(_Bool *res);
extern nanos_err_t nanos_wait_until_threads_paused_();
extern nanos_err_t nanos_wait_until_threads_paused();
extern nanos_err_t nanos_wait_until_threads_unpaused_();
extern nanos_err_t nanos_wait_until_threads_unpaused();
extern nanos_err_t nanos_delay_start_();
extern nanos_err_t nanos_delay_start();
extern nanos_err_t nanos_start_();
extern nanos_err_t nanos_start();
extern nanos_err_t nanos_finish_();
extern nanos_err_t nanos_finish();
extern nanos_err_t nanos_malloc_(void **p, size_t size, const char *file, int line);
extern nanos_err_t nanos_malloc(void **p, size_t size, const char *file, int line);
extern nanos_err_t nanos_free_(void *p);
extern nanos_err_t nanos_free(void *p);
extern void nanos_handle_error_(nanos_err_t err);
extern void nanos_handle_error(nanos_err_t err);
extern void *nanos_smp_factory_(void *args);
extern void *nanos_smp_factory(void *args);
extern nanos_err_t nanos_instrument_register_key_(nanos_event_key_t *event_key, const char *key, const char *description, _Bool abort_when_registered);
extern nanos_err_t nanos_instrument_register_key(nanos_event_key_t *event_key, const char *key, const char *description, _Bool abort_when_registered);
extern nanos_err_t nanos_instrument_register_value_(nanos_event_value_t *event_value, const char *key, const char *value, const char *description, _Bool abort_when_registered);
extern nanos_err_t nanos_instrument_register_value(nanos_event_value_t *event_value, const char *key, const char *value, const char *description, _Bool abort_when_registered);
extern nanos_err_t nanos_instrument_register_value_with_val_(nanos_event_value_t val, const char *key, const char *value, const char *description, _Bool abort_when_registered);
extern nanos_err_t nanos_instrument_register_value_with_val(nanos_event_value_t val, const char *key, const char *value, const char *description, _Bool abort_when_registered);
extern nanos_err_t nanos_instrument_get_key_(const char *key, nanos_event_key_t *event_key);
extern nanos_err_t nanos_instrument_get_key(const char *key, nanos_event_key_t *event_key);
extern nanos_err_t nanos_instrument_get_value_(const char *key, const char *value, nanos_event_value_t *event_value);
extern nanos_err_t nanos_instrument_get_value(const char *key, const char *value, nanos_event_value_t *event_value);
extern nanos_err_t nanos_instrument_events_(unsigned int num_events, nanos_event_t events[]);
extern nanos_err_t nanos_instrument_events(unsigned int num_events, nanos_event_t events[]);
extern nanos_err_t nanos_instrument_close_user_fun_event_();
extern nanos_err_t nanos_instrument_close_user_fun_event();
extern nanos_err_t nanos_instrument_enable_(void);
extern nanos_err_t nanos_instrument_enable(void);
extern nanos_err_t nanos_instrument_disable_(void);
extern nanos_err_t nanos_instrument_disable(void);
extern nanos_err_t nanos_memcpy_(void *dest, const void *src, size_t n);
extern nanos_err_t nanos_memcpy(void *dest, const void *src, size_t n);
void nanos_reduction_int_vop(int, void *, void *);
void nanos_reduction_bop_add_char(void *arg1, void *arg2);
void nanos_reduction_bop_add_char_(void *arg1, void *arg2);
void nanos_reduction_vop_add_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_add_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_add_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_schar(void *arg1, void *arg2);
void nanos_reduction_bop_add_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_add_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_short(void *arg1, void *arg2);
void nanos_reduction_bop_add_short_(void *arg1, void *arg2);
void nanos_reduction_vop_add_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_add_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_add_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_int(void *arg1, void *arg2);
void nanos_reduction_bop_add_int_(void *arg1, void *arg2);
void nanos_reduction_vop_add_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_uint(void *arg1, void *arg2);
void nanos_reduction_bop_add_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_add_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_long(void *arg1, void *arg2);
void nanos_reduction_bop_add_long_(void *arg1, void *arg2);
void nanos_reduction_vop_add_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_add_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_add_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_add_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_add_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_add_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_add_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_add__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_add__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_float(void *arg1, void *arg2);
void nanos_reduction_bop_add_float_(void *arg1, void *arg2);
void nanos_reduction_vop_add_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_double(void *arg1, void *arg2);
void nanos_reduction_bop_add_double_(void *arg1, void *arg2);
void nanos_reduction_vop_add_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_add_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_add_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_cfloat(void *arg1, void *arg2);
void nanos_reduction_bop_add_cfloat_(void *arg1, void *arg2);
void nanos_reduction_vop_add_cfloat(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_cfloat_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_cdouble(void *arg1, void *arg2);
void nanos_reduction_bop_add_cdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_add_cdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_cdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_add_clongdouble(void *arg1, void *arg2);
void nanos_reduction_bop_add_clongdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_add_clongdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_add_clongdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_char(void *arg1, void *arg2);
void nanos_reduction_bop_sub_char_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_sub_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_schar(void *arg1, void *arg2);
void nanos_reduction_bop_sub_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_short(void *arg1, void *arg2);
void nanos_reduction_bop_sub_short_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_sub_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_int(void *arg1, void *arg2);
void nanos_reduction_bop_sub_int_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_uint(void *arg1, void *arg2);
void nanos_reduction_bop_sub_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_long(void *arg1, void *arg2);
void nanos_reduction_bop_sub_long_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_sub_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_sub_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_sub_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_sub__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_sub__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_float(void *arg1, void *arg2);
void nanos_reduction_bop_sub_float_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_double(void *arg1, void *arg2);
void nanos_reduction_bop_sub_double_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_sub_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_cfloat(void *arg1, void *arg2);
void nanos_reduction_bop_sub_cfloat_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_cfloat(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_cfloat_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_cdouble(void *arg1, void *arg2);
void nanos_reduction_bop_sub_cdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_cdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_cdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_sub_clongdouble(void *arg1, void *arg2);
void nanos_reduction_bop_sub_clongdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_sub_clongdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_sub_clongdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_char(void *arg1, void *arg2);
void nanos_reduction_bop_prod_char_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_prod_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_schar(void *arg1, void *arg2);
void nanos_reduction_bop_prod_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_short(void *arg1, void *arg2);
void nanos_reduction_bop_prod_short_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_prod_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_int(void *arg1, void *arg2);
void nanos_reduction_bop_prod_int_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_uint(void *arg1, void *arg2);
void nanos_reduction_bop_prod_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_long(void *arg1, void *arg2);
void nanos_reduction_bop_prod_long_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_prod_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_prod_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_prod_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_prod__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_prod__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_float(void *arg1, void *arg2);
void nanos_reduction_bop_prod_float_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_double(void *arg1, void *arg2);
void nanos_reduction_bop_prod_double_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_prod_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_cfloat(void *arg1, void *arg2);
void nanos_reduction_bop_prod_cfloat_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_cfloat(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_cfloat_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_cdouble(void *arg1, void *arg2);
void nanos_reduction_bop_prod_cdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_cdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_cdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_prod_clongdouble(void *arg1, void *arg2);
void nanos_reduction_bop_prod_clongdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_prod_clongdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_prod_clongdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_char(void *arg1, void *arg2);
void nanos_reduction_bop_and_char_(void *arg1, void *arg2);
void nanos_reduction_vop_and_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_and_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_and_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_schar(void *arg1, void *arg2);
void nanos_reduction_bop_and_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_and_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_short(void *arg1, void *arg2);
void nanos_reduction_bop_and_short_(void *arg1, void *arg2);
void nanos_reduction_vop_and_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_and_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_and_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_int(void *arg1, void *arg2);
void nanos_reduction_bop_and_int_(void *arg1, void *arg2);
void nanos_reduction_vop_and_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_uint(void *arg1, void *arg2);
void nanos_reduction_bop_and_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_and_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_long(void *arg1, void *arg2);
void nanos_reduction_bop_and_long_(void *arg1, void *arg2);
void nanos_reduction_vop_and_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_and_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_and_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_and_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_and_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_and_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_and_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_and__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_and__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_and__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_and__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_char(void *arg1, void *arg2);
void nanos_reduction_bop_or_char_(void *arg1, void *arg2);
void nanos_reduction_vop_or_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_or_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_or_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_schar(void *arg1, void *arg2);
void nanos_reduction_bop_or_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_or_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_short(void *arg1, void *arg2);
void nanos_reduction_bop_or_short_(void *arg1, void *arg2);
void nanos_reduction_vop_or_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_or_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_or_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_int(void *arg1, void *arg2);
void nanos_reduction_bop_or_int_(void *arg1, void *arg2);
void nanos_reduction_vop_or_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_uint(void *arg1, void *arg2);
void nanos_reduction_bop_or_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_or_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_long(void *arg1, void *arg2);
void nanos_reduction_bop_or_long_(void *arg1, void *arg2);
void nanos_reduction_vop_or_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_or_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_or_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_or_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_or_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_or_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_or_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_or__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_or__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_or__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_or__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_char(void *arg1, void *arg2);
void nanos_reduction_bop_xor_char_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_xor_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_schar(void *arg1, void *arg2);
void nanos_reduction_bop_xor_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_short(void *arg1, void *arg2);
void nanos_reduction_bop_xor_short_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_xor_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_int(void *arg1, void *arg2);
void nanos_reduction_bop_xor_int_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_uint(void *arg1, void *arg2);
void nanos_reduction_bop_xor_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_long(void *arg1, void *arg2);
void nanos_reduction_bop_xor_long_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_xor_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_xor_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_xor_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_xor_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_xor__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_xor__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_xor__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_xor__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_char(void *arg1, void *arg2);
void nanos_reduction_bop_land_char_(void *arg1, void *arg2);
void nanos_reduction_vop_land_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_land_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_land_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_schar(void *arg1, void *arg2);
void nanos_reduction_bop_land_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_land_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_short(void *arg1, void *arg2);
void nanos_reduction_bop_land_short_(void *arg1, void *arg2);
void nanos_reduction_vop_land_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_land_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_land_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_int(void *arg1, void *arg2);
void nanos_reduction_bop_land_int_(void *arg1, void *arg2);
void nanos_reduction_vop_land_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_uint(void *arg1, void *arg2);
void nanos_reduction_bop_land_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_land_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_long(void *arg1, void *arg2);
void nanos_reduction_bop_land_long_(void *arg1, void *arg2);
void nanos_reduction_vop_land_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_land_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_land_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_land_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_land_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_land_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_land_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_land__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_land__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_float(void *arg1, void *arg2);
void nanos_reduction_bop_land_float_(void *arg1, void *arg2);
void nanos_reduction_vop_land_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_double(void *arg1, void *arg2);
void nanos_reduction_bop_land_double_(void *arg1, void *arg2);
void nanos_reduction_vop_land_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_land_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_land_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_cfloat(void *arg1, void *arg2);
void nanos_reduction_bop_land_cfloat_(void *arg1, void *arg2);
void nanos_reduction_vop_land_cfloat(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_cfloat_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_cdouble(void *arg1, void *arg2);
void nanos_reduction_bop_land_cdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_land_cdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_cdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_land_clongdouble(void *arg1, void *arg2);
void nanos_reduction_bop_land_clongdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_land_clongdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_land_clongdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_char(void *arg1, void *arg2);
void nanos_reduction_bop_lor_char_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_lor_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_schar(void *arg1, void *arg2);
void nanos_reduction_bop_lor_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_short(void *arg1, void *arg2);
void nanos_reduction_bop_lor_short_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_lor_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_int(void *arg1, void *arg2);
void nanos_reduction_bop_lor_int_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_uint(void *arg1, void *arg2);
void nanos_reduction_bop_lor_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_long(void *arg1, void *arg2);
void nanos_reduction_bop_lor_long_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_lor_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_lor_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_lor_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_lor__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_lor__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_float(void *arg1, void *arg2);
void nanos_reduction_bop_lor_float_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_double(void *arg1, void *arg2);
void nanos_reduction_bop_lor_double_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_lor_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_cfloat(void *arg1, void *arg2);
void nanos_reduction_bop_lor_cfloat_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_cfloat(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_cfloat_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_cdouble(void *arg1, void *arg2);
void nanos_reduction_bop_lor_cdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_cdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_cdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_lor_clongdouble(void *arg1, void *arg2);
void nanos_reduction_bop_lor_clongdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_lor_clongdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_lor_clongdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_char(void *arg1, void *arg2);
void nanos_reduction_bop_max_char_(void *arg1, void *arg2);
void nanos_reduction_vop_max_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_max_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_max_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_schar(void *arg1, void *arg2);
void nanos_reduction_bop_max_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_max_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_short(void *arg1, void *arg2);
void nanos_reduction_bop_max_short_(void *arg1, void *arg2);
void nanos_reduction_vop_max_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_max_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_max_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_int(void *arg1, void *arg2);
void nanos_reduction_bop_max_int_(void *arg1, void *arg2);
void nanos_reduction_vop_max_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_uint(void *arg1, void *arg2);
void nanos_reduction_bop_max_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_max_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_long(void *arg1, void *arg2);
void nanos_reduction_bop_max_long_(void *arg1, void *arg2);
void nanos_reduction_vop_max_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_max_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_max_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_max_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_max_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_max_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_max_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_max__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_max__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_float(void *arg1, void *arg2);
void nanos_reduction_bop_max_float_(void *arg1, void *arg2);
void nanos_reduction_vop_max_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_double(void *arg1, void *arg2);
void nanos_reduction_bop_max_double_(void *arg1, void *arg2);
void nanos_reduction_vop_max_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_max_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_max_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_max_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_max_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_char(void *arg1, void *arg2);
void nanos_reduction_bop_min_char_(void *arg1, void *arg2);
void nanos_reduction_vop_min_char(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_char_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_uchar(void *arg1, void *arg2);
void nanos_reduction_bop_min_uchar_(void *arg1, void *arg2);
void nanos_reduction_vop_min_uchar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_uchar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_schar(void *arg1, void *arg2);
void nanos_reduction_bop_min_schar_(void *arg1, void *arg2);
void nanos_reduction_vop_min_schar(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_schar_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_short(void *arg1, void *arg2);
void nanos_reduction_bop_min_short_(void *arg1, void *arg2);
void nanos_reduction_vop_min_short(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_short_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_ushort(void *arg1, void *arg2);
void nanos_reduction_bop_min_ushort_(void *arg1, void *arg2);
void nanos_reduction_vop_min_ushort(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_ushort_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_int(void *arg1, void *arg2);
void nanos_reduction_bop_min_int_(void *arg1, void *arg2);
void nanos_reduction_vop_min_int(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_int_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_uint(void *arg1, void *arg2);
void nanos_reduction_bop_min_uint_(void *arg1, void *arg2);
void nanos_reduction_vop_min_uint(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_uint_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_long(void *arg1, void *arg2);
void nanos_reduction_bop_min_long_(void *arg1, void *arg2);
void nanos_reduction_vop_min_long(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_long_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_ulong(void *arg1, void *arg2);
void nanos_reduction_bop_min_ulong_(void *arg1, void *arg2);
void nanos_reduction_vop_min_ulong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_ulong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_longlong(void *arg1, void *arg2);
void nanos_reduction_bop_min_longlong_(void *arg1, void *arg2);
void nanos_reduction_vop_min_longlong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_longlong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_ulonglong(void *arg1, void *arg2);
void nanos_reduction_bop_min_ulonglong_(void *arg1, void *arg2);
void nanos_reduction_vop_min_ulonglong(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_ulonglong_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min__Bool(void *arg1, void *arg2);
void nanos_reduction_bop_min__Bool_(void *arg1, void *arg2);
void nanos_reduction_vop_min__Bool(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min__Bool_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_float(void *arg1, void *arg2);
void nanos_reduction_bop_min_float_(void *arg1, void *arg2);
void nanos_reduction_vop_min_float(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_float_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_double(void *arg1, void *arg2);
void nanos_reduction_bop_min_double_(void *arg1, void *arg2);
void nanos_reduction_vop_min_double(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_double_(int i, void *arg1, void *arg2);
void nanos_reduction_bop_min_longdouble(void *arg1, void *arg2);
void nanos_reduction_bop_min_longdouble_(void *arg1, void *arg2);
void nanos_reduction_vop_min_longdouble(int i, void *arg1, void *arg2);
void nanos_reduction_vop_min_longdouble_(int i, void *arg1, void *arg2);
void nanos_reduction_default_cleanup_char(void *r);
void nanos_reduction_default_cleanup_uchar(void *r);
void nanos_reduction_default_cleanup_schar(void *r);
void nanos_reduction_default_cleanup_short(void *r);
void nanos_reduction_default_cleanup_ushort(void *r);
void nanos_reduction_default_cleanup_int(void *r);
void nanos_reduction_default_cleanup_uint(void *r);
void nanos_reduction_default_cleanup_long(void *r);
void nanos_reduction_default_cleanup_ulong(void *r);
void nanos_reduction_default_cleanup_longlong(void *r);
void nanos_reduction_default_cleanup_ulonglong(void *r);
void nanos_reduction_default_cleanup__Bool(void *r);
void nanos_reduction_default_cleanup_float(void *r);
void nanos_reduction_default_cleanup_double(void *r);
void nanos_reduction_default_cleanup_longdouble(void *r);
void nanos_reduction_default_cleanup_cfloat(void *r);
void nanos_reduction_default_cleanup_cdouble(void *r);
void nanos_reduction_default_cleanup_clongdouble(void *r);
extern void nanos_reduction_default_cleanup_fortran_(void *);
extern void nanos_reduction_default_cleanup_fortran(void *);
typedef enum nanos_omp_sched_t
{
    omp_sched_static = 1, 
    omp_sched_dynamic = 2, 
    omp_sched_guided = 3, 
    omp_sched_auto = 4
} nanos_omp_sched_t;
extern nanos_err_t nanos_omp_single_(_Bool *);
extern nanos_err_t nanos_omp_single(_Bool *);
extern nanos_err_t nanos_omp_barrier_(void);
extern nanos_err_t nanos_omp_barrier(void);
void nanos_omp_set_interface(void *);
extern nanos_err_t nanos_omp_set_implicit_(nanos_wd_t uwd);
extern nanos_err_t nanos_omp_set_implicit(nanos_wd_t uwd);
extern int nanos_omp_get_max_threads_(void);
extern int nanos_omp_get_max_threads(void);
extern int nanos_omp_get_num_threads_(void);
extern int nanos_omp_get_num_threads(void);
extern int nanos_omp_get_thread_num_(void);
extern int nanos_omp_get_thread_num(void);
extern nanos_ws_t nanos_omp_find_worksharing_(nanos_omp_sched_t kind);
extern nanos_ws_t nanos_omp_find_worksharing(nanos_omp_sched_t kind);
extern nanos_err_t nanos_omp_get_schedule_(nanos_omp_sched_t *kind, int *modifier);
extern nanos_err_t nanos_omp_get_schedule(nanos_omp_sched_t *kind, int *modifier);
union wait
{
        int w_status;
        struct 
        {
                unsigned int __w_termsig : 7;
                unsigned int __w_coredump : 1;
                unsigned int __w_retcode : 8;
                unsigned int : 16;
        } __wait_terminated;
        struct 
        {
                unsigned int __w_stopval : 8;
                unsigned int __w_stopsig : 8;
                unsigned int : 16;
        } __wait_stopped;
};
typedef union 
{
        union wait *__uptr;
        int *__iptr;
} __WAIT_STATUS __attribute__((__transparent_union__));
typedef struct 
{
        int quot;
        int rem;
} div_t;
typedef struct 
{
        long int quot;
        long int rem;
} ldiv_t;
__extension__
typedef struct 
{
        long long int quot;
        long long int rem;
} lldiv_t;
extern size_t __ctype_get_mb_cur_max(void) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern double atof(__const char *__nptr) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int atoi(__const char *__nptr) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern long int atol(__const char *__nptr) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
__extension__
extern long long int atoll(__const char *__nptr) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
__extension__
extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
__extension__
extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
__extension__
extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
__extension__
extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern __inline __attribute__((__gnu_inline__)) double __attribute__((__nothrow__)) atof(__const char *__nptr)
{
    return strtod(__nptr, (char **) ((void *) 0));
}
extern __inline __attribute__((__gnu_inline__)) int __attribute__((__nothrow__)) atoi(__const char *__nptr)
{
    return (int) strtol(__nptr, (char **) ((void *) 0), 10);
}
extern __inline __attribute__((__gnu_inline__)) long int __attribute__((__nothrow__)) atol(__const char *__nptr)
{
    return strtol(__nptr, (char **) ((void *) 0), 10);
}
__extension__
extern __inline __attribute__((__gnu_inline__)) long long int __attribute__((__nothrow__)) atoll(__const char *__nptr)
{
    return strtoll(__nptr, (char **) ((void *) 0), 10);
}
extern char *l64a(long int __n) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern long int a64l(__const char *__s) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned int u_int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__((__mode__(__DI__)));
typedef int register_t __attribute__((__mode__(__word__)));
typedef int __sig_atomic_t;
typedef struct 
{
        unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
{
        __time_t tv_sec;
        long int tv_nsec;
};
struct timeval
{
        __time_t tv_sec;
        __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct 
{
        __fd_mask __fds_bits[1024 / (8 * (int) sizeof(__fd_mask))];
} fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set *__restrict __readfds, fd_set *__restrict __writefds, fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set *__restrict __readfds, fd_set *__restrict __writefds, fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const __sigset_t *__restrict __sigmask);
extern long int __fdelt_chk(long int __d);
extern long int __fdelt_warn(long int __d) __attribute__((__warning__("bit outside of fd_set selected")));
__extension__
extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__((__nothrow__)) __attribute__((__const__));
__extension__
extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__((__nothrow__)) __attribute__((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__((__nothrow__)) __attribute__((__const__));
__extension__
extern __inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned int __attribute__((__nothrow__)) gnu_dev_major(unsigned long long int __dev)
{
    return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}
__extension__
extern __inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned int __attribute__((__nothrow__)) gnu_dev_minor(unsigned long long int __dev)
{
    return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}
__extension__
extern __inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned long long int __attribute__((__nothrow__)) gnu_dev_makedev(unsigned int __major, unsigned int __minor)
{
    return ((__minor & 0xff) | ((__major & 0xfff) << 8) | (((unsigned long long int) (__minor & ~0xff)) << 12) | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union 
{
        char __size[56];
        long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_list
{
        struct __pthread_internal_list *__prev;
        struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union 
{
        struct __pthread_mutex_s
        {
                int __lock;
                unsigned int __count;
                int __owner;
                unsigned int __nusers;
                int __kind;
                int __spins;
                __pthread_list_t __list;
        } __data;
        char __size[40];
        long int __align;
} pthread_mutex_t;
typedef union 
{
        char __size[4];
        int __align;
} pthread_mutexattr_t;
typedef union 
{
        struct 
        {
                int __lock;
                unsigned int __futex;
                __extension__
                unsigned long long int __total_seq;
                __extension__
                unsigned long long int __wakeup_seq;
                __extension__
                unsigned long long int __woken_seq;
                void *__mutex;
                unsigned int __nwaiters;
                unsigned int __broadcast_seq;
        } __data;
        char __size[48];
        __extension__
        long long int __align;
} pthread_cond_t;
typedef union 
{
        char __size[4];
        int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union 
{
        struct 
        {
                int __lock;
                unsigned int __nr_readers;
                unsigned int __readers_wakeup;
                unsigned int __writer_wakeup;
                unsigned int __nr_readers_queued;
                unsigned int __nr_writers_queued;
                int __writer;
                int __shared;
                unsigned long int __pad1;
                unsigned long int __pad2;
                unsigned int __flags;
        } __data;
        char __size[56];
        long int __align;
} pthread_rwlock_t;
typedef union 
{
        char __size[8];
        long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union 
{
        char __size[32];
        long int __align;
} pthread_barrier_t;
typedef union 
{
        char __size[4];
        int __align;
} pthread_barrierattr_t;
extern long int random(void) __attribute__((__nothrow__));
extern void srandom(unsigned int __seed) __attribute__((__nothrow__));
extern char *initstate(unsigned int __seed, char *__statebuf, size_t __statelen) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern char *setstate(char *__statebuf) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
struct random_data
{
        int32_t *fptr;
        int32_t *rptr;
        int32_t *state;
        int rand_type;
        int rand_deg;
        int rand_sep;
        int32_t *end_ptr;
};
extern int random_r(struct random_data *__restrict __buf, int32_t *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf, size_t __statelen, struct random_data *__restrict __buf) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 4)));
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int rand(void) __attribute__((__nothrow__));
extern void srand(unsigned int __seed) __attribute__((__nothrow__));
extern int rand_r(unsigned int *__seed) __attribute__((__nothrow__));
extern double drand48(void) __attribute__((__nothrow__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern long int lrand48(void) __attribute__((__nothrow__));
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern long int mrand48(void) __attribute__((__nothrow__));
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern void srand48(long int __seedval) __attribute__((__nothrow__));
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
struct drand48_data
{
        unsigned short int __x[3];
        unsigned short int __old_x[3];
        unsigned short int __c;
        unsigned short int __init;
        unsigned long long int __a;
};
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void *malloc(size_t __size) __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
extern void *calloc(size_t __nmemb, size_t __size) __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
extern void *realloc(void *__ptr, size_t __size) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void free(void *__ptr) __attribute__((__nothrow__));
extern void cfree(void *__ptr) __attribute__((__nothrow__));
extern void *alloca(size_t __size) __attribute__((__nothrow__));
extern void *valloc(size_t __size) __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern void abort(void) __attribute__((__nothrow__)) __attribute__((__noreturn__));
extern int atexit(void (*__func)(void)) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern void exit(int __status) __attribute__((__nothrow__)) __attribute__((__noreturn__));
extern void _Exit(int __status) __attribute__((__nothrow__)) __attribute__((__noreturn__));
extern char *getenv(__const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern char *__secure_getenv(__const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int putenv(char *__string) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int unsetenv(__const char *__name) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int clearenv(void) __attribute__((__nothrow__));
extern char *mktemp(char *__template) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int mkstemp(char *__template) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int mkstemps(char *__template, int __suffixlen) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern char *mkdtemp(char *__template) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int system(__const char *__command) __attribute__((__warn_unused_result__));
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
typedef int (*__compar_fn_t)(__const void *, __const void *);
extern void *bsearch(__const void *__key, __const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__((__nonnull__(1, 2, 5))) __attribute__((__warn_unused_result__));
extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__((__nonnull__(1, 4)));
extern int abs(int __x) __attribute__((__nothrow__)) __attribute__((__const__)) __attribute__((__warn_unused_result__));
extern long int labs(long int __x) __attribute__((__nothrow__)) __attribute__((__const__)) __attribute__((__warn_unused_result__));
__extension__
extern long long int llabs(long long int __x) __attribute__((__nothrow__)) __attribute__((__const__)) __attribute__((__warn_unused_result__));
extern div_t div(int __numer, int __denom) __attribute__((__nothrow__)) __attribute__((__const__)) __attribute__((__warn_unused_result__));
extern ldiv_t ldiv(long int __numer, long int __denom) __attribute__((__nothrow__)) __attribute__((__const__)) __attribute__((__warn_unused_result__));
__extension__
extern lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__((__nothrow__)) __attribute__((__const__)) __attribute__((__warn_unused_result__));
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4))) __attribute__((__warn_unused_result__));
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4))) __attribute__((__warn_unused_result__));
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__((__nothrow__)) __attribute__((__nonnull__(3))) __attribute__((__warn_unused_result__));
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4))) __attribute__((__warn_unused_result__));
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4))) __attribute__((__warn_unused_result__));
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__((__nothrow__)) __attribute__((__nonnull__(3))) __attribute__((__warn_unused_result__));
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__((__nothrow__)) __attribute__((__nonnull__(3, 4, 5)));
extern int mblen(__const char *__s, size_t __n) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int mbtowc(wchar_t *__restrict __pwc, __const char *__restrict __s, size_t __n) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int wctomb(char *__s, wchar_t __wchar) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern size_t mbstowcs(wchar_t *__restrict __pwcs, __const char *__restrict __s, size_t __n) __attribute__((__nothrow__));
extern size_t wcstombs(char *__restrict __s, __const wchar_t *__restrict __pwcs, size_t __n) __attribute__((__nothrow__));
extern int rpmatch(__const char *__response) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__warn_unused_result__));
extern int getsubopt(char **__restrict __optionp, char *__const *__restrict __tokens, char **__restrict __valuep) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2, 3))) __attribute__((__warn_unused_result__));
extern int getloadavg(double __loadavg[], int __nelem) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern char *__realpath_chk(__const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *__realpath_alias(__const char *__restrict __name, char *__restrict __resolved) __asm__ ("""realpath") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern char *__realpath_chk_warn(__const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("""__realpath_chk") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__)) __attribute__((__warning__("second argument of realpath must be either NULL or at ""least PATH_MAX bytes long buffer")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) char *__attribute__((__nothrow__)) realpath(__const char *__restrict __name, char *__restrict __resolved)
{
    if (__builtin_object_size(__resolved, 2 > 1) != (size_t) - 1)
    {
        return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
    }
    return __realpath_alias(__name, __resolved);
}
extern int __ptsname_r_chk(int __fd, char *__buf, size_t __buflen, size_t __nreal) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int __ptsname_r_alias(int __fd, char *__buf, size_t __buflen) __asm__ ("""ptsname_r") __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int __ptsname_r_chk_warn(int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("""__ptsname_r_chk") __attribute__((__nothrow__)) __attribute__((__nonnull__(2))) __attribute__((__warning__("ptsname_r called with buflen bigger than ""size of buf")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) int __attribute__((__nothrow__)) ptsname_r(int __fd, char *__buf, size_t __buflen)
{
    if (__builtin_object_size(__buf, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__buflen))
            return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
        if (__buflen > __builtin_object_size(__buf, 2 > 1))
            return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
    }
    return __ptsname_r_alias(__fd, __buf, __buflen);
}
extern int __wctomb_chk(char *__s, wchar_t __wchar, size_t __buflen) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern int __wctomb_alias(char *__s, wchar_t __wchar) __asm__ ("""wctomb") __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) __attribute__((__warn_unused_result__)) int __attribute__((__nothrow__)) wctomb(char *__s, wchar_t __wchar)
{
    if (__builtin_object_size(__s, 2 > 1) != (size_t) - 1 && 16 > __builtin_object_size(__s, 2 > 1))
        return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1));
    return __wctomb_alias(__s, __wchar);
}
extern size_t __mbstowcs_chk(wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len, size_t __dstlen) __attribute__((__nothrow__));
extern size_t __mbstowcs_alias(wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len) __asm__ ("""mbstowcs") __attribute__((__nothrow__));
extern size_t __mbstowcs_chk_warn(wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("""__mbstowcs_chk") __attribute__((__nothrow__)) __attribute__((__warning__("mbstowcs called with dst buffer smaller than len ""* sizeof (wchar_t)")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) size_t __attribute__((__nothrow__)) mbstowcs(wchar_t *__restrict __dst, __const char *__restrict __src, size_t __len)
{
    if (__builtin_object_size(__dst, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__len))
            return __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t));
        if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t))
            return __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t));
    }
    return __mbstowcs_alias(__dst, __src, __len);
}
extern size_t __wcstombs_chk(char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __attribute__((__nothrow__));
extern size_t __wcstombs_alias(char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len) __asm__ ("""wcstombs") __attribute__((__nothrow__));
extern size_t __wcstombs_chk_warn(char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("""__wcstombs_chk") __attribute__((__nothrow__)) __attribute__((__warning__("wcstombs called with dst buffer smaller than len")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) size_t __attribute__((__nothrow__)) wcstombs(char *__restrict __dst, __const wchar_t *__restrict __src, size_t __len)
{
    if (__builtin_object_size(__dst, 2 > 1) != (size_t) - 1)
    {
        if (!__builtin_constant_p(__len))
            return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
        if (__len > __builtin_object_size(__dst, 2 > 1))
            return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
    }
    return __wcstombs_alias(__dst, __src, __len);
}
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void *memmove(void *__dest, __const void *__src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void *memset(void *__s, int __c, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int memcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern void *memchr(__const void *__s, int __c, size_t __n) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern int strncmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
typedef struct __locale_struct
{
        struct __locale_data *__locales[13];
        const unsigned short int *__ctype_b;
        const int *__ctype_tolower;
        const int *__ctype_toupper;
        const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l(__const char *__s1, __const char *__s2, __locale_t __l) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, __const char *__src, size_t __n, __locale_t __l) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 4)));
extern char *strdup(__const char *__s) __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__nonnull__(1)));
extern char *strndup(__const char *__string, size_t __n) __attribute__((__nothrow__)) __attribute__((__malloc__)) __attribute__((__nonnull__(1)));
extern char *strchr(__const char *__s, int __c) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern char *strrchr(__const char *__s, int __c) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern size_t strcspn(__const char *__s, __const char *__reject) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern size_t strspn(__const char *__s, __const char *__accept) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3)));
extern size_t strlen(__const char *__s) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern size_t strnlen(__const char *__string, size_t __maxlen) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__((__nothrow__));
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern char *strerror_l(int __errnum, __locale_t __l) __attribute__((__nothrow__));
extern void __bzero(void *__s, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern void bcopy(__const void *__src, void *__dest, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int bcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern char *index(__const char *__s, int __c) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern char *rindex(__const char *__s, int __c) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern int ffs(int __i) __attribute__((__nothrow__)) __attribute__((__const__));
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern int strncasecmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__((__nothrow__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__((__nothrow__));
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern void *__rawmemchr(const void *__s, int __c);
extern __inline __attribute__((__gnu_inline__)) size_t __strcspn_c1(__const char *__s, int __reject);
extern __inline __attribute__((__gnu_inline__)) size_t __strcspn_c1(__const char *__s, int __reject)
{
    register size_t __result = 0;
    while (__s[__result] != '\0' && __s[__result] != __reject)
        ++__result;
    return __result;
}
extern __inline __attribute__((__gnu_inline__)) size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2);
extern __inline __attribute__((__gnu_inline__)) size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2)
{
    register size_t __result = 0;
    while (__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2)
        ++__result;
    return __result;
}
extern __inline __attribute__((__gnu_inline__)) size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3);
extern __inline __attribute__((__gnu_inline__)) size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3)
{
    register size_t __result = 0;
    while (__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3)
        ++__result;
    return __result;
}
extern __inline __attribute__((__gnu_inline__)) size_t __strspn_c1(__const char *__s, int __accept);
extern __inline __attribute__((__gnu_inline__)) size_t __strspn_c1(__const char *__s, int __accept)
{
    register size_t __result = 0;
    while (__s[__result] == __accept)
        ++__result;
    return __result;
}
extern __inline __attribute__((__gnu_inline__)) size_t __strspn_c2(__const char *__s, int __accept1, int __accept2);
extern __inline __attribute__((__gnu_inline__)) size_t __strspn_c2(__const char *__s, int __accept1, int __accept2)
{
    register size_t __result = 0;
    while (__s[__result] == __accept1 || __s[__result] == __accept2)
        ++__result;
    return __result;
}
extern __inline __attribute__((__gnu_inline__)) size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3);
extern __inline __attribute__((__gnu_inline__)) size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3)
{
    register size_t __result = 0;
    while (__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3)
        ++__result;
    return __result;
}
extern __inline __attribute__((__gnu_inline__)) char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2);
extern __inline __attribute__((__gnu_inline__)) char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2)
{
    while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
        ++__s;
    return *__s == '\0' ? ((void *) 0) : (char *) (size_t) __s;
}
extern __inline __attribute__((__gnu_inline__)) char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3);
extern __inline __attribute__((__gnu_inline__)) char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3)
{
    while (*__s != '\0' && *__s != __accept1 && *__s != __accept2 && *__s != __accept3)
        ++__s;
    return *__s == '\0' ? ((void *) 0) : (char *) (size_t) __s;
}
extern __inline __attribute__((__gnu_inline__)) char *__strtok_r_1c(char *__s, char __sep, char **__nextp);
extern __inline __attribute__((__gnu_inline__)) char *__strtok_r_1c(char *__s, char __sep, char **__nextp)
{
    char *__result;
    if (__s == ((void *) 0))
        __s = *__nextp;
    while (*__s == __sep)
        ++__s;
    __result = ((void *) 0);
    if (*__s != '\0')
    {
        __result = __s++;
        while (*__s != '\0')
            if (*__s++ == __sep)
            {
                __s[- 1] = '\0';
                break;
            }
    }
    *__nextp = __s;
    return __result;
}
extern char *__strsep_g(char **__stringp, __const char *__delim);
extern __inline __attribute__((__gnu_inline__)) char *__strsep_1c(char **__s, char __reject);
extern __inline __attribute__((__gnu_inline__)) char *__strsep_1c(char **__s, char __reject)
{
    register char *__retval = *__s;
    if (__retval != ((void *) 0) && (*__s = (__extension__ (__builtin_constant_p(__reject) && !__builtin_constant_p(__retval) && (__reject) == '\0' ? (char *) __rawmemchr(__retval, __reject) : __builtin_strchr(__retval, __reject)))) != ((void *) 0))
        *(*__s)++ = '\0';
    return __retval;
}
extern __inline __attribute__((__gnu_inline__)) char *__strsep_2c(char **__s, char __reject1, char __reject2);
extern __inline __attribute__((__gnu_inline__)) char *__strsep_2c(char **__s, char __reject1, char __reject2)
{
    register char *__retval = *__s;
    if (__retval != ((void *) 0))
    {
        register char *__cp = __retval;
        while (1)
        {
            if (*__cp == '\0')
            {
                __cp = ((void *) 0);
                break;
            }
            if (*__cp == __reject1 || *__cp == __reject2)
            {
                *__cp++ = '\0';
                break;
            }
            ++__cp;
        }
        *__s = __cp;
    }
    return __retval;
}
extern __inline __attribute__((__gnu_inline__)) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3);
extern __inline __attribute__((__gnu_inline__)) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)
{
    register char *__retval = *__s;
    if (__retval != ((void *) 0))
    {
        register char *__cp = __retval;
        while (1)
        {
            if (*__cp == '\0')
            {
                __cp = ((void *) 0);
                break;
            }
            if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
            {
                *__cp++ = '\0';
                break;
            }
            ++__cp;
        }
        *__s = __cp;
    }
    return __retval;
}
extern char *__strdup(__const char *__string) __attribute__((__nothrow__)) __attribute__((__malloc__));
extern char *__strndup(__const char *__string, size_t __n) __attribute__((__nothrow__)) __attribute__((__malloc__));
extern void __warn_memset_zero_len(void) __attribute__((__warning__("memset used with constant zero length parameter; this could be due to transposed parameters")));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) void *__attribute__((__nothrow__)) memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __len)
{
    return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) void *__attribute__((__nothrow__)) memmove(void *__dest, __const void *__src, size_t __len)
{
    return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) void *__attribute__((__nothrow__)) memset(void *__dest, int __ch, size_t __len)
{
    if (__builtin_constant_p(__len) && __len == 0 && (!__builtin_constant_p(__ch) || __ch != 0))
    {
        __warn_memset_zero_len();
        return __dest;
    }
    return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) void __attribute__((__nothrow__)) bcopy(__const void *__src, void *__dest, size_t __len)
{
    (void) __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) void __attribute__((__nothrow__)) bzero(void *__dest, size_t __len)
{
    (void) __builtin___memset_chk(__dest, '\0', __len, __builtin_object_size(__dest, 0));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) char *__attribute__((__nothrow__)) strcpy(char *__restrict __dest, __const char *__restrict __src)
{
    return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) char *__attribute__((__nothrow__)) strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __len)
{
    return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
}
extern char *__stpncpy_chk(char *__dest, __const char *__src, size_t __n, size_t __destlen) __attribute__((__nothrow__));
extern char *__stpncpy_alias(char *__dest, __const char *__src, size_t __n) __asm__ ("""stpncpy") __attribute__((__nothrow__));
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) char *__attribute__((__nothrow__)) stpncpy(char *__dest, __const char *__src, size_t __n)
{
    if (__builtin_object_size(__dest, 2 > 1) != (size_t) - 1 && (!__builtin_constant_p(__n) || __n <= __builtin_object_size(__dest, 2 > 1)))
        return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1));
    return __stpncpy_alias(__dest, __src, __n);
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) char *__attribute__((__nothrow__)) strcat(char *__restrict __dest, __const char *__restrict __src)
{
    return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
}
extern __inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__, __artificial__)) char *__attribute__((__nothrow__)) strncat(char *__restrict __dest, __const char *__restrict __src, size_t __len)
{
    return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
}
struct timezone
{
        int tz_minuteswest;
        int tz_dsttime;
};
typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday(struct timeval *__restrict __tv, __timezone_ptr_t __tz) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int settimeofday(__const struct timeval *__tv, __const struct timezone *__tz) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int adjtime(__const struct timeval *__delta, struct timeval *__olddelta) __attribute__((__nothrow__));
enum __itimer_which
{
    ITIMER_REAL = 0, 
    ITIMER_VIRTUAL = 1, 
    ITIMER_PROF = 2
};
struct itimerval
{
        struct timeval it_interval;
        struct timeval it_value;
};
typedef int __itimer_which_t;
extern int getitimer(__itimer_which_t __which, struct itimerval *__value) __attribute__((__nothrow__));
extern int setitimer(__itimer_which_t __which, __const struct itimerval *__restrict __new, struct itimerval *__restrict __old) __attribute__((__nothrow__));
extern int utimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int lutimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int futimes(int __fd, __const struct timeval __tvp[2]) __attribute__((__nothrow__));
struct sched_param
{
        int __sched_priority;
};
struct __sched_param
{
        int __sched_priority;
};
typedef unsigned long int __cpu_mask;
typedef struct 
{
        __cpu_mask __bits[1024 / (8 * sizeof(__cpu_mask))];
} cpu_set_t;
extern int __sched_cpucount(size_t __setsize, const cpu_set_t *__setp) __attribute__((__nothrow__));
extern cpu_set_t *__sched_cpualloc(size_t __count) __attribute__((__nothrow__)) __attribute__((__warn_unused_result__));
extern void __sched_cpufree(cpu_set_t *__set) __attribute__((__nothrow__));
extern int sched_setparam(__pid_t __pid, __const struct sched_param *__param) __attribute__((__nothrow__));
extern int sched_getparam(__pid_t __pid, struct sched_param *__param) __attribute__((__nothrow__));
extern int sched_setscheduler(__pid_t __pid, int __policy, __const struct sched_param *__param) __attribute__((__nothrow__));
extern int sched_getscheduler(__pid_t __pid) __attribute__((__nothrow__));
extern int sched_yield(void) __attribute__((__nothrow__));
extern int sched_get_priority_max(int __algorithm) __attribute__((__nothrow__));
extern int sched_get_priority_min(int __algorithm) __attribute__((__nothrow__));
extern int sched_rr_get_interval(__pid_t __pid, struct timespec *__t) __attribute__((__nothrow__));
struct tm
{
        int tm_sec;
        int tm_min;
        int tm_hour;
        int tm_mday;
        int tm_mon;
        int tm_year;
        int tm_wday;
        int tm_yday;
        int tm_isdst;
        long int tm_gmtoff;
        __const char *tm_zone;
};
struct itimerspec
{
        struct timespec it_interval;
        struct timespec it_value;
};
struct sigevent;
extern clock_t clock(void) __attribute__((__nothrow__));
extern time_t time(time_t *__timer) __attribute__((__nothrow__));
extern double difftime(time_t __time1, time_t __time0) __attribute__((__nothrow__)) __attribute__((__const__));
extern time_t mktime(struct tm *__tp) __attribute__((__nothrow__));
extern size_t strftime(char *__restrict __s, size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__((__nothrow__));
extern size_t strftime_l(char *__restrict __s, size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp, __locale_t __loc) __attribute__((__nothrow__));
extern struct tm *gmtime(__const time_t *__timer) __attribute__((__nothrow__));
extern struct tm *localtime(__const time_t *__timer) __attribute__((__nothrow__));
extern struct tm *gmtime_r(__const time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__((__nothrow__));
extern struct tm *localtime_r(__const time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__((__nothrow__));
extern char *asctime(__const struct tm *__tp) __attribute__((__nothrow__));
extern char *ctime(__const time_t *__timer) __attribute__((__nothrow__));
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__((__nothrow__));
extern char *ctime_r(__const time_t *__restrict __timer, char *__restrict __buf) __attribute__((__nothrow__));
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;
extern char *tzname[2];
extern void tzset(void) __attribute__((__nothrow__));
extern int daylight;
extern long int timezone;
extern int stime(__const time_t *__when) __attribute__((__nothrow__));
extern time_t timegm(struct tm *__tp) __attribute__((__nothrow__));
extern time_t timelocal(struct tm *__tp) __attribute__((__nothrow__));
extern int dysize(int __year) __attribute__((__nothrow__)) __attribute__((__const__));
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining);
extern int clock_getres(clockid_t __clock_id, struct timespec *__res) __attribute__((__nothrow__));
extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp) __attribute__((__nothrow__));
extern int clock_settime(clockid_t __clock_id, __const struct timespec *__tp) __attribute__((__nothrow__));
extern int clock_nanosleep(clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem);
extern int clock_getcpuclockid(pid_t __pid, clockid_t *__clock_id) __attribute__((__nothrow__));
extern int timer_create(clockid_t __clock_id, struct sigevent *__restrict __evp, timer_t *__restrict __timerid) __attribute__((__nothrow__));
extern int timer_delete(timer_t __timerid) __attribute__((__nothrow__));
extern int timer_settime(timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__((__nothrow__));
extern int timer_gettime(timer_t __timerid, struct itimerspec *__value) __attribute__((__nothrow__));
extern int timer_getoverrun(timer_t __timerid) __attribute__((__nothrow__));
typedef long int __jmp_buf[8];
enum 
{
    PTHREAD_CREATE_JOINABLE, 
    PTHREAD_CREATE_DETACHED
};
enum 
{
    PTHREAD_MUTEX_TIMED_NP, 
    PTHREAD_MUTEX_RECURSIVE_NP, 
    PTHREAD_MUTEX_ERRORCHECK_NP, 
    PTHREAD_MUTEX_ADAPTIVE_NP, 
    PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP, 
    PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP, 
    PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP, 
    PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
};
enum 
{
    PTHREAD_MUTEX_STALLED, 
    PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED, 
    PTHREAD_MUTEX_ROBUST, 
    PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};
enum 
{
    PTHREAD_RWLOCK_PREFER_READER_NP, 
    PTHREAD_RWLOCK_PREFER_WRITER_NP, 
    PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP, 
    PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum 
{
    PTHREAD_INHERIT_SCHED, 
    PTHREAD_EXPLICIT_SCHED
};
enum 
{
    PTHREAD_SCOPE_SYSTEM, 
    PTHREAD_SCOPE_PROCESS
};
enum 
{
    PTHREAD_PROCESS_PRIVATE, 
    PTHREAD_PROCESS_SHARED
};
struct _pthread_cleanup_buffer
{
        void (*__routine)(void *);
        void *__arg;
        int __canceltype;
        struct _pthread_cleanup_buffer *__prev;
};
enum 
{
    PTHREAD_CANCEL_ENABLE, 
    PTHREAD_CANCEL_DISABLE
};
enum 
{
    PTHREAD_CANCEL_DEFERRED, 
    PTHREAD_CANCEL_ASYNCHRONOUS
};
extern int pthread_create(pthread_t *__restrict __newthread, __const pthread_attr_t *__restrict __attr, void *(*__start_routine)(void *), void *__restrict __arg) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 3)));
extern void pthread_exit(void *__retval) __attribute__((__noreturn__));
extern int pthread_join(pthread_t __th, void **__thread_return);
extern int pthread_detach(pthread_t __th) __attribute__((__nothrow__));
extern pthread_t pthread_self(void) __attribute__((__nothrow__)) __attribute__((__const__));
extern int pthread_equal(pthread_t __thread1, pthread_t __thread2) __attribute__((__nothrow__));
extern int pthread_attr_init(pthread_attr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_destroy(pthread_attr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getdetachstate(__const pthread_attr_t *__attr, int *__detachstate) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setdetachstate(pthread_attr_t *__attr, int __detachstate) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getguardsize(__const pthread_attr_t *__attr, size_t *__guardsize) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setguardsize(pthread_attr_t *__attr, size_t __guardsize) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getschedparam(__const pthread_attr_t *__restrict __attr, struct sched_param *__restrict __param) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setschedparam(pthread_attr_t *__restrict __attr, __const struct sched_param *__restrict __param) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_getschedpolicy(__const pthread_attr_t *__restrict __attr, int *__restrict __policy) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setschedpolicy(pthread_attr_t *__attr, int __policy) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getinheritsched(__const pthread_attr_t *__restrict __attr, int *__restrict __inherit) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setinheritsched(pthread_attr_t *__attr, int __inherit) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getscope(__const pthread_attr_t *__restrict __attr, int *__restrict __scope) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setscope(pthread_attr_t *__attr, int __scope) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getstackaddr(__const pthread_attr_t *__restrict __attr, void **__restrict __stackaddr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2))) __attribute__((__deprecated__));
extern int pthread_attr_setstackaddr(pthread_attr_t *__attr, void *__stackaddr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1))) __attribute__((__deprecated__));
extern int pthread_attr_getstacksize(__const pthread_attr_t *__restrict __attr, size_t *__restrict __stacksize) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_attr_setstacksize(pthread_attr_t *__attr, size_t __stacksize) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_attr_getstack(__const pthread_attr_t *__restrict __attr, void **__restrict __stackaddr, size_t *__restrict __stacksize) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2, 3)));
extern int pthread_attr_setstack(pthread_attr_t *__attr, void *__stackaddr, size_t __stacksize) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_setschedparam(pthread_t __target_thread, int __policy, __const struct sched_param *__param) __attribute__((__nothrow__)) __attribute__((__nonnull__(3)));
extern int pthread_getschedparam(pthread_t __target_thread, int *__restrict __policy, struct sched_param *__restrict __param) __attribute__((__nothrow__)) __attribute__((__nonnull__(2, 3)));
extern int pthread_setschedprio(pthread_t __target_thread, int __prio) __attribute__((__nothrow__));
extern int pthread_once(pthread_once_t *__once_control, void (*__init_routine)(void)) __attribute__((__nonnull__(1, 2)));
extern int pthread_setcancelstate(int __state, int *__oldstate);
extern int pthread_setcanceltype(int __type, int *__oldtype);
extern int pthread_cancel(pthread_t __th);
extern void pthread_testcancel(void);
typedef struct 
{
        struct 
        {
                __jmp_buf __cancel_jmp_buf;
                int __mask_was_saved;
        } __cancel_jmp_buf[1];
        void *__pad[4];
} __pthread_unwind_buf_t __attribute__((__aligned__));
struct __pthread_cleanup_frame
{
        void (*__cancel_routine)(void *);
        void *__cancel_arg;
        int __do_it;
        int __cancel_type;
};
extern void __pthread_register_cancel(__pthread_unwind_buf_t *__buf);
extern void __pthread_unregister_cancel(__pthread_unwind_buf_t *__buf);
extern void __pthread_unwind_next(__pthread_unwind_buf_t *__buf) __attribute__((__noreturn__)) __attribute__((__weak__));
struct __jmp_buf_tag;
extern int __sigsetjmp(struct __jmp_buf_tag *__env, int __savemask) __attribute__((__nothrow__));
extern int pthread_mutex_init(pthread_mutex_t *__mutex, __const pthread_mutexattr_t *__mutexattr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutex_destroy(pthread_mutex_t *__mutex) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutex_trylock(pthread_mutex_t *__mutex) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutex_lock(pthread_mutex_t *__mutex) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutex_timedlock(pthread_mutex_t *__restrict __mutex, __const struct timespec *__restrict __abstime) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutex_getprioceiling(__const pthread_mutex_t *__restrict __mutex, int *__restrict __prioceiling) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutex_setprioceiling(pthread_mutex_t *__restrict __mutex, int __prioceiling, int *__restrict __old_ceiling) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 3)));
extern int pthread_mutex_consistent(pthread_mutex_t *__mutex) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_init(pthread_mutexattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_getpshared(__const pthread_mutexattr_t *__restrict __attr, int *__restrict __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutexattr_setpshared(pthread_mutexattr_t *__attr, int __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_gettype(__const pthread_mutexattr_t *__restrict __attr, int *__restrict __kind) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutexattr_settype(pthread_mutexattr_t *__attr, int __kind) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_getprotocol(__const pthread_mutexattr_t *__restrict __attr, int *__restrict __protocol) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutexattr_setprotocol(pthread_mutexattr_t *__attr, int __protocol) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_getprioceiling(__const pthread_mutexattr_t *__restrict __attr, int *__restrict __prioceiling) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *__attr, int __prioceiling) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_mutexattr_getrobust(__const pthread_mutexattr_t *__attr, int *__robustness) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_mutexattr_setrobust(pthread_mutexattr_t *__attr, int __robustness) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_init(pthread_rwlock_t *__restrict __rwlock, __const pthread_rwlockattr_t *__restrict __attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_tryrdlock(pthread_rwlock_t *__rwlock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_timedrdlock(pthread_rwlock_t *__restrict __rwlock, __const struct timespec *__restrict __abstime) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_trywrlock(pthread_rwlock_t *__rwlock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlock_timedwrlock(pthread_rwlock_t *__restrict __rwlock, __const struct timespec *__restrict __abstime) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlockattr_init(pthread_rwlockattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlockattr_destroy(pthread_rwlockattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlockattr_getpshared(__const pthread_rwlockattr_t *__restrict __attr, int *__restrict __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *__attr, int __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_rwlockattr_getkind_np(__const pthread_rwlockattr_t *__restrict __attr, int *__restrict __pref) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_rwlockattr_setkind_np(pthread_rwlockattr_t *__attr, int __pref) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_cond_init(pthread_cond_t *__restrict __cond, __const pthread_condattr_t *__restrict __cond_attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_cond_destroy(pthread_cond_t *__cond) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_cond_signal(pthread_cond_t *__cond) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_cond_broadcast(pthread_cond_t *__cond) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_cond_wait(pthread_cond_t *__restrict __cond, pthread_mutex_t *__restrict __mutex) __attribute__((__nonnull__(1, 2)));
extern int pthread_cond_timedwait(pthread_cond_t *__restrict __cond, pthread_mutex_t *__restrict __mutex, __const struct timespec *__restrict __abstime) __attribute__((__nonnull__(1, 2, 3)));
extern int pthread_condattr_init(pthread_condattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_condattr_destroy(pthread_condattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_condattr_getpshared(__const pthread_condattr_t *__restrict __attr, int *__restrict __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_condattr_setpshared(pthread_condattr_t *__attr, int __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_condattr_getclock(__const pthread_condattr_t *__restrict __attr, __clockid_t *__restrict __clock_id) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_condattr_setclock(pthread_condattr_t *__attr, __clockid_t __clock_id) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_spin_init(pthread_spinlock_t *__lock, int __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_spin_destroy(pthread_spinlock_t *__lock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_spin_lock(pthread_spinlock_t *__lock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_spin_trylock(pthread_spinlock_t *__lock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_spin_unlock(pthread_spinlock_t *__lock) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_barrier_init(pthread_barrier_t *__restrict __barrier, __const pthread_barrierattr_t *__restrict __attr, unsigned int __count) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_barrier_destroy(pthread_barrier_t *__barrier) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_barrier_wait(pthread_barrier_t *__barrier) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_barrierattr_init(pthread_barrierattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_barrierattr_destroy(pthread_barrierattr_t *__attr) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_barrierattr_getpshared(__const pthread_barrierattr_t *__restrict __attr, int *__restrict __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1, 2)));
extern int pthread_barrierattr_setpshared(pthread_barrierattr_t *__attr, int __pshared) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_key_create(pthread_key_t *__key, void (*__destr_function)(void *)) __attribute__((__nothrow__)) __attribute__((__nonnull__(1)));
extern int pthread_key_delete(pthread_key_t __key) __attribute__((__nothrow__));
extern void *pthread_getspecific(pthread_key_t __key) __attribute__((__nothrow__));
extern int pthread_setspecific(pthread_key_t __key, __const void *__pointer) __attribute__((__nothrow__));
extern int pthread_getcpuclockid(pthread_t __thread_id, __clockid_t *__clock_id) __attribute__((__nothrow__)) __attribute__((__nonnull__(2)));
extern int pthread_atfork(void (*__prepare)(void), void (*__parent)(void), void (*__child)(void)) __attribute__((__nothrow__));
extern __inline __attribute__((__gnu_inline__)) int __attribute__((__nothrow__)) pthread_equal(pthread_t __thread1, pthread_t __thread2)
{
    return __thread1 == __thread2;
}
enum std_markers
{
    DQT = 0xDB, 
    SOF = 0xC0, 
    DHT = 0xC4, 
    SOI = 0xD8, 
    SOS = 0xDA, 
    RST = 0xD0, 
    RST7 = 0xD7, 
    EOI = 0xD9, 
    DRI = 0xDD, 
    APP0 = 0xE0
};
typedef struct huffman_table
{
        short int lookup[(1UL << 9)];
        unsigned char code_size[(1UL << 9)];
        uint16_t slowtable[16 - 9][256];
} huffman_table_t;
typedef struct component
{
        unsigned int Hfactor;
        unsigned int Vfactor;
        struct huffman_table *AC_table;
        struct huffman_table *DC_table;
        short int previous_DC;
        unsigned int cid;
} component_t;
typedef struct jdec_task
{
        int id;
        int mcus_posx, mcus_posy;
        const unsigned char *stream_begin, *stream_end;
        unsigned int stream_length;
        const unsigned char *stream;
        unsigned int reservoir, nbits_in_reservoir;
} jdec_task_t;
typedef struct idct_data
{
        short int DCT_Y[4][64];
        short int DCT_C[2][64];
} idct_data_t;
typedef struct yuv_data
{
        uint8_t Y[64 * 4], Cr[64], Cb[64];
} yuv_data_t;
typedef struct jpeg_parse_context
{
        uint8_t *components[3];
        int width, height;
        int mcus_in_width, mcus_in_height;
        int mcus_posx, mcus_posy;
        unsigned int flags;
        const unsigned char *stream_begin, *stream_end;
        unsigned int stream_length;
        const unsigned char *stream;
        unsigned int reservoir, nbits_in_reservoir;
        struct component component_infos[3];
        float Q_tables[3][64];
        int q[3];
        struct huffman_table HTDC[4];
        struct huffman_table HTAC[4];
        int default_huffman_table_initialized;
        int restart_interval;
        int ntasks;
        int last_rst_marker_seen;
} jpeg_parse_context_t;
typedef struct huffman_context
{
        struct component component_infos[3];
        struct huffman_table HTDC[4];
        struct huffman_table HTAC[4];
        int default_huffman_table_initialized;
        int restart_interval;
        int ntasks;
        int mcus_in_width;
        int mcus_in_height;
        struct jtask_queue *jtask_q;
        struct idct_queue *idct_q;
} huffman_context_t;
typedef struct idct_context
{
        float Q_tables[3][64];
        int q[3];
        int width, height;
        int restart_interval;
        int ntasks;
        struct idct_queue *idct_q;
        struct cc_queue *cc_q;
} idct_context_t;
typedef struct cc_context
{
        int width, height;
        int restart_interval;
        unsigned char *base;
        unsigned char *rgb_data;
        int mcus_in_width;
        int mcus_in_height;
        int ntasks;
        struct cc_queue *cc_q;
        struct write_list *write_l;
} cc_context;
typedef struct jpeg_decode_context
{
        int width, height;
        int mcus_in_width, mcus_in_height;
        int restart_interval;
        int ntasks;
        struct huffman_context *hc;
        struct idct_context *ic;
        struct cc_context *cc;
        struct jdec_task hdata;
        struct idct_data idata;
        struct yuv_data yuvdata;
} jpeg_decode_context_t;
typedef struct write_context
{
        FILE *F;
        int width, height;
        int restart_interval;
        unsigned char *rgb_data;
        unsigned char *base;
        struct write_list *write_l;
} write_context_t;
struct jpeg_parse_context *create_jpeg_parse_context();
void destroy_jpeg_parse_context(struct jpeg_parse_context *jpc);
void create_jdec_task(struct jpeg_parse_context *jpc, struct jdec_task *task, int tasknum);
int tinyjpeg_parse_context_header(struct jpeg_parse_context *jpc, const unsigned char *buf, unsigned int size);
void convert_yuv_bgr(struct cc_context *cc, struct yuv_data *yuv);
struct cc_context *create_cc_context(struct jpeg_parse_context *jpc, uint8_t *rgb_data);
void destroy_cc_context(struct cc_context *cc);
void idct_mcu(struct idct_context *ic, struct idct_data *idata, struct yuv_data *yuvdata);
struct idct_context *create_idct_context(struct jpeg_parse_context *jpc);
void destroy_idct_context(struct idct_context *ic);
int process_huffman_mcu(struct huffman_context *hc, struct jdec_task *hdata, struct idct_data *idata);
struct huffman_context *create_huffman_context(struct jpeg_parse_context *jpc);
void destroy_huffman_context(struct huffman_context *hc);
const char *tinyjpeg_get_errorstring();
void decode_jpeg_task(struct jpeg_decode_context *jdc, struct jdec_task *jtask);
struct jpeg_decode_context *create_jpeg_decode_context(struct jpeg_parse_context *jpc, uint8_t *rgb_data);
void destroy_jpeg_decode_context(struct jpeg_decode_context *jdc);
typedef struct timeval timer;
long timevaldiff(timer *start, timer *finish);
static void exitmessage(const char *message)
{
    printf("%s\n", message);
    exit(0);
}
static int filesize(FILE *fp)
{
    long pos;
    fseek(fp, 0, 2);
    pos = ftell(fp);
    fseek(fp, 0, 0);
    return pos;
}
static struct write_context *create_write_context(struct jpeg_parse_context *jpc, const char *outfilename, uint8_t *rgb_data)
{
    char temp[1024];
    struct write_context *wc = malloc(sizeof(struct write_context));
    wc->width = jpc->width;
    wc->height = jpc->height;
    wc->restart_interval = jpc->restart_interval;
    snprintf(temp, sizeof (temp), "%s", outfilename);
    wc->F = fopen(temp, "wb");
    wc->base = rgb_data;
    wc->rgb_data = rgb_data;
    return wc;
}
static void destroy_write_context(struct write_context *wc)
{
    fclose(wc->F);
    free(wc);
}
void write_tga_header(struct write_context *wc)
{
    unsigned char targaheader[18];
    memset(targaheader, 0, sizeof (targaheader));
    targaheader[12] = (unsigned char) (wc->width & 0xFF);
    targaheader[13] = (unsigned char) (wc->width >> 8);
    targaheader[14] = (unsigned char) (wc->height & 0xFF);
    targaheader[15] = (unsigned char) (wc->height >> 8);
    targaheader[17] = 0x20;
    targaheader[2] = 2;
    targaheader[16] = 24;
    fwrite(targaheader, sizeof (targaheader), 1, wc->F);
}
void write_next_mcu_line(struct write_context *wc)
{
    int bytes_per_mcu_line = wc->width * 3 * 16;
    fwrite(wc->rgb_data, 1, bytes_per_mcu_line, wc->F);
    wc->rgb_data += bytes_per_mcu_line;
}
int convert_one_image(const char *infilename, const char *outfilename)
{
    FILE *fp;
    struct jpeg_parse_context *jpc;
    struct jpeg_decode_context *jdc = ((void *) 0);
    struct write_context *wc;
    struct jdec_task *jtask;
    unsigned int length_of_file;
    int width, height;
    int mcus_in_width, mcus_in_height;
    unsigned char *buf;
    uint8_t *rgb_data;
    int i;
    int ntasks;
    fp = fopen(infilename, "rb");
    if (fp == ((void *) 0))
        exitmessage("Cannot open filename\n");
    length_of_file = filesize(fp);
    buf = (unsigned char *) malloc(length_of_file + 4);
    if (buf == ((void *) 0))
        exitmessage("Not enough memory for loading file\n");
    fread(buf, length_of_file, 1, fp);
    fclose(fp);
    jpc = create_jpeg_parse_context();
    if (jpc == ((void *) 0))
        exitmessage("Not enough memory to alloc the structure need for decompressing\n");
    if (tinyjpeg_parse_context_header(jpc, buf, length_of_file) < 0)
        exitmessage(tinyjpeg_get_errorstring());
    width = jpc->width;
    height = jpc->height;
    mcus_in_width = jpc->mcus_in_width;
    mcus_in_height = jpc->mcus_in_height;
    rgb_data = (uint8_t *) malloc(width * height * 3);
    if (jpc->restart_interval)
    {
        ntasks = (mcus_in_width * mcus_in_height / jpc->restart_interval) + !!((mcus_in_width * mcus_in_height) % jpc->restart_interval);
    }
    else
    {
        ntasks = 1;
        jpc->restart_interval = mcus_in_height * mcus_in_width;
    }
    jdc = create_jpeg_decode_context(jpc, rgb_data);
    wc = create_write_context(jpc, outfilename, rgb_data);
    printf("Decoding JPEG image...\n");
    jtask = malloc((sizeof(struct jdec_task)) * ntasks);
    for (i = 0;
        i < ntasks;
        i++)
    {
        create_jdec_task(jpc, jtask + i, i);
    }
    int j;
    for (j = 0;
        j < ntasks;
        j++)
    {
        decode_jpeg_task(jdc, jtask + j);
    }
    {
        nanos_omp_barrier();
    }
    write_tga_header(wc);
    for (i = 0;
        i < mcus_in_height;
        i++)
    {
        write_next_mcu_line(wc);
    }
    free(buf);
    free(rgb_data);
    destroy_jpeg_parse_context(jpc);
    destroy_jpeg_decode_context(jdc);
    destroy_write_context(wc);
    return 0;
}
static void usage(void)
{
    fprintf(stderr, "Usage: loadjpeg [option] input_filename.jpeg output_filename.tga \n");
    fprintf(stderr, "option:\n");
    fprintf(stderr, "  --benchmark - Measure the timing of 1 conversion\n");
    exit(1);
}
long timevaldiff(timer *start, timer *finish)
{
    long msec;
    msec = (finish->tv_sec - start->tv_sec) * 1000;
    msec += (finish->tv_usec - start->tv_usec) / 1000;
    return msec;
}
int main(int argc, char *argv[])
{
    char *output_filename, *input_filename;
    timer start, finish;
    long elapsed;
    int current_argument;
    int benchmark_mode = 0;
    if (argc < 3)
        usage();
    current_argument = 1;
    while (1)
    {
        if (__extension__ ({
            size_t __s1_len, __s2_len;
            (__builtin_constant_p(argv[current_argument]) && __builtin_constant_p("--benchmark") && (__s1_len = strlen(argv[current_argument]) , __s2_len = strlen("--benchmark") , (!((size_t) (const void *) ((argv[current_argument]) + 1) - (size_t) (const void *) (argv[current_argument]) == 1) || __s1_len >= 4) && (!((size_t) (const void *) (("--benchmark") + 1) - (size_t) (const void *) ("--benchmark") == 1) || __s2_len >= 4)) ? __builtin_strcmp(argv[current_argument], "--benchmark") : (__builtin_constant_p(argv[current_argument]) && ((size_t) (const void *) ((argv[current_argument]) + 1) - (size_t) (const void *) (argv[current_argument]) == 1) && (__s1_len = strlen(argv[current_argument]) , __s1_len < 4) ? (__builtin_constant_p("--benchmark") && ((size_t) (const void *) (("--benchmark") + 1) - (size_t) (const void *) ("--benchmark") == 1) ? __builtin_strcmp(argv[current_argument], "--benchmark") : (__extension__ ({
                __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("--benchmark");
                register int __result = (((__const unsigned char *) (__const char *) (argv[current_argument]))[0] - __s2[0]);
                if (__s1_len > 0 && __result == 0)
                {
                    __result = (((__const unsigned char *) (__const char *) (argv[current_argument]))[1] - __s2[1]);
                    if (__s1_len > 1 && __result == 0)
                    {
                        __result = (((__const unsigned char *) (__const char *) (argv[current_argument]))[2] - __s2[2]);
                        if (__s1_len > 2 && __result == 0)
                            __result = (((__const unsigned char *) (__const char *) (argv[current_argument]))[3] - __s2[3]);
                    }
                }
                __result;
            }))) : (__builtin_constant_p("--benchmark") && ((size_t) (const void *) (("--benchmark") + 1) - (size_t) (const void *) ("--benchmark") == 1) && (__s2_len = strlen("--benchmark") , __s2_len < 4) ? (__builtin_constant_p(argv[current_argument]) && ((size_t) (const void *) ((argv[current_argument]) + 1) - (size_t) (const void *) (argv[current_argument]) == 1) ? __builtin_strcmp(argv[current_argument], "--benchmark") : (__extension__ ({
                __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (argv[current_argument]);
                register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("--benchmark"))[0];
                if (__s2_len > 0 && __result == 0)
                {
                    __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("--benchmark"))[1]);
                    if (__s2_len > 1 && __result == 0)
                    {
                        __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("--benchmark"))[2]);
                        if (__s2_len > 2 && __result == 0)
                            __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("--benchmark"))[3]);
                    }
                }
                __result;
            }))) : __builtin_strcmp(argv[current_argument], "--benchmark"))));
        }) == 0)
            benchmark_mode = 1;
        else
            break;
        current_argument++;
    }
    if (argc < current_argument + 2)
        usage();
    input_filename = argv[current_argument];
    output_filename = argv[current_argument + 1];
    if (benchmark_mode)
        gettimeofday(&start, ((void *) 0));
    ;
    convert_one_image(input_filename, output_filename);
    if (benchmark_mode)
    {
        gettimeofday(&finish, ((void *) 0));
        ;
        elapsed = timevaldiff(&start, &finish);
        printf("Decoding finished in %.2fs (%ld ms)\n", (double) elapsed / 1000, elapsed);
    }
    return 0;
}
__attribute__((weak, section("nanos_init"))) nanos_init_desc_t __section__nanos_init = {
    nanos_omp_set_interface,
    (void *) 0
};

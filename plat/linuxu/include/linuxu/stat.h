#ifndef __LINUXU_STAT_H__
#define __LINUXU_STAT_H__

#include <linuxu/time.h>
#include <linuxu/mode.h>

typedef __u64 k_dev_t;
typedef __u64 k_ino_t;
typedef __u32 k_nlink_t;
typedef unsigned k_uid_t;
typedef unsigned k_gid_t;
typedef unsigned k_id_t;
typedef __off k_off_t;
typedef long k_blksize_t;
typedef __s64 k_blkcnt_t;


struct k_stat {
  
  k_dev_t st_dev;
  k_ino_t st_ino;
  k_nlink_t st_nlink;

  k_mode_t st_mode;
  k_uid_t st_uit;
  k_gid_t st_gid;
  unsigned int __pad0;
  k_dev_t st_rdev;
  k_off_t st_size;
  k_blksize_t st_blksize;
  k_blkcnt_t st_blocks;

  struct k_timespec st_atim;
  struct k_timespec st_mtim;
  struct k_timespec st_ctim;

};

#endif /* __LINUXU_STAT_H__ */

/* Drop in replacement for zmalloc.h in order to just use libc malloc without
 * any wrappering. */

#ifndef ZMALLOC_H
#define ZMALLOC_H

#define zmalloc malloc
// 用于调整已分配内存块的大小
#define zrealloc realloc
#define zcalloc(x) calloc(x, 1)
#define zfree free
#define zstrdup strdup

#endif

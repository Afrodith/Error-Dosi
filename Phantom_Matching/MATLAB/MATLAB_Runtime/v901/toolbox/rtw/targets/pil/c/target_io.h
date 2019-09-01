/* Copyright 2011-2013 The MathWorks, Inc. */
#ifndef __TARGET_STDIO_H__
#define __TARGET_STDIO_H__

#ifdef __cplusplus
extern "C" {
#endif
/* 
 * The default buffer size is 64 bytes with 
 * 1 bytes reserved for null terminator at the end.
 *
 * For LDRA I/O forward support, by default configuration, a minimal 
 * of 25 bytes buffer is enough.  LDRA users can change the column
 * width of output data format, which may exceed this 25 bytes 
 * boundary value. However, the 64 bytes buffer will provide a safer
 * limit.
 * 
 */


/* 
 * For compatibility with third party code coverage tools, this header must not
 * include rtwtypes.h. In particular, we must not use uint16_T in this header
 * file. Note that unsigned short is guaranteed to be at least 16 bits wide on
 * any platform; see implementation of targetFopen, targetFprintf for casts that
 * rely on this guarantee.
 */
extern void targetPrintf(const char * fmt, ...); 
extern unsigned short targetFopen(const char * fileName);
extern void targetFprintf(unsigned short targetFid, const char * fmt, ...);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __TARGET_STDIO_H__ */

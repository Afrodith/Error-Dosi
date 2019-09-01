/* Copyright 2011 The MathWorks, Inc. */
#ifndef _CODE_COVERAGE_UTILS_H_
#define _CODE_COVERAGE_UTILS_H_

#ifdef __cplusplus
extern "C" {
#endif
typedef void(*targetUploadFcn)(void);
/* get called from instrumented source */
extern void registerTargetUploadFcn(targetUploadFcn aUploadFcn);
/* get called from xil_interface_lib.c */
extern void callTargetUploadFcns(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _CODE_COVERAGE_UTILS_H_ */

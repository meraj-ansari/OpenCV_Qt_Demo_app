#ifndef __ERROR_CODE__
#define __ERROR_CODE__

int NO_ERROR = 0;
int ENO_SUCCESS             = NO_ERROR + 1;
int ENO_FAILURE             = ENO_SUCCESS + 1;
int ENO_IMAGE_PATH_INVALID  = ENO_FAILURE + 1;
int ENO_IMAGE_DATA_INVALID  = ENO_IMAGE_PATH_INVALID + 1;

#endif
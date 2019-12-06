#ifndef __COMMON_FUNC__
#define __COMMAN_FUNC__

#include <stdio.h>

static int store_data2_file(char * file_dir, char* openMode, char * data, int dataLen)
{
    FILE * fp = fopen(file_dir,openMode);
    if(NULL != fp)
    {
        size_t w_size = fwrite(data,1,dataLen,fp);
        fclose(fp);
        return 0;
    }
    else
    {
        printf("open file %s\n faile\n",fileName);
        return -1;
    }
}

static int read_popen_result(const char *command, const char *type, char *getResult, int getResuLen)
{
    FILE * fp = popen(command, type);
    if(NULL != fp)
    {
	    fread(getResult, getResuLen, 1, fp);
	    fclose(fp);
	    return 0;
    }
    return -1;
}



#endif

#ifndef _FILE_H_
#define _FILE_H_

static int store_file(char * file_dir, char* openMode, uint8_t* data, int dataLen)
{
    FILE * fp = fopen(file_dir,openMode);
    if(fp)
    {
        size_t w_size = fwrite(data,1,dataLen,fp);
        printf("save file===> %s\n",fileName);
    }
    else
    {
        printf("open file %s\n faile\n",fileName);
        return;
    }
}

#endif

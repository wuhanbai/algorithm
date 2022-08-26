/**************************************************************************************************************************************************************
Copyright (C) wuhanbai。All rights reserved.
*************************************************************************************************************************************************************/


/***************************** Include Files *********************************/
#include <stdio.h>
/************************** Constant Definitions *****************************/
#define LENGTH          (sizeof(buf)/sizeof(int))
/************************** Global Definitions *******************************/
//int buf[LENGTH];
/************************** Function Prototypes ******************************/
int remove_duplicates(int* buf, int length);
/************************** Function Definitions *****************************/
/******************************************************************************
*
* main()
*
* @param	None.
*
* @return	0.
*
* @note		None.
*
****************************************************************************/
int main(void)
{
    int buf[] = {0, 0, 1, 1, 1, 2, 3, 4, 4, 5};
    int length = LENGTH;
    length = remove_duplicates(buf, length);
    for(int i = 0; i < length; i++)
    {
        printf("%d ", buf[i]);
    }
    printf("\n");

    return 0;
}   /* main() */


/******************************************************************************
*
* remove duplicates data in buf.
*
* @param	buf is incoming array.
*
* @param	length is the length of buf.
*
* @return	New length.
*
* @note		None
*
****************************************************************************/
int remove_duplicates(int* buf, int length)
{
    int i = 0, j = 0;
    for(i = 0; i < length - 1; i++)
    {
        if(buf[i] == buf[i + 1])
        {
            for(j = i + 1; j < length - 1; j++)
            {
                buf[j] = buf[j + 1];
            }
            length -= 1;
            i -= 1; 
        }
    }
    return length;
}   /* remove_duplicates() */
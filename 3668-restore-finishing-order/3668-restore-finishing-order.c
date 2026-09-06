/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* ao, int on, int* af, int fn, int* returnSize) 
{
    int * res= (int*)malloc(on*sizeof(int));
    int c=0,k=0;
    for(int i=0;i<on;i++)
    {
        int key=ao[i];
        for(int j=0;j<fn;j++)
        {
           if(af[j]==ao[i])
           {
            res[k]=ao[i];
            k++;
            c++;
           }
        }
    }
    * returnSize=c;
    return res;
}
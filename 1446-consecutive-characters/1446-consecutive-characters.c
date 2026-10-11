int maxPower(char* s) 
{
    int count=1,maxc=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        count++;
        else
        count=1;
        if(count>maxc)
        maxc=count;
    }
    return maxc;
}
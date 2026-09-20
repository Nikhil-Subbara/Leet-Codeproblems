int reverseDegree(char* s) 
{
    int res=1,sum=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int curr=0;
        switch (s[i])
        {
            case 'z': curr = 1; break;
            case 'y': curr = 2; break;
            case 'x': curr = 3; break;
            case 'w': curr = 4; break;
            case 'v': curr = 5; break;
            case 'u': curr = 6; break;
            case 't': curr = 7; break;
            case 's': curr = 8; break;
            case 'r': curr = 9; break;
            case 'q': curr = 10; break;
            case 'p': curr = 11; break;
            case 'o': curr = 12; break;
            case 'n': curr = 13;break;
            case 'm': curr = 14; break;
            case 'l': curr = 15; break;
            case 'k': curr = 16; break;
            case 'j': curr = 17; break;
            case 'i': curr = 18; break;
            case 'h': curr = 19; break;
            case 'g': curr = 20; break;
            case 'f': curr = 21; break;
            case 'e': curr = 22; break;
            case 'd': curr = 23; break;
            case 'c': curr = 24; break;
            case 'b': curr = 25; break;
            case 'a': curr = 26; break;
        }
        res=curr*(i+1);
        printf("%d ",res);
        sum=sum+res;
    }
   return sum;
}
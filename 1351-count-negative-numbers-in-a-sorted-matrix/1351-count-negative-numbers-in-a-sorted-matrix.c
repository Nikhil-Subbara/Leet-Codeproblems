int countNegatives(int** g, int gs, int* gcs) 
{
    int count=0;
    for (int i=0;i<gs;i++)
    {
        for(int j=0;j<gcs[0];j++)
        {
            if(g[i][j]<0)
            count++;
        }
    }
    return count;
}
/*
In a M X N matrix find no of ways to reach the end of the matrix starting from 1st index
only bottom and right movements allowed
int no_of_ways(int m,int n)
{
    if(m==1 || n==1)
    return 1;
    return no_of_ways(m-1.n)+no_of_ways(m,n-1);
}
*/
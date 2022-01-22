/*
Around a round table a game of death is played
guy shoots the guy after the value k
find last man standing
int jos(int n,int k)
{
    if(n==1)
    reurn 0;
    return((jos(n-1,k)+k)%n);
}

*/
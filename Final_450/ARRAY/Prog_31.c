//Smallest Subarray with sum greater than a given value
/*
while (e < n)
{
    while (e < n && curr_sum <= x)
    {
        curr_sum = curr_sum + a[e];
        e++;
    }

    while (curr_sum > x && s < n)
    {
        if (e - s < count)
            count = e - s;
        curr_sum = curr_sum - a[s];
        s++;
    }
}
return (count);
*/
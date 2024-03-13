int findUnique(int *arr, int size)
{
    int ans = arr[0];

    for(int i=1; i<size; i++)
        ans ^= arr[i];

    return ans;
}

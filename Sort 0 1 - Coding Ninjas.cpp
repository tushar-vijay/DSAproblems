void sortZeroesAndOne(int input[], int size)
{
    int l = 0, r = size-1;

    while(l < r){
        while(input[l] == 0)
            l++;

        while(input[r] == 1)
            r--;

        if(l < r){
            swap(input[l], input[r]);
            l++;
            r--;
        }
    }
}

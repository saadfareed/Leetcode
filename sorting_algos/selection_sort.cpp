void selection_sort(int arr[],int size)
{
    int min_idx;
    for(int i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min_idx])
            min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
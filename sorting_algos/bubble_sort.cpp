// recursive approach

void bubble_sort(int arr[],int size)
{ 
    if (size == 0 || size == 1)
        return;
    for(int i = 0; i < size - 1 ; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble_sort(arr, size - 1);
}

// itrative approach
void bubble_sort(int arr[],int size)
{ 
    for(int i = 0; i < size - 1 ; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
}
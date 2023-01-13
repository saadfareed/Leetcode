void bubble_sort(int arr[],int size)
{
    for(int i=0; i < size -1; i++)
    {
       for(int j=0; j < size - i -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // std::cout << arr[i] << " > " << arr[j+1] << std::endl; 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        
        } 
    }
    
}
// Sort an array of integers using bubble sort algorithm.
// As provided, this function sorts in ASCENDING order.
void bubbleSort(int array[])
{
   for (unsigned int pass = 0; pass < SIZE - 1; ++pass) {
      for (size_t j = 0; j < SIZE - 1; ++j) {
         if (array[j] > array[j + 1]) {
            swap(&array[j], &array[j + 1]);
         } 
      } 
   } 
}

// Swap values at the memory locations pointed to by
// element1Ptr and element2Ptr.
void swap(int *element1Ptr, int *element2Ptr)            
{                                                          
   int hold = *element1Ptr;                                
   *element1Ptr = *element2Ptr;                            
   *element2Ptr = hold;                                    
}

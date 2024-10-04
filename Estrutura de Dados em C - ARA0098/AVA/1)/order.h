void PrintVector(int n, int vector[n]){
  printf("\n\n==Vetor ordenado==\n");
  
  for(int i = 0; i < n; i++){
    printf("%d-", vector[i]);
  }
}

void BubbleSort (int n, int vector[n]){
  int i, j;
  
   for (i = 0; i < n-1; i++) {
      for (j = 0; j < n - i - 1; j++) {
        
         if (vector[j] > vector[j + 1]) {
            int temp = vector[j];
           
            vector[j] = vector[j + 1];
            vector[j + 1] = temp;
      }
    }
  }
  PrintVector(n, vector);
}

void InsertionSort (int n, int vector[n]){
  int i, j, temp;
  
    for (i = 1; i < n; i++) {
        temp = vector[i];
        j = i - 1;
      
        while (j >= 0 && vector[j] > temp) {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
      vector[j + 1] = temp;
    }
  PrintVector(n, vector);
}


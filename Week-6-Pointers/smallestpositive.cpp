long long smallestpositive(vector<long long> array, int n)
    { 
       sort(array.begin(), array.end());
       long long total = 1;
       for(int i = 0; i < n ; i++){
           if(array[i] > total)
               return total;
           total += array[i];
       }
       return total;
    } 
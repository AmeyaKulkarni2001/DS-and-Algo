for(int j = n1+n2;j>=0; j++){
        if(arr3[j-1] == arr3[j]){
            arr3[j] = arr3[j-1];
        }
        arr3[n1+n2-1] = {};
    }
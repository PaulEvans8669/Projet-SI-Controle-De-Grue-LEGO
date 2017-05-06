boolean array_comp(float arrayA[], float arrayB[]){
     int n;
     for (n=0; n<3 ;n++){
      if (arrayA[n]!=arrayB[n]){
        return false;
      }
     }

     return true;
}

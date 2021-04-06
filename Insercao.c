#include <stdio.h>
#include <stdlib.h>
//----------------------Insertion----------------------------
void insertion(int *a, int n){
  int j, i, chave;

  for(j = 1; j<n; j++){
      chave = a[j];
        i = j - 1;
      
          while(i>=0 && a[i] >= chave){
              a[i+1] =a[i];
              i = i-1; 
          }
      a[i+1] = chave;
  }
}

//----------------------Selection ----------------------------

void selection( int *a, int n){
    int i, j, m, aux;
    for(j = 0; j < n -1; j++){
        m = j;

      for( i = j+1; i < n; i++){
          if(a[i]< a[m])
            m = i;
      }
    aux = a[j];
    aux = a[m];
    a[m]= aux;
    }
}
//---------------------Main Principal-------------------------
int main( int argc, char * argv[]){
  int *a = malloc( sizeof(int)*10);
  int i = 0;

    for(i = 0;i < 10;i++){
      a[i]=10 - i;

      printf("Antes.:");
          for(i = 0;i < 10;i++){
            printf("%d", a[i]);
            selection (a,10);
      
      printf(" Depois.:");
          for(i = 0;i < 10;i++){
            printf("%d", a[i]);
            printf("\n");

      free(a);
            return 0;
      }
    }
  }
}

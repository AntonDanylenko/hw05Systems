/*int mystrlen( char *s){
  int ans = 0;
  while(*s){
    ans++;
    s++;
  }
  return ans;
}

char * mystrncat( char *dest, char *source, int n){
  char* ans = dest;
  int x = n;
  while(*dest)
    dest++;
  while(x){
    *dest = *source;
    dest++;
    source++;
    x--;
  }
  dest++;
  *dest = 0;
  return ans;
}*/

char * mystrcpy( char *dest, char *source ){
  for (int i=0; i<sizeof(source); i++){
    *dest = *source;
    dest++;
    source++;
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  int ans = 0;
  while(*s1){
    ans = ans + *s1 - *s2;
    *s1++;
    *s2++;
  }
  return ans;
}

int main (){
  int msgid = -1;
  int res = 0;
  if(msgid < 1)
    res++;
  if(msgid < 1UL)
    res++;
  return res;
}

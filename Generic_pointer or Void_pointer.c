int main()
{
  int a[]={10,20,30,40};

    void *p;
    p=a;
    printf("void conversion :%d",*(int *)p);//void used to (int *) type conversion can be use.


  return 0;
}

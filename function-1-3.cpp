void copia(int old_array[],int new_array[],int length)
{
for(int i=0;i<length;i++)
{
*(new_array+i)=*(old_array+i);
}
}

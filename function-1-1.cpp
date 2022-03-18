int sum_min_and_max(int integers[],int length)
{
if(length<1)return -1;
int max_integers(int integers[],int length);
int min_integers(int integers[],int length);
return max_integers(integers,length)+min_integers(integers,length);
}

int max_integers(int integers[],int length)
{
if(length<1)return -1;
int ma=integers[0];
for(int i=0;i<length;i++)
{
if(ma<integers[i])
ma=integers[i];
}
return ma;
}



int min_integers(int integers[],int length)
{
if(length<1)return -1;
int mi=integers[0];
for(int i=0;i<length;i++)
{
if(mi>integers[i])
mi=integers[i];
}
return mi;
}

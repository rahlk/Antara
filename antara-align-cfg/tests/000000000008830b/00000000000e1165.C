int checkext(int a[],int n){
    int flag=0;
    for(int i=0;i<26;i++){
        if(a[i]==n)
        flag=1;
    }
    if(flag)
    return 0;
    else
    return 1;
}
void QuickSort(int array[],int start,int end)
{
 int index=start,i,pivot=array[end],temp;
 if(start<end)
 {
  for(i=start;i<end;i++)
  {
   if(array[i]<=pivot)
   {
    temp=array[i];
    array[i]=array[index];
    array[index]=temp;
    index++;
   }
  }
  temp=array[index];
  array[index]=array[end];
  array[end]=temp;
  QuickSort(array,start,index-1);
     QuickSort(array,index+1,end);
 }


}

#include<stdio.h>
int main(){
char alph[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int t,t1,N,l,a,b,c,d,e,f,g,h,key,keyindex;
scanf("%d",&t);
t1=t;
while(t--){
scanf("%d %d",&N,&l);
int arr[26],arr2[l+1];
scanf("%d",&a);
for(int i=3;i<a/2;i++){
if(a%i==0){
b=i;
break;}}
c=a/b;
scanf("%d",&d);
if(d%b==0){        // first no. factor b,c second no. e,f
e=b;
arr2[0]=c;}
else
{e=c;
arr2[0]=b;}
f=d/e;
arr2[1]=e;arr2[2]=f;
for(int i=3;i<=l;i++){
scanf("%d",&g);
arr2[i]=g/arr2[i-1];}
h=0;
for(int i=0;i<=l;i++){
if(checkext(arr,arr2[i])){
arr[h]=arr2[i];
h++;}}
QuickSort(arr,0,25);
printf("Case #%d: ",t1-t);
for(int i=0;i<l+1;i++){
key=arr2[i];
for(int j=0;j<26;j++){
if(arr[j]==key)
keyindex=j;}
printf("%c",alph[keyindex]);}
printf("\n");}
return 0;}



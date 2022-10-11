#include<iostream.h>                 	bv
#include<conio.h>                         e
void main()
{
int mat[3][3];
int i, j;
clrscr();
cout<<"enter elements of matrix\n";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
cin>>mat[i][j];
}
}
cout<<"row array\n";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
cout<<mat[i][j];
cklout<<"row["<<j+1<<"]"<<endl;
}
}
cout<<"\n";
cout<<"column array\n";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
cout<<mat[j][i];
cout<<"column ["<<j+1<<"]"<<endl;
}
}
getch()
}
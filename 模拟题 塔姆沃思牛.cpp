#include<bits/stdc++.h>
using namespace std;
int a[4]={-1,0,1,0},b[4]={0,1,0,-1},fx,fy,cx,cy,book[12][12][12][12][4][4],ans,i,j;
char s[12][12];
int main()
{
	for(int i=1;i<=10;i++)
	for(int j=1;j<=10;j++){
		cin>>s[i][j];
		if(s[i][j]=='C')cx=i,cy=j;
		if(s[i][j]=='F')fx=i,fy=j;
	}
	book[fx][fy][cx][cy][0][0]=1;
	while(1){
		if(cx==fx&&fy==cy){
			cout<<ans;
			return 0;
		}
		if(cx+a[i]>=1&&cy+b[i]>=1&&cx+a[i]<=10&&cy+b[i]<=10&&s[cx+a[i]][cy+b[i]]!='*'){//ţ��Լ�������Ƿ�����ǰ��
			cx+=a[i];
			cy+=b[i];
		}
		else{//����������ת��
			if(i==3)i=0;
			else i++;
		}
		if(fx+a[j]>=1&&fy+b[j]>=1&&fx+a[j]<=10&&fy+b[j]<=10&&s[fx+a[j]][fy+b[j]]!='*'){
			fx+=a[j];fy+=b[j];
		}
		else{
			if(j==3)j=0;
			else j++;
		}
		if(book[fx][fy][cx][cy][j][i]){//��һά�͵ڶ�άΪԼ�������꣬������άΪţ�����꣬5,6�ֱ�ΪԼ����ţ�ķ���
			cout<<0;return 0;
		}
		book[fx][fy][cx][cy][j][i]=1;ans++;
	}
	 
}
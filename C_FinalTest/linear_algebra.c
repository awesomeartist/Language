#include "stdafx.h"
#include <string.h>
#include <math.h>

float a[11][9][9]={0};
char an[11][10]={0};
int xy[11];
int mode;

int inversion(int num){
	int i,j,t=0,n[10]={0};
	for(i=10,num*=10;num/=10;){
		n[--i]=num%10;
	}
	for(j=-1;++j-10;){if(j+i<10) n[j]=n[j+i];else n[j]=0;}
	for(i=-1;n[++i];) for(j=i;n[++j];) 
		if(n[i]>n[j]) t++;
	return (t%2)?-1:1;
}

int code(int len,int times,int pass)
{
	int i,j=0,o[10]={pass},t=0,cd,v=0;
	if((pass<=len)*pass) v++;
	for(o[1]=0;o[1]++<len+v;t=0){
		if(o[1]==o[0]) continue;cd=o[1];
		for(o[2]=0;o[2]++<len+v;t=0){
			if(len==1) {if(j++==times) goto end;break;}
			if((o[2]==o[1])+(o[2]==o[0])) continue;
			cd=o[1]*10+o[2];
			for(o[3]=0;o[3]++<len+v;t=0){
				if(len==2) {if(j++==times) goto end;break;}
				for(i=-1;++i-3;) if(o[3]==o[i]) t++;if(t) continue;
				for(i=0,cd=0;++i-4;) cd+=o[i]*pow(10.0,3-i);
				for(o[4]=0;o[4]++<len+v;t=0){
					if(len==3) {if(j++==times) goto end;break;};
					for(i=-1;++i-4;) if(o[4]==o[i]) t++;if(t) continue;
					for(i=0,cd=0;++i-5;) cd+=o[i]*pow(10.0,4-i);
					for(o[5]=0;o[5]++<len+v;t=0){
						if(len==4) {if(j++==times) goto end;break;}
						for(i=-1;++i-5;) if(o[5]==o[i]) t++;if(t) continue;
						for(i=0,cd=0;++i-6;) cd+=o[i]*pow(10.0,5-i);
						for(o[6]=0;o[6]++<len+v;t=0){
							if(len==5) {if(j++==times) goto end;break;}
							for(i=-1;++i-6;) if(o[6]==o[i]) t++;if(t) continue;
							for(i=0,cd=0;++i-7;) cd+=o[i]*pow(10.0,6-i);
							for(o[7]=0;o[7]++<len+v;t=0){
								if(len==6) {if(j++==times) goto end;break;}
								for(i=-1;++i-7;) if(o[7]==o[i]) t++;if(t) continue;
								for(i=0,cd=0;++i-8;) cd+=o[i]*pow(10.0,7-i);
								for(o[8]=0;o[8]++<len+v;t=0){
									if(len==7) {if(j++==times) goto end;break;}
									for(i=-1;++i-8;) if(o[8]==o[i]) t++;if(t) continue;
									for(i=0,cd=0;++i-9;) cd+=o[i]*pow(10.0,8-i);
									for(o[9]=0;o[9]++<len+v;t=0){
										if(len==8) {if(j++==times) goto end;break;}
										for(i=-1;++i-9;) if(o[9]==o[i]) t++;if(t) continue;
										for(i=0,cd=0;++i-10;) cd+=o[i]*pow(10.0,9-i);
										if(j++==times) goto end;break;
	}}}}}}}}}end:;
	return cd;
}

float cul(float d[9][9],int x,int y,int order){
	int i,j,k=0,cd,v=0,numo[]={0,1,2,6,24,120,720,5040,40320,362880},test;
	float sum=0,tem=1;cd=code(order,k,y);
	if(((x>order+1)+(x==0)+(y>order+1)+(y==0))==1) goto error;
	for(i=-1;++i<numo[order];sum+=tem*inversion(cd),tem=1,v=0,k++,cd=code(order,k,y))
		for(j=-1;++j<order+v;) {
			if(!(j-x+1)){v++;continue;}
			tem*=d[j][test=cd/(int)pow(10.0,order-j+v-1)%10-1];
		}
	error:;
	return sum;
}

void p1(char b[],int p,int x,int y,int h)
{
	int i=0,j=0,n,m=0,t=1;
	for(i=-1;++i<9;) for(j=-1;++j<9;) a[h][i][j]=0;n=p;
	if(b[n+1]=='-') {n++;t=-1;}
	for(i=0,j=0;b[++n]*(i-x);){
		if((b[n]>='0')*(b[n]<='9')){
			if(!m) a[h][i][j]=a[h][i][j]*10+b[n]-'0';
			else a[h][i][j]+=(b[n]-'0')*pow(.1,m++);
		}
		else if(b[n]==',') {a[h][i][j]*=t;i+=++j/y;j%=y;m=0;t=1;if(b[n+1]=='-'){n++;t=-1;}}
		else if(b[n]=='.') {if(!m) m=1;else goto error;}
		else goto error;
	}a[h][i][j]*=t;
	for(i=-1;++i<x;){
		for(j=-1;++j<y;){
			printf("%-5.2f  ",a[h][i][j]);
		}putchar('\n');
	}goto right;
error:;
	printf("数值输入有误\n");an[n][0]=0;
right:;
}

void p2(char b[],int p,int n){
	int i,j=0,t,x,y,m=0,op=0,num=0,f=0,order=0;
	float det=0;
	char st[11]={0};float c[9][9]={0};
	if(!b[0]) mode=0;
	for(i=p;b[++i]*mode;){
		if(!m){
			if(((b[i]>='a')*(b[i]<='z'))+(b[i]>='A')*(b[i]<='Z')) {st[j++]=b[i];if(!b[i+1]) goto fuzhi;}
			else if(!j) {mode=0;break;}
			else {fuzhi:;for(j=-1;(++j-10)*(strcmp(st,an[j])););if(j==10){mode=0;break;}xy[n]=xy[j];st[0]=0;
			for(x=-1;++x<xy[j]/10;) for(y=-1;++y<xy[j]%10;) 
				a[n][x][y]=a[j][x][y];m=1;
			}
		}
		if(m==1){
			switch(b[i]){
			case '+':op=1;break;
			case '-':op=2;break;
			case '*':op=3;break;
			case '!':op=4;break;
			case '?':op=5;break;
			case '&':op=6;break;
			}m=2;
		}
		else if(m==2){
			if((b[i]>='A')*(b[i]<='Z')+(b[i]>='a')*(b[i]<='z')) {m=3;j=0;}
			else if((b[i]>='0')*(b[i]<='9')+(b[i]=='.')){t=1;m=4;} else if(b[i]=='-'){t=-1;m=4;}
		}
		if(m==3){
			if(!((b[i]>='A')*(b[i]<='Z')+(b[i]>='a')*(b[i]<='z'))){mode=0;st[0]=0;break;}
			st[j++]=b[i];
		}
		if(m==4){
			if(b[i]=='-') t=-1;
			else if((b[i]>='0')*(b[i]<='9')){
				if(!f) num=num*10+b[i]-'0';
				else num+=pow(.1,f++);
			}
			else if(b[i]=='.'){
				if(!f) f=1;else {mode=0;num=0;break;}
			}else{mode=0;num=0;break;}
		}
	}
	if(num) num*=t;
	if(st[0]){st[j]=0;for(j=-1;(++j-10)*(strcmp(st,an[j])););if(j==10) mode=0;}
	if(mode){
	switch(op){
	case 0:if(num+st[0])mode=0;break;
	case 1:if(num+!st[0]){mode=0;break;}
		   if(xy[n]-xy[j]){mode=4;break;}
		   for(x=-1;++x<xy[n]/10;)for(y=-1;++y<xy[n]%10;) a[n][x][y]+=a[j][x][y];break;
	case 2:if(num+!st[0]){mode=0;break;}break;
		   if(xy[n]-xy[j]){mode=4;break;}
		   for(x=-1;++x<xy[n]/10;)for(y=-1;++y<xy[n]%10;) a[n][x][y]-=a[j][x][y];break;
	case 3:if(num*st[0]+!num*!st[0]){mode=0;break;}
		   if(num){for(x=-1;++x<xy[j]/10;) for(y=-1;++y<xy[j]%10;) a[n][x][y]*=num;}
		   if(st[0]){
			   if(xy[n]%10-xy[j]/10){mode=4;break;}
			   for(x=-1;++x<xy[n]/10;) for(y=-1;++y<xy[j]%10;) for(i=-1;++i<xy[n]%10;)
				   c[x][y]+=a[n][x][i]*a[j][i][y];
			   xy[n]=(xy[n]/10*10+xy[j]%10)%100;
			   for(x=-1;++x<xy[n]/10;) for(y=-1;++y<xy[n]%10;) a[n][x][y]=c[x][y];
		   }break;
	case 4:if(num+st[0]+(xy[n]/10!=xy[n]%10)){mode=0;break;}
		   order=xy[j]/10;det=cul(a[j],0,0,order);
		   if(!det){mode=0;break;}
		   for(x=-1;++x<order;) for(y=-1;++y<order;) a[n][y][x]=cul(a[j],x+1,y+1,order-1)*pow(-1.0,x+y)/det;break;
	case 5:if(num+st[0]){mode=0;break;}
		   for(x=-1;++x<9;)for(y=x;++y<9;)
				{t=a[n][x][y];a[n][x][y]=a[n][y][x];a[n][y][x]=t;}
		   xy[n]=(xy[n]*10+xy[n]/10)%100;m=10;break;
	case 6:if(num+st[0]+(xy[n]/10!=xy[n]%10)){mode=0;break;}
		   order=xy[j]/10;det=cul(a[j],0,0,order);
		   printf("det=%.2f\n",det);goto endline;
	}}
	switch(mode){
	case 0:an[n][0]=0;printf("无法识别的格式\n");break;
	case 2:for(x=-1;++x<xy[n]/10;){for(y=-1;++y<xy[n]%10;) printf("%-5.2f  ",a[n][x][y]);putchar('\n');}break;
	case 4:printf("矩阵类型不匹配\n");break;
	}
	endline:;
}

void anl1(char b[],int p)
{
	int i,m=0,x=0,y=0,n;
	for(i=-1;++i<10;)
		if(!an[i][0]+!strcmp(an[i],"")){n=i;break;}
	for(i=-1;(++i-p)*(mode);){
		if(!(((b[i]>='a')*(b[i]<='z'))+(b[i]>='A')*(b[i]<='Z')+(b[i]=='(')+(b[i]==')')+(b[i]==',')+(b[i]>'0')*(b[i]<='9'))) {mode=0;break;}
		switch(m){
		case 0:if(((b[i]>='a')*(b[i]<='z'))+(b[i]>='A')*(b[i]<='Z')) an[n][i]=b[i];
			   else if(b[i]=='(') {m=1;an[n][i]=0;}
			   else mode=0;break;
		case 1:if((b[i]>'0')*(b[i]<='9'))x+=10*x+b[i]-'0';
			   else if(b[i]==',') m=2;
			   else mode=0;break;
		case 2:if((b[i]>'0')*(b[i]<='9'))y+=10*y+b[i]-'0';
			   else if(b[i]==')') m=3;
			   else mode=0;break;
		case 3:mode=0;break;
		}
	}
	if((m-3)*m) mode=0;
	if(!mode) an[n][0]=0;
	else for(i=p;b[++i];){
		if(m) if(((b[i]<'0')+(b[i]>'9'))*(b[i]-',')*(b[i]-'.')*(b[i]-'-'))
		{mode=0;break;}
		if(!m) mode=2;
	}
	if(!mode) an[n][0]=0;
	else xy[n]=10*x+y;
	switch(mode){
	case 0:printf("无法识别的格式\n");break;
	case 1:p1(b,p,x,y,n);break;
	case 2:p2(b,p,n);break;
	}
}

void anl(char b[])
{
	int i,p=0,m=0,x=0,y=0,n;mode=3;
	for(i=-1;b[++i];){
		if(mode!=3){if(b[i]=='=') {mode=0;break;}}
		else{
			if(b[i]=='=') {if(!i) break;mode=1;p=i;}
			else if(!((b[i]-'?')*(b[i]-'!')*(b[i]-'*')*(b[i]-'+')*(b[i]-'-'))) mode=2;
		}
		if(b[i]==' '){mode=0;break;}
	}if(mode==3)mode=2;
	switch(mode){
	case 0:printf("无法识别的格式\n");break;
	case 1:anl1(b,p);break;
	case 2:p2(b,-1,10);break;
	}
}

void pt(){
	printf("以下为目录\n");
	printf("**********************\n");
	printf("a(x,y)=n1,n2,n3,n4,n5  >>>>>  输入赋值\n");
	printf("b=a  >>>>>  计算赋值\n");
	printf("a!   >>>>>  求逆\n");
	printf("a&   >>>>>  求值\n");
	printf("a?   >>>>>  转置\n");
	printf("a*3  >>>>>  数乘\n");
	printf("a*b  >>>>>  矩阵乘法\n");
	printf("a    >>>>>  显示\n");
	printf("exit >>>>>  退出\n");
	printf("请开始你的表演\n");
	printf("**********************\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	pt();
	char tem[100];printf(">>");gets(tem);
	while(strcmp(tem,"exit")){
		if(!strcmp(tem,"menu")) pt();
		else anl(tem);
		printf(">>");
		gets(tem);
	}
	return 0;
}

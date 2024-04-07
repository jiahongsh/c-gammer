#include<bits/stdc++.h>

using namespace std;
int ans;
int a[100];
int vis[20239999]; 
bool check(int x){
   if(vis[x]==1)return false;
   int mm=x/100%100;
   int dd=x%100;

   if(mm<1||mm>12)return false;
   if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
   	   if(dd>=1&&dd<=31)return true;
   }else if(mm==2){
   	   if(dd>=1&&dd<=28)return true;
   }else{
   	   if(dd>=1&&dd<=30)return true;
   }
   return false;
}
void dfs(int x,int pos,int date){
	if(x==100)return;
	
	if(pos==8){
		vis[date]=1;
		if(check(date)==true)ans++;
		return;
	}
	
	if(pos==0&&a[x]==2 ||
	   pos==1&&a[x]==0 ||
	   pos==2&&a[x]==2 ||
	   pos==3&&a[x]==3 ||
	   pos==4&&a[x]>=0&&a[x]<=1||
	   pos==5&&a[x]>=0&&a[x]<=9||
	   pos==6&&a[x]>=0&&a[x]<=3||
	   pos==7&&a[x]>=0&&a[x]<=9)
	  dfs(x+1,pos+1,date*10+a[x]);//Âú×ãÌõ¼ş
	  
	  dfs(x+1,pos,date); 
}
int main(){
	
	
    for(int i=0;i<100;i++)cin>>a[i];
    	dfs(0,0,0);
	
	return 0;
}

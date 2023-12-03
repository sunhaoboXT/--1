#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

string pagein[17][10][10]={};//分别是:类别 页码 项目
int pagemode=1;//指向类别

void setup(){
  string pagein[1][0][0]="软件名称1";
  string pagein[1][0][1]="软件名称2";
  string pagein[1][0][2]="软件名称3";
  string pagein[1][0][3]="软件名称4";
  string pagein[1][0][4]="软件名称5";
  string pagein[1][0][5]="软件名称6";
  string pagein[1][0][6]="软件名称7";
  string pagein[1][0][7]="软件名称8";
  string pagein[1][0][8]="软件名称9";
  string pagein[1][0][9]="软件名称A";

  string pagein[1][1][0]="软件名称B";
  string pagein[1][1][1]="软件名称C";
  string pagein[1][1][2]="软件名称D";
  string pagein[1][1][3]="软件名称E";
  string pagein[1][1][4]="软件名称F";
  string pagein[1][1][5]="软件名称G";
  string pagein[1][1][6]="软件名称H";
  string pagein[1][1][7]="软件名称I";
  string pagein[1][1][8]="软件名称J";
  string pagein[1][1][9]="软件名称K";
}



void pageview(int x){
  cout<<"appstore v0.9.3\n请不要借着学习的理由将此程序私自发布到 xx软件站 或者 xx之家 等流氓网站\n\n";
  //用于显示该分类下的指定页码内容
  for(int i=0;i<10;i++){
    cout<<pagein[pagemode][x][i]<<endl;
  }
  cout<<"\n\n按下0~9以选择您想要安装的软件";
  //计划:添加一个以'['和']'作为换页的程序,并且实时侦测
}



int main(int argc,char** argv){
  setup();
  pageview(1);
  return 0;
}
  

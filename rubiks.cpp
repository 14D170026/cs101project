#include<simplecpp>

int T[3][3],B[3][3],R[3][3],L[3][3],F[3][3],RE[3][3];

//defining each face of cube as 3x3 matrix


void swap(int &a,int &b,int &c,int &d)
{
    int temp;
    temp=a;
    a=b;
    b=c;
    c=d;
    d=temp;

}
void refresh()
{for(int x=0;x<3;x++){
    for(int y=0;y<3;y++){
        T[x][y]=1;
        B[x][y]=2;
        R[x][y]=3;
        L[x][y]=4;
        F[x][y]=5;
        RE[x][y]=6;

    }
}
}
//function taking input from a user for the face user wants to run
void command(char ch)
{
    if (ch=='x'){
        swap(F[1][0],R[1][0],RE[1][0],L[1][0]);
        swap(F[1][1],R[1][1],RE[1][1],L[1][1]);
        swap(F[1][2],R[1][2],RE[1][2],L[1][2]);


    }
    if (ch=='y'){
        swap(T[1][0],L[2][1],B[1][2],R[0][1]);

        swap(T[1][1],L[1][1],B[1][1],R[1][1]);
        swap(T[1][2],L[0][1],B[1][0],R[2][1]);


    }
    if (ch=='z') {
        swap(F[0][1],T[0][1],RE[2][1],B[0][1]);
        swap(F[1][1],T[1][1],RE[1][1],B[1][1]);
        swap(F[2][1],T[2][1],RE[0][1],B[2][1]);
    }
if(ch=='T')
 {
     swap(T[0][0],T[2][0],T[2][2],T[0][2]);
     swap(T[1][0],T[2][1],T[1][2],T[0][1]);
     swap(F[0][0],R[0][0],RE[0][0],L[0][0]);
     swap(F[0][1],R[0][1],RE[0][1],L[0][1]);
     swap(F[0][2],R[0][2],RE[0][2],L[0][2]);

 };

if(ch=='b')
 {
     swap(B[0][0],B[2][0],B[2][2],B[0][2]);
     swap(B[1][0],B[2][1],B[1][2],B[0][1]);
     swap(F[2][0],L[2][0],RE[2][0],R[2][0]);
     swap(F[2][1],L[2][1],RE[2][1],R[2][1]);
     swap(F[2][2],L[2][2],RE[2][2],R[2][2]);

 }
if(ch=='r')
 {

     swap(R[0][0],R[2][0],R[2][2],R[0][2]);
     swap(R[0][1],R[1][0],R[2][1],R[1][2]);
     swap(F[0][2],B[0][2],RE[2][0],T[0][2]);
     swap(F[1][2],B[1][2],RE[1][0],T[1][2]);
     swap(F[2][2],B[2][2],RE[0][0],T[2][2]);

 }
if(ch=='l')
 {
     swap(L[0][0],L[2][0],L[2][2],L[0][2]);
     swap(L[1][0],L[2][1],L[1][2],L[0][1]);
     swap(T[0][0],RE[2][2],B[0][0],F[0][0]);
     swap(T[1][0],RE[1][2],B[1][0],F[1][0]);
     swap(T[2][0],RE[0][2],B[2][0],F[2][0]);

 }
if(ch=='f')
 {
     swap(F[0][0],F[2][0],F[2][2],F[0][2]);
     swap(F[1][0],F[2][1],F[1][2],F[0][2]);
     swap(T[2][0],L[2][2],B[0][2],R[0][0]);
     swap(T[2][1],L[1][2],B[0][1],R[1][0]);
     swap(T[2][2],L[0][2],B[0][0],R[2][0]);

 }
if(ch=='a')
 {
     swap(RE[0][0],RE[2][0],RE[2][2],RE[0][2]);
     swap(RE[1][0],RE[2][1],RE[1][2],RE[0][2]);
     swap(T[0][2],R[2][2],B[2][0],L[0][0]);
     swap(T[0][1],R[1][2],B[2][1],L[1][0]);
     swap(T[0][0],R[0][2],B[2][2],L[2][0]);


 }
 if(ch=='j')
 {
     refresh();
 }
}

main_program
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            T[i][j]=1;B[i][j]=2;R[i][j]=3;L[i][j]=4;F[i][j]=5;RE[i][j]=6;
        }
    }
    //associating each colour with a number




initCanvas("rubix cube",800,600);//defining the screen as 2D cartesian plane
Text cmd(400,10,"click the given keys below,only clockwise rotation");

    //keys to be used by the user while playing
Text top(50,50,"top");
Text bottom(50,100,"btm");
Text right(50,150,"right");
Text left(750,50,"left");
Text face(750,100,"face");
Text rear(750,150,"rear");
    Text tbm(50,250,"TmB");
    Text lmr(50,300,"LmR");
    Text Frem(50,350,"FmR");
 Text refresh(725,525,"rfrsh");

    //position of the keys on the opening screen

Rectangle top_1(50,50,50,50);
Rectangle bottom_1(50,100,50,50);
Rectangle right_1(50,150,50,50);
Rectangle left_1(750,50,50,50);
Rectangle face_1(750,100,50,50);
Rectangle rear_1(750,150,50,50);
Rectangle tbm_1(50,250,50,50);
    Rectangle lrm_1(50,300,50,50);
    Rectangle frem_1(50,350,50,50);
Rectangle refresh_1(725,525,50,50);

//defines the face of the cube user sees

Text top_2(175,100,"top");
Text bottom_2(375,100,"btm");
Text right_2(575,100,"right");
Text left_2(175,350,"left");
Text face_2(375,350,"face");
Text rear_2(575,350,"rear");

//sets the colour of the cube

Rectangle top1(120,150,50,50);
top1.setColor(COLOR("red"));
top1.setFill(1);
top1.imprint();


    Rectangle top2(175,150,50,50);
    top2.setColor(COLOR("red"));
    top2.setFill(1);
    top2.imprint();

    Rectangle top3(230,150,50,50);
    top3.setColor(COLOR("red"));
    top3.setFill(1);
    top3.imprint();

    Rectangle top4(120,205,50,50);
    top4.setColor(COLOR("red"));
    top4.setFill(1);
    top4.imprint();

    Rectangle top5(175,205,50,50);
    top5.setColor(COLOR("red"));
    top5.setFill(1);
    top5.imprint();

    Rectangle top6(230,205,50,50);
    top6.setColor(COLOR("red"));
    top6.setFill(1);
    top6.imprint();

    Rectangle top7(120,260,50,50);
    top7.setColor(COLOR("red"));
    top7.setFill(1);
    top7.imprint();

    Rectangle top8(175,260,50,50);
    top8.setColor(COLOR("red"));
    top8.setFill(1);
    top8.imprint();

    Rectangle top9(230,260,50,50);
    top9.setColor(COLOR("red"));
    top9.setFill(1);
    top9.imprint();

    Rectangle bottom1(320,150,50,50);
    bottom1.setColor(COLOR("blue"));
    bottom1.setFill(1);
    bottom1.imprint();

    Rectangle bottom2(375,150,50,50);
    bottom2.setColor(COLOR("blue"));
    bottom2.setFill(1);
    bottom2.imprint();

    Rectangle bottom3(430,150,50,50);
    bottom3.setColor(COLOR("blue"));
    bottom3.setFill(1);
    bottom3.imprint();

    Rectangle bottom4(320,205,50,50);
    bottom4.setColor(COLOR("blue"));
    bottom4.setFill(1);
    bottom4.imprint();

    Rectangle bottom5(375,205,50,50);
    bottom5.setColor(COLOR("blue"));
    bottom5.setFill(1);
    bottom5.imprint();

    Rectangle bottom6(430,205,50,50);
    bottom6.setColor(COLOR("blue"));
    bottom6.setFill(1);
    bottom6.imprint();

    Rectangle bottom7(320,260,50,50);
    bottom7.setColor(COLOR("blue"));
    bottom7.setFill(1);
    bottom7.imprint();

    Rectangle bottom8(375,260,50,50);
    bottom8.setColor(COLOR("blue"));
    bottom8.setFill(1);
    bottom8.imprint();

    Rectangle bottom9(430,260,50,50);
    bottom9.setColor(COLOR("blue"));
    bottom9.setFill(1);
    bottom9.imprint();

    Rectangle right1(520,150,50,50);
    right1.setColor(COLOR("yellow"));
    right1.setFill(1);
    right1.imprint();

    Rectangle right2(575,150,50,50);
    right2.setColor(COLOR("yellow"));
    right2.setFill(1);
    right2.imprint();

    Rectangle right3(630,150,50,50);
    right3.setColor(COLOR("yellow"));
    right3.setFill(1);
    right3.imprint();

    Rectangle right4(520,205,50,50);
    right4.setColor(COLOR("yellow"));
    right4.setFill(1);
    right4.imprint();

    Rectangle right5(575,205,50,50);
    right5.setColor(COLOR("yellow"));
    right5.setFill(1);
    right5.imprint();

    Rectangle right6(630,205,50,50);
    right6.setColor(COLOR("yellow"));
    right6.setFill(1);
    right6.imprint();

    Rectangle right7(520,260,50,50);
    right7.setColor(COLOR("yellow"));
    right7.setFill(1);
    right7.imprint();

    Rectangle right8(575,260,50,50);
    right8.setColor(COLOR("yellow"));
    right8.setFill(1);
    right8.imprint();

    Rectangle right9(630,260,50,50);
    right9.setColor(COLOR("yellow"));
    right9.setFill(1);
    right9.imprint();

    Rectangle left1(120,400,50,50);
    left1.setColor(COLOR("green"));
    left1.setFill(1);
    left1.imprint();

    Rectangle left2(175,400,50,50);
    left2.setColor(COLOR("green"));
    left2.setFill(1);
    left2.imprint();

    Rectangle left3(230,400,50,50);
    left3.setColor(COLOR("green"));
    left3.setFill(1);
    left3.imprint();

    Rectangle left4(120,455,50,50);
    left4.setColor(COLOR("green"));
    left4.setFill(1);
    left4.imprint();

    Rectangle left5(175,455,50,50);
    left5.setColor(COLOR("green"));
    left5.setFill(1);
    left5.imprint();

    Rectangle left6(230,455,50,50);
    left6.setColor(COLOR("green"));
    left6.setFill(1);
    left6.imprint();

    Rectangle left7(120,510,50,50);
    left7.setColor(COLOR("green"));
    left7.setFill(1);
    left7.imprint();

    Rectangle left8(175,510,50,50);
    left8.setColor(COLOR("green"));
    left8.setFill(1);
    left8.imprint();

    Rectangle left9(230,510,50,50);
    left9.setColor(COLOR("green"));
    left9.setFill(1);
    left9.imprint();

    Rectangle face1(320,400,50,50);
    face1.setColor(COLOR(170,102,0));
    face1.setFill(1);
    face1.imprint();

    Rectangle face2(375,400,50,50);
    face2.setColor(COLOR(170,102,0));
    face2.setFill(1);
    face2.imprint();

    Rectangle face3(430,400,50,50);
    face3.setColor(COLOR(170,102,0));
    face3.setFill(1);
    face3.imprint();

    Rectangle face4(320,455,50,50);
    face4.setColor(COLOR(170,102,0));
    face4.setFill(1);
    face4.imprint();

    Rectangle face5(375,455,50,50);
    face5.setColor(COLOR(170,102,0));
    face5.setFill(1);
    face5.imprint();

    Rectangle face6(430,455,50,50);
    face6.setColor(COLOR(170,102,0));
    face6.setFill(1);
    face6.imprint();

    Rectangle face7(320,510,50,50);
    face7.setColor(COLOR(170,102,0));
    face7.setFill(1);
    face7.imprint();

    Rectangle face8(375,510,50,50);
    face8.setColor(COLOR(170,102,0));
    face8.setFill(1);
    face8.imprint();

    Rectangle face9(430,510,50,50);
    face9.setColor(COLOR(170,102,0));
    face9.setFill(1);
    face9.imprint();

    Rectangle rear1(520,400,50,50);
    rear1.setColor(COLOR("black"));
    rear1.setFill(1);
    rear1.imprint();

    Rectangle rear2(575,400,50,50);
    rear2.setColor(COLOR("black"));
    rear2.setFill(1);
    rear2.imprint();

    Rectangle rear3(630,400,50,50);
    rear3.setColor(COLOR("black"));
    rear3.setFill(1);
    rear3.imprint();

    Rectangle rear4(520,455,50,50);
    rear4.setColor(COLOR("black"));
    rear4.setFill(1);
    rear4.imprint();

    Rectangle rear5(575,455,50,50);
    rear5.setColor(COLOR("black"));
    rear5.setFill(1);
    rear5.imprint();

    Rectangle rear6(630,455,50,50);
    rear6.setColor(COLOR("black"));
    rear6.setFill(1);
    rear6.imprint();

    Rectangle rear7(520,510,50,50);
    rear7.setColor(COLOR("black"));
    rear7.setFill(1);
    rear7.imprint();

    Rectangle rear8(575,510,50,50);
    rear8.setColor(COLOR("black"));
    rear8.setFill(1);
    rear8.imprint();

    Rectangle rear9(630,510,50,50);
    rear9.setColor(COLOR("black"));
    rear9.setFill(1);
    rear9.imprint();

        //taking input from the user

while(1)
{

int t=getClick();
int x=t/65536,y=t%65536;
if(x>25&&x<75&&y>25&&y<75)
{
command('T');
}
else if(x>25&&x<75&&y>75&&y<125)
{

command('b');
}
else if(x>25&&x<75&&y>125&&y<175)
{
command('r');
}
else if(x>725&&x<775&&y>25&&y<75)
{
command('l');
}
else if(x>725&&x<775&&y>75&&y<125)
{
command('f');
}
else if(x>725&&x<775&&y>125&&y<175)
{
command('a');
}
else if (x>25&&x<75&&y>225&&y<275){
    command('x');
}
else if (x>25&&x<75&&y>275 &&y<325 ){
    command('y');
}
else if(x>25&&x<75&&y>325&&y<375){
    command('z');
}
else if(x>700&&x<750&&y>500&&y<550)
{
    command('j');
}

switch(T[0][0])
    {
            //changes the colour after every roatation by according to  the no. it had
        case 1:top1.setColor(COLOR("red"));top1.setFill(1);top1.imprint();break;
        case 2:top1.setColor(COLOR("blue"));top1.setFill(1);top1.imprint();break;
        case 3:top1.setColor(COLOR("yellow"));top1.setFill(1);top1.imprint();break;
        case 4:top1.setColor(COLOR("green"));top1.setFill(1);top1.imprint();break;
        case 5:top1.setColor(COLOR(170,102,0));top1.setFill(1);top1.imprint();break;
        case 6:top1.setColor(COLOR("black"));top1.setFill(1);top1.imprint();break;
        default:break;

    }
    switch(T[0][1])
    {
        case 1:top2.setColor(COLOR("red"));top2.setFill(1);top2.imprint();break;
        case 2:top2.setColor(COLOR("blue"));top2.setFill(1);top2.imprint();break;
        case 3:top2.setColor(COLOR("yellow"));top2.setFill(1);top2.imprint();break;
        case 4:top2.setColor(COLOR("green"));top2.setFill(1);top2.imprint();break;
        case 5:top2.setColor(COLOR(170,102,0));top2.setFill(1);top2.imprint();break;
        case 6:top2.setColor(COLOR("black"));top2.setFill(1);top2.imprint();break;
        default:break;

    }switch(T[0][2])
    {
        case 1:top3.setColor(COLOR("red"));top3.setFill(1);top3.imprint();break;
        case 2:top3.setColor(COLOR("blue"));top3.setFill(1);top3.imprint();break;
        case 3:top3.setColor(COLOR("yellow"));top3.setFill(1);top3.imprint();break;
        case 4:top3.setColor(COLOR("green"));top3.setFill(1);top3.imprint();break;
        case 5:top3.setColor(COLOR(170,102,0));top3.setFill(1);top3.imprint();break;
        case 6:top3.setColor(COLOR("black"));top3.setFill(1);top3.imprint();break;
        default:break;

    }switch(T[1][0])
    {
        case 1:top4.setColor(COLOR("red"));top4.setFill(1);top4.imprint();break;
        case 2:top4.setColor(COLOR("blue"));top4.setFill(1);top4.imprint();break;
        case 3:top4.setColor(COLOR("yellow"));top4.setFill(1);top4.imprint();break;
        case 4:top4.setColor(COLOR("green"));top4.setFill(1);top4.imprint();break;
        case 5:top4.setColor(COLOR(170,102,0));top4.setFill(1);top4.imprint();break;
        case 6:top4.setColor(COLOR("black"));top4.setFill(1);top4.imprint();break;
        default:break;

    }switch(T[1][1])
    {
        case 1:top5.setColor(COLOR("red"));top5.setFill(1);top5.imprint();break;
        case 2:top5.setColor(COLOR("blue"));top5.setFill(1);top5.imprint();break;
        case 3:top5.setColor(COLOR("yellow"));top5.setFill(1);top5.imprint();break;
        case 4:top5.setColor(COLOR("green"));top5.setFill(1);top5.imprint();break;
        case 5:top5.setColor(COLOR(170,102,0));top5.setFill(1);top5.imprint();break;
        case 6:top5.setColor(COLOR("black"));top5.setFill(1);top5.imprint();break;
        default:break;

    }switch(T[1][2])
    {
        case 1:top6.setColor(COLOR("red"));top6.setFill(1);top6.imprint();break;
        case 2:top6.setColor(COLOR("blue"));top6.setFill(1);top6.imprint();break;
        case 3:top6.setColor(COLOR("yellow"));top6.setFill(1);top6.imprint();break;
        case 4:top6.setColor(COLOR("green"));top6.setFill(1);top6.imprint();break;
        case 5:top6.setColor(COLOR(170,102,0));top6.setFill(1);top6.imprint();break;
        case 6:top6.setColor(COLOR("black"));top6.setFill(1);top6.imprint();break;
        default:break;

    }switch(T[2][0])
    {
        case 1:top7.setColor(COLOR("red"));top7.setFill(1);top7.imprint();break;
        case 2:top7.setColor(COLOR("blue"));top7.setFill(1);top7.imprint();break;
        case 3:top7.setColor(COLOR("yellow"));top7.setFill(1);top7.imprint();break;
        case 4:top7.setColor(COLOR("green"));top7.setFill(1);top7.imprint();break;
        case 5:top7.setColor(COLOR(170,102,0));top7.setFill(1);top7.imprint();break;
        case 6:top7.setColor(COLOR("black"));top7.setFill(1);top7.imprint();break;
        default:break;

    }switch(T[2][1])
    {
        case 1:top8.setColor(COLOR("red"));top8.setFill(1);top8.imprint();break;
        case 2:top8.setColor(COLOR("blue"));top8.setFill(1);top8.imprint();break;
        case 3:top8.setColor(COLOR("yellow"));top8.setFill(1);top8.imprint();break;
        case 4:top8.setColor(COLOR("green"));top8.setFill(1);top8.imprint();break;
        case 5:top8.setColor(COLOR(170,102,0));top8.setFill(1);top8.imprint();break;
        case 6:top8.setColor(COLOR("black"));top8.setFill(1);top8.imprint();break;
        default:break;

    }switch(T[2][2])
    {
        case 1:top9.setColor(COLOR("red"));top9.setFill(1);top9.imprint();break;
        case 2:top9.setColor(COLOR("blue"));top9.setFill(1);top9.imprint();break;
        case 3:top9.setColor(COLOR("yellow"));top9.setFill(1);top9.imprint();break;
        case 4:top9.setColor(COLOR("green"));top9.setFill(1);top9.imprint();break;
        case 5:top9.setColor(COLOR(170,102,0));top9.setFill(1);top9.imprint();break;
        case 6:top9.setColor(COLOR("black"));top9.setFill(1);top9.imprint();break;
        default:break;

    }switch(B[0][0])
    {
        case 1:bottom1.setColor(COLOR("red"));bottom1.setFill(1);bottom1.imprint();break;
        case 2:bottom1.setColor(COLOR("blue"));bottom1.setFill(1);bottom1.imprint();break;
        case 3:bottom1.setColor(COLOR("yellow"));bottom1.setFill(1);bottom1.imprint();break;
        case 4:bottom1.setColor(COLOR("green"));bottom1.setFill(1);bottom1.imprint();break;
        case 5:bottom1.setColor(COLOR(170,102,0));bottom1.setFill(1);bottom1.imprint();break;
        case 6:bottom1.setColor(COLOR("black"));bottom1.setFill(1);bottom1.imprint();break;
        default:break;

    }switch(B[0][1])
    {
        case 1:bottom2.setColor(COLOR("red"));bottom2.setFill(1);bottom2.imprint();break;
        case 2:bottom2.setColor(COLOR("blue"));bottom2.setFill(1);bottom2.imprint();break;
        case 3:bottom2.setColor(COLOR("yellow"));bottom2.setFill(1);bottom2.imprint();break;
        case 4:bottom2.setColor(COLOR("green"));bottom2.setFill(1);bottom2.imprint();break;
        case 5:bottom2.setColor(COLOR(170,102,0));bottom2.setFill(1);bottom2.imprint();break;
        case 6:bottom2.setColor(COLOR("black"));bottom2.setFill(1);bottom2.imprint();break;
        default:break;

    }switch(B[0][2])
    {
        case 1:bottom3.setColor(COLOR("red"));bottom3.setFill(1);bottom3.imprint();break;
        case 2:bottom3.setColor(COLOR("blue"));bottom3.setFill(1);bottom3.imprint();break;
        case 3:bottom3.setColor(COLOR("yellow"));bottom3.setFill(1);bottom3.imprint();break;
        case 4:bottom3.setColor(COLOR("green"));bottom3.setFill(1);bottom3.imprint();break;
        case 5:bottom3.setColor(COLOR(170,102,0));bottom3.setFill(1);bottom3.imprint();break;
        case 6:bottom3.setColor(COLOR("black"));bottom3.setFill(1);bottom3.imprint();break;
        default:break;

    }switch(B[1][0])
    {
        case 1:bottom4.setColor(COLOR("red"));bottom4.setFill(1);bottom4.imprint();break;
        case 2:bottom4.setColor(COLOR("blue"));bottom4.setFill(1);bottom4.imprint();break;
        case 3:bottom4.setColor(COLOR("yellow"));bottom4.setFill(1);bottom4.imprint();break;
        case 4:bottom4.setColor(COLOR("green"));bottom4.setFill(1);bottom4.imprint();break;
        case 5:bottom4.setColor(COLOR(170,102,0));bottom4.setFill(1);bottom4.imprint();break;
        case 6:bottom4.setColor(COLOR("black"));bottom4.setFill(1);bottom4.imprint();break;
        default:break;

    }switch(B[1][1])
    {
        case 1:bottom5.setColor(COLOR("red"));bottom5.setFill(1);bottom5.imprint();break;
        case 2:bottom5.setColor(COLOR("blue"));bottom5.setFill(1);bottom5.imprint();break;
        case 3:bottom5.setColor(COLOR("yellow"));bottom5.setFill(1);bottom5.imprint();break;
        case 4:bottom5.setColor(COLOR("green"));bottom5.setFill(1);bottom5.imprint();break;
        case 5:bottom5.setColor(COLOR(170,102,0));bottom5.setFill(1);bottom5.imprint();break;
        case 6:bottom5.setColor(COLOR("black"));bottom5.setFill(1);bottom5.imprint();break;
        default:break;

    }switch(B[1][2])
    {
        case 1:bottom6.setColor(COLOR("red"));bottom6.setFill(1);bottom6.imprint();break;
        case 2:bottom6.setColor(COLOR("blue"));bottom6.setFill(1);bottom6.imprint();break;
        case 3:bottom6.setColor(COLOR("yellow"));bottom6.setFill(1);bottom6.imprint();break;
        case 4:bottom6.setColor(COLOR("green"));bottom6.setFill(1);bottom6.imprint();break;
        case 5:bottom6.setColor(COLOR(170,102,0));bottom6.setFill(1);bottom6.imprint();break;
        case 6:bottom6.setColor(COLOR("black"));bottom6.setFill(1);bottom6.imprint();break;
        default:break;

    }switch(B[2][0])
    {
        case 1:bottom7.setColor(COLOR("red"));bottom7.setFill(1);bottom7.imprint();break;
        case 2:bottom7.setColor(COLOR("blue"));bottom7.setFill(1);bottom7.imprint();break;
        case 3:bottom7.setColor(COLOR("yellow"));bottom7.setFill(1);bottom7.imprint();break;
        case 4:bottom7.setColor(COLOR("green"));bottom7.setFill(1);bottom7.imprint();break;
        case 5:bottom7.setColor(COLOR(170,102,0));bottom7.setFill(1);bottom7.imprint();break;
        case 6:bottom7.setColor(COLOR("black"));bottom7.setFill(1);bottom7.imprint();break;
        default:break;

    }switch(B[2][1])
    {
        case 1:bottom8.setColor(COLOR("red"));bottom8.setFill(1);bottom8.imprint();break;
        case 2:bottom8.setColor(COLOR("blue"));bottom8.setFill(1);bottom8.imprint();break;
        case 3:bottom8.setColor(COLOR("yellow"));bottom8.setFill(1);bottom8.imprint();break;
        case 4:bottom8.setColor(COLOR("green"));bottom8.setFill(1);bottom8.imprint();break;
        case 5:bottom8.setColor(COLOR(170,102,0));bottom8.setFill(1);bottom8.imprint();break;
        case 6:bottom8.setColor(COLOR("black"));bottom8.setFill(1);bottom8.imprint();break;
        default:break;

    }switch(B[2][2])
    {
        case 1:bottom9.setColor(COLOR("red"));bottom9.setFill(1);bottom9.imprint();break;
        case 2:bottom9.setColor(COLOR("blue"));bottom9.setFill(1);bottom9.imprint();break;
        case 3:bottom9.setColor(COLOR("yellow"));bottom9.setFill(1);bottom9.imprint();break;
        case 4:bottom9.setColor(COLOR("green"));bottom9.setFill(1);bottom9.imprint();break;
        case 5:bottom9.setColor(COLOR(170,102,0));bottom9.setFill(1);bottom9.imprint();break;
        case 6:bottom9.setColor(COLOR("black"));bottom9.setFill(1);bottom9.imprint();break;
        default:break;

    }switch(R[0][0])
    {
        case 1:right1.setColor(COLOR("red"));right1.setFill(1);right1.imprint();break;
        case 2:right1.setColor(COLOR("blue"));right1.setFill(1);right1.imprint();break;
        case 3:right1.setColor(COLOR("yellow"));right1.setFill(1);right1.imprint();break;
        case 4:right1.setColor(COLOR("green"));right1.setFill(1);right1.imprint();break;
        case 5:right1.setColor(COLOR(170,102,0));right1.setFill(1);right1.imprint();break;
        case 6:right1.setColor(COLOR("black"));right1.setFill(1);right1.imprint();break;
        default:break;

    }switch(R[0][1])
    {
        case 1:right2.setColor(COLOR("red"));right2.setFill(1);right2.imprint();break;
        case 2:right2.setColor(COLOR("blue"));right2.setFill(1);right2.imprint();break;
        case 3:right2.setColor(COLOR("yellow"));right2.setFill(1);right2.imprint();break;
        case 4:right2.setColor(COLOR("green"));right2.setFill(1);right2.imprint();break;
        case 5:right2.setColor(COLOR(170,102,0));right2.setFill(1);right2.imprint();break;
        case 6:right2.setColor(COLOR("black"));right2.setFill(1);right2.imprint();break;
        default:break;

    }switch(R[0][2])
    {
        case 1:right3.setColor(COLOR("red"));right3.setFill(1);right3.imprint();break;
        case 2:right3.setColor(COLOR("blue"));right3.setFill(1);right3.imprint();break;
        case 3:right3.setColor(COLOR("yellow"));right3.setFill(1);right3.imprint();break;
        case 4:right3.setColor(COLOR("green"));right3.setFill(1);right3.imprint();break;
        case 5:right3.setColor(COLOR(170,102,0));right3.setFill(1);right3.imprint();break;
        case 6:right3.setColor(COLOR("black"));right3.setFill(1);right3.imprint();break;
        default:break;

    }switch(R[1][0])
    {
        case 1:right4.setColor(COLOR("red"));right4.setFill(1);right4.imprint();break;
        case 2:right4.setColor(COLOR("blue"));right4.setFill(1);right4.imprint();break;
        case 3:right4.setColor(COLOR("yellow"));right4.setFill(1);right4.imprint();break;
        case 4:right4.setColor(COLOR("green"));right4.setFill(1);right4.imprint();break;
        case 5:right4.setColor(COLOR(170,102,0));right4.setFill(1);right4.imprint();break;
        case 6:right4.setColor(COLOR("black"));right4.setFill(1);right4.imprint();break;
        default:break;

    }switch(R[1][1])
    {
        case 1:right5.setColor(COLOR("red"));right5.setFill(1);right5.imprint();break;
        case 2:right5.setColor(COLOR("blue"));right5.setFill(1);right5.imprint();break;
        case 3:right5.setColor(COLOR("yellow"));right5.setFill(1);right5.imprint();break;
        case 4:right5.setColor(COLOR("green"));right5.setFill(1);right5.imprint();break;
        case 5:right5.setColor(COLOR(170,102,0));right5.setFill(1);right5.imprint();break;
        case 6:right5.setColor(COLOR("black"));right5.setFill(1);right5.imprint();break;
        default:break;

    }switch(R[1][2])
    {
        case 1:right6.setColor(COLOR("red"));right6.setFill(1);right6.imprint();break;
        case 2:right6.setColor(COLOR("blue"));right6.setFill(1);right6.imprint();break;
        case 3:right6.setColor(COLOR("yellow"));right6.setFill(1);right6.imprint();break;
        case 4:right6.setColor(COLOR("green"));right6.setFill(1);right6.imprint();break;
        case 5:right6.setColor(COLOR(170,102,0));right6.setFill(1);right6.imprint();break;
        case 6:right6.setColor(COLOR("black"));right6.setFill(1);right6.imprint();break;
        default:break;

    }switch(R[2][0])
    {
        case 1:right7.setColor(COLOR("red"));right7.setFill(1);right7.imprint();break;
        case 2:right7.setColor(COLOR("blue"));right7.setFill(1);right7.imprint();break;
        case 3:right7.setColor(COLOR("yellow"));right7.setFill(1);right7.imprint();break;
        case 4:right7.setColor(COLOR("green"));right7.setFill(1);right7.imprint();break;
        case 5:right7.setColor(COLOR(170,102,0));right7.setFill(1);right7.imprint();break;
        case 6:right7.setColor(COLOR("black"));right7.setFill(1);right7.imprint();break;
        default:break;

    }switch(R[2][1])
    {
        case 1:right8.setColor(COLOR("red"));right8.setFill(1);right8.imprint();break;
        case 2:right8.setColor(COLOR("blue"));right8.setFill(1);right8.imprint();break;
        case 3:right8.setColor(COLOR("yellow"));right8.setFill(1);right8.imprint();break;
        case 4:right8.setColor(COLOR("green"));right8.setFill(1);right8.imprint();break;
        case 5:right8.setColor(COLOR(170,102,0));right8.setFill(1);right8.imprint();break;
        case 6:right8.setColor(COLOR("black"));right8.setFill(1);right8.imprint();break;
        default:break;

    }switch(R[2][2])
    {
        case 1:right9.setColor(COLOR("red"));right9.setFill(1);right9.imprint();break;
        case 2:right9.setColor(COLOR("blue"));right9.setFill(1);right9.imprint();break;
        case 3:right9.setColor(COLOR("yellow"));right9.setFill(1);right9.imprint();break;
        case 4:right9.setColor(COLOR("green"));right9.setFill(1);right9.imprint();break;
        case 5:right9.setColor(COLOR(170,102,0));right9.setFill(1);right9.imprint();break;
        case 6:right9.setColor(COLOR("black"));right9.setFill(1);right9.imprint();break;
        default:break;

    }switch(L[0][0])
    {
        case 1:left1.setColor(COLOR("red"));left1.setFill(1);left1.imprint();break;
        case 2:left1.setColor(COLOR("blue"));left1.setFill(1);left1.imprint();break;
        case 3:left1.setColor(COLOR("yellow"));left1.setFill(1);left1.imprint();break;
        case 4:left1.setColor(COLOR("green"));left1.setFill(1);left1.imprint();break;
        case 5:left1.setColor(COLOR(170,102,0));left1.setFill(1);left1.imprint();break;
        case 6:left1.setColor(COLOR("black"));left1.setFill(1);left1.imprint();break;
        default:break;

    }switch(L[0][1])
    {
        case 1:left2.setColor(COLOR("red"));left2.setFill(1);left2.imprint();break;
        case 2:left2.setColor(COLOR("blue"));left2.setFill(1);left2.imprint();break;
        case 3:left2.setColor(COLOR("yellow"));left2.setFill(1);left2.imprint();break;
        case 4:left2.setColor(COLOR("green"));left2.setFill(1);left2.imprint();break;
        case 5:left2.setColor(COLOR(170,102,0));left2.setFill(1);left2.imprint();break;
        case 6:left2.setColor(COLOR("black"));left2.setFill(1);left2.imprint();break;
        default:break;

    }switch(L[0][2])
    {
        case 1:left3.setColor(COLOR("red"));left3.setFill(1);left3.imprint();break;
        case 2:left3.setColor(COLOR("blue"));left3.setFill(1);left3.imprint();break;
        case 3:left3.setColor(COLOR("yellow"));left3.setFill(1);left3.imprint();break;
        case 4:left3.setColor(COLOR("green"));left3.setFill(1);left3.imprint();break;
        case 5:left3.setColor(COLOR(170,102,0));left3.setFill(1);left3.imprint();break;
        case 6:left3.setColor(COLOR("black"));left3.setFill(1);left3.imprint();break;
        default:break;

    }switch(L[1][0])
    {
        case 1:left4.setColor(COLOR("red"));left4.setFill(1);left4.imprint();break;
        case 2:left4.setColor(COLOR("blue"));left4.setFill(1);left4.imprint();break;
        case 3:left4.setColor(COLOR("yellow"));left4.setFill(1);left4.imprint();break;
        case 4:left4.setColor(COLOR("green"));left4.setFill(1);left4.imprint();break;
        case 5:left4.setColor(COLOR(170,102,0));left4.setFill(1);left4.imprint();break;
        case 6:left4.setColor(COLOR("black"));left4.setFill(1);left4.imprint();break;
        default:break;

    }switch(L[1][1])
    {
        case 1:left5.setColor(COLOR("red"));left5.setFill(1);left5.imprint();break;
        case 2:left5.setColor(COLOR("blue"));left5.setFill(1);left5.imprint();break;
        case 3:left5.setColor(COLOR("yellow"));left5.setFill(1);left5.imprint();break;
        case 4:left5.setColor(COLOR("green"));left5.setFill(1);left5.imprint();break;
        case 5:left5.setColor(COLOR(170,102,0));left5.setFill(1);left5.imprint();break;
        case 6:left5.setColor(COLOR("black"));left5.setFill(1);left5.imprint();break;
        default:break;

    }switch(L[1][2])
    {
        case 1:left6.setColor(COLOR("red"));left6.setFill(1);left6.imprint();break;
        case 2:left6.setColor(COLOR("blue"));left6.setFill(1);left6.imprint();break;
        case 3:left6.setColor(COLOR("yellow"));left6.setFill(1);left6.imprint();break;
        case 4:left6.setColor(COLOR("green"));left6.setFill(1);left6.imprint();break;
        case 5:left6.setColor(COLOR(170,102,0));left6.setFill(1);left6.imprint();break;
        case 6:left6.setColor(COLOR("black"));left6.setFill(1);left6.imprint();break;
        default:break;

    }switch(L[2][0])
    {
        case 1:left7.setColor(COLOR("red"));left7.setFill(1);left7.imprint();break;
        case 2:left7.setColor(COLOR("blue"));left7.setFill(1);left7.imprint();break;
        case 3:left7.setColor(COLOR("yellow"));left7.setFill(1);left7.imprint();break;
        case 4:left7.setColor(COLOR("green"));left7.setFill(1);left7.imprint();break;
        case 5:left7.setColor(COLOR(170,102,0));left7.setFill(1);left7.imprint();break;
        case 6:left7.setColor(COLOR("black"));left7.setFill(1);left7.imprint();break;
        default:break;

    }switch(L[2][1])
    {
        case 1:left8.setColor(COLOR("red"));left8.setFill(1);left8.imprint();break;
        case 2:left8.setColor(COLOR("blue"));left8.setFill(1);left8.imprint();break;
        case 3:left8.setColor(COLOR("yellow"));left8.setFill(1);left8.imprint();break;
        case 4:left8.setColor(COLOR("green"));left8.setFill(1);left8.imprint();break;
        case 5:left8.setColor(COLOR(170,102,0));left8.setFill(1);left8.imprint();break;
        case 6:left8.setColor(COLOR("black"));left8.setFill(1);left8.imprint();break;
        default:break;

    }switch(L[2][2])
    {
        case 1:left9.setColor(COLOR("red"));left9.setFill(1);left9.imprint();break;
        case 2:left9.setColor(COLOR("blue"));left9.setFill(1);left9.imprint();break;
        case 3:left9.setColor(COLOR("yellow"));left9.setFill(1);left9.imprint();break;
        case 4:left9.setColor(COLOR("green"));left9.setFill(1);left9.imprint();break;
        case 5:left9.setColor(COLOR(170,102,0));left9.setFill(1);left9.imprint();break;
        case 6:left9.setColor(COLOR("black"));left9.setFill(1);left9.imprint();break;
        default:break;

    }switch(F[0][0])
    {
        case 1:face1.setColor(COLOR("red"));face1.setFill(1);face1.imprint();break;
        case 2:face1.setColor(COLOR("blue"));face1.setFill(1);face1.imprint();break;
        case 3:face1.setColor(COLOR("yellow"));face1.setFill(1);face1.imprint();break;
        case 4:face1.setColor(COLOR("green"));face1.setFill(1);face1.imprint();break;
        case 5:face1.setColor(COLOR(170,102,0));face1.setFill(1);face1.imprint();break;
        case 6:face1.setColor(COLOR("black"));face1.setFill(1);face1.imprint();break;
        default:break;

    }switch(F[0][1])
    {
        case 1:face2.setColor(COLOR("red"));face2.setFill(1);face2.imprint();break;
        case 2:face2.setColor(COLOR("blue"));face2.setFill(1);face2.imprint();break;
        case 3:face2.setColor(COLOR("yellow"));face2.setFill(1);face2.imprint();break;
        case 4:face2.setColor(COLOR("green"));face2.setFill(1);face2.imprint();break;
        case 5:face2.setColor(COLOR(170,102,0));face2.setFill(1);face2.imprint();break;
        case 6:face2.setColor(COLOR("black"));face2.setFill(1);face2.imprint();break;
        default:break;

    }switch(F[0][2])
    {
        case 1:face3.setColor(COLOR("red"));face3.setFill(1);face3.imprint();break;
        case 2:face3.setColor(COLOR("blue"));face3.setFill(1);face3.imprint();break;
        case 3:face3.setColor(COLOR("yellow"));face3.setFill(1);face3.imprint();break;
        case 4:face3.setColor(COLOR("green"));face3.setFill(1);face3.imprint();break;
        case 5:face3.setColor(COLOR(170,102,0));face3.setFill(1);face3.imprint();break;
        case 6:face3.setColor(COLOR("black"));face3.setFill(1);face3.imprint();break;
        default:break;

    }switch(F[1][0])
    {
        case 1:face4.setColor(COLOR("red"));face4.setFill(1);face4.imprint();break;
        case 2:face4.setColor(COLOR("blue"));face4.setFill(1);face4.imprint();break;
        case 3:face4.setColor(COLOR("yellow"));face4.setFill(1);face4.imprint();break;
        case 4:face4.setColor(COLOR("green"));face4.setFill(1);face4.imprint();break;
        case 5:face4.setColor(COLOR(170,102,0));face4.setFill(1);face4.imprint();break;
        case 6:face4.setColor(COLOR("black"));face4.setFill(1);face4.imprint();break;
        default:break;

    }switch(F[1][1])
    {
        case 1:face5.setColor(COLOR("red"));face5.setFill(1);face5.imprint();break;
        case 2:face5.setColor(COLOR("blue"));face5.setFill(1);face5.imprint();break;
        case 3:face5.setColor(COLOR("yellow"));face5.setFill(1);face5.imprint();break;
        case 4:face5.setColor(COLOR("green"));face5.setFill(1);face5.imprint();break;
        case 5:face5.setColor(COLOR(170,102,0));face5.setFill(1);face5.imprint();break;
        case 6:face5.setColor(COLOR("black"));face5.setFill(1);face5.imprint();break;
        default:break;

    }switch(F[1][2])
    {
        case 1:face6.setColor(COLOR("red"));face6.setFill(1);face6.imprint();break;
        case 2:face6.setColor(COLOR("blue"));face6.setFill(1);face6.imprint();break;
        case 3:face6.setColor(COLOR("yellow"));face6.setFill(1);face6.imprint();break;
        case 4:face6.setColor(COLOR("green"));face6.setFill(1);face6.imprint();break;
        case 5:face6.setColor(COLOR(170,102,0));face6.setFill(1);face6.imprint();break;
        case 6:face6.setColor(COLOR("black"));face6.setFill(1);face6.imprint();break;
        default:break;

    }switch(F[2][0])
    {
        case 1:face7.setColor(COLOR("red"));face7.setFill(1);face7.imprint();break;
        case 2:face7.setColor(COLOR("blue"));face7.setFill(1);face7.imprint();break;
        case 3:face7.setColor(COLOR("yellow"));face7.setFill(1);face7.imprint();break;
        case 4:face7.setColor(COLOR("green"));face7.setFill(1);face7.imprint();break;
        case 5:face7.setColor(COLOR(170,102,0));face7.setFill(1);face7.imprint();break;
        case 6:face7.setColor(COLOR("black"));face7.setFill(1);face7.imprint();break;
        default:break;

    }switch(F[2][1])
    {
        case 1:face8.setColor(COLOR("red"));face8.setFill(1);face8.imprint();break;
        case 2:face8.setColor(COLOR("blue"));face8.setFill(1);face8.imprint();break;
        case 3:face8.setColor(COLOR("yellow"));face8.setFill(1);face8.imprint();break;
        case 4:face8.setColor(COLOR("green"));face8.setFill(1);face8.imprint();break;
        case 5:face8.setColor(COLOR(170,102,0));face8.setFill(1);face8.imprint();break;
        case 6:face8.setColor(COLOR("black"));face8.setFill(1);face8.imprint();break;
        default:break;

    }switch(F[2][2])
    {
        case 1:face9.setColor(COLOR("red"));face9.setFill(1);face9.imprint();break;
        case 2:face9.setColor(COLOR("blue"));face9.setFill(1);face9.imprint();break;
        case 3:face9.setColor(COLOR("yellow"));face9.setFill(1);face9.imprint();break;
        case 4:face9.setColor(COLOR("green"));face9.setFill(1);face9.imprint();break;
        case 5:face9.setColor(COLOR(170,102,0));face9.setFill(1);face9.imprint();break;
        case 6:face9.setColor(COLOR("black"));face9.setFill(1);face9.imprint();break;
        default:break;

    }switch(RE[0][0])
    {
        case 1:rear1.setColor(COLOR("red"));rear1.setFill(1);rear1.imprint();break;
        case 2:rear1.setColor(COLOR("blue"));rear1.setFill(1);rear1.imprint();break;
        case 3:rear1.setColor(COLOR("yellow"));rear1.setFill(1);rear1.imprint();break;
        case 4:rear1.setColor(COLOR("green"));rear1.setFill(1);rear1.imprint();break;
        case 5:rear1.setColor(COLOR(170,102,0));rear1.setFill(1);rear1.imprint();break;
        case 6:rear1.setColor(COLOR("black"));rear1.setFill(1);rear1.imprint();break;
        default:break;

    }switch(RE[0][1])
    {
        case 1:rear2.setColor(COLOR("red"));rear2.setFill(1);rear2.imprint();break;
        case 2:rear2.setColor(COLOR("blue"));rear2.setFill(1);rear2.imprint();break;
        case 3:rear2.setColor(COLOR("yellow"));rear2.setFill(1);rear2.imprint();break;
        case 4:rear2.setColor(COLOR("green"));rear2.setFill(1);rear2.imprint();break;
        case 5:rear2.setColor(COLOR(170,102,0));rear2.setFill(1);rear2.imprint();break;
        case 6:rear2.setColor(COLOR("black"));rear2.setFill(1);rear2.imprint();break;
        default:break;

    }switch(RE[0][2])
    {
        case 1:rear3.setColor(COLOR("red"));rear3.setFill(1);rear3.imprint();break;
        case 2:rear3.setColor(COLOR("blue"));rear3.setFill(1);rear3.imprint();break;
        case 3:rear3.setColor(COLOR("yellow"));rear3.setFill(1);rear3.imprint();break;
        case 4:rear3.setColor(COLOR("green"));rear3.setFill(1);rear3.imprint();break;
        case 5:rear3.setColor(COLOR(170,102,0));rear3.setFill(1);rear3.imprint();break;
        case 6:rear3.setColor(COLOR("black"));rear3.setFill(1);rear3.imprint();break;
        default:break;

    }switch(RE[1][0])
    {
        case 1:rear4.setColor(COLOR("red"));rear4.setFill(1);rear4.imprint();break;
        case 2:rear4.setColor(COLOR("blue"));rear4.setFill(1);rear4.imprint();break;
        case 3:rear4.setColor(COLOR("yellow"));rear4.setFill(1);rear4.imprint();break;
        case 4:rear4.setColor(COLOR("green"));rear4.setFill(1);rear4.imprint();break;
        case 5:rear4.setColor(COLOR(170,102,0));rear4.setFill(1);rear4.imprint();break;
        case 6:rear4.setColor(COLOR("black"));rear4.setFill(1);rear4.imprint();break;
        default:break;

    }switch(RE[1][1])
    {
        case 1:rear5.setColor(COLOR("red"));rear5.setFill(1);rear5.imprint();break;
        case 2:rear5.setColor(COLOR("blue"));rear5.setFill(1);rear5.imprint();break;
        case 3:rear5.setColor(COLOR("yellow"));rear5.setFill(1);rear5.imprint();break;
        case 4:rear5.setColor(COLOR("green"));rear5.setFill(1);rear5.imprint();break;
        case 5:rear5.setColor(COLOR(170,102,0));rear5.setFill(1);rear5.imprint();break;
        case 6:rear5.setColor(COLOR("black"));rear5.setFill(1);rear5.imprint();break;
        default:break;

    }switch(RE[1][2])
    {
        case 1:rear6.setColor(COLOR("red"));rear6.setFill(1);rear6.imprint();break;
        case 2:rear6.setColor(COLOR("blue"));rear6.setFill(1);rear6.imprint();break;
        case 3:rear6.setColor(COLOR("yellow"));rear6.setFill(1);rear6.imprint();break;
        case 4:rear6.setColor(COLOR("green"));rear6.setFill(1);rear6.imprint();break;
        case 5:rear6.setColor(COLOR(170,102,0));rear6.setFill(1);rear6.imprint();break;
        case 6:rear6.setColor(COLOR("black"));rear6.setFill(1);rear6.imprint();break;
        default:break;

    }switch(RE[2][0])
    {
        case 1:rear7.setColor(COLOR("red"));rear7.setFill(1);rear7.imprint();break;
        case 2:rear7.setColor(COLOR("blue"));rear7.setFill(1);rear7.imprint();break;
        case 3:rear7.setColor(COLOR("yellow"));rear7.setFill(1);rear7.imprint();break;
        case 4:rear7.setColor(COLOR("green"));rear7.setFill(1);rear7.imprint();;break;
        case 5:rear7.setColor(COLOR(170,102,0));rear7.setFill(1);rear7.imprint();break;
        case 6:rear7.setColor(COLOR("black"));rear7.setFill(1);rear7.imprint();break;
        default:break;

    }switch(RE[2][1])
    {
        case 1:rear8.setColor(COLOR("red"));rear8.setFill(1);rear8.imprint();break;
        case 2:rear8.setColor(COLOR("blue"));rear8.setFill(1);rear8.imprint();break;
        case 3:rear8.setColor(COLOR("yellow"));rear8.setFill(1);rear8.imprint();break;
        case 4:rear8.setColor(COLOR("green"));rear8.setFill(1);rear8.imprint();break;
        case 5:rear8.setColor(COLOR(170,102,0));rear8.setFill(1);rear8.imprint();break;
        case 6:rear8.setColor(COLOR("black"));rear8.setFill(1);rear8.imprint();break;
        default:break;

    }switch(RE[2][2])
    {
        case 1:rear9.setColor(COLOR("red"));rear9.setFill(1);rear9.imprint();break;
        case 2:rear9.setColor(COLOR("blue"));rear9.setFill(1);rear9.imprint();break;
        case 3:rear9.setColor(COLOR("yellow"));rear9.setFill(1);rear9.imprint();break;
        case 4:rear9.setColor(COLOR("green"));rear9.setFill(1);rear9.imprint();break;
        case 5:rear9.setColor(COLOR(170,102,0));rear9.setFill(1);rear9.imprint();break;
        case 6:rear9.setColor(COLOR("black"));rear9.setFill(1);rear9.imprint();break;
        default:break;

    }

    }

wait(1000);

}

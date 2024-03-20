#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int i, j, g, r, c;
int ax, ao, v, l = 200, u = 140, a, b, c=0;
void xt()
{
    settextstyle(0, 0, 4);
    setcolor(WHITE);
    outtextxy(80, 20, "0");
    setcolor(RED);
    outtextxy(20, 20, "X");
}
void ot()
{
    settextstyle(0, 0, 4);
    setcolor(WHITE);
    outtextxy(20, 20, "X");
    setcolor(GREEN);
    outtextxy(80, 20, "0");
}
int win(int a[])
{
    for (i=0;i<3;i++)
    {
        if (a[i]== 1 & a[i+3]== 1 & a[i+6]==1)
        {
            return 1;
        }
        g = 3*i;
        if (a[g]== 1 & a[g+1]==1 & a[g+2]==1)
        {
            return 1;
        }
    }
    if (a[0]==1 & a[4]==1 & a[8]==1)
    {
        return 1;
    }
    if (a[2] == 1 & a[4] == 1 & a[6]==1)
    {
        return 1;
    }
    return 0;
}
void main()
{
    int gd = DETECT, gm, x[9], o[9];
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    settextstyle(0, 0, 4);
    outtextxy(20, 20, "X");
    outtextxy(80, 20, "0");
    rectangle(150, 90, 471, 411); //321 (107)
    setcolor(YELLOW);
    line(257, 90, 257, 411);
    line(364, 90, 364, 411);
    line(150, 197, 471, 197);
    line(150, 304, 471, 304);
    settextstyle(0, 0, 2);
    outtextxy(193, 72, "C1");
    outtextxy(300, 72, "C2");
    outtextxy(407, 72, "C3");
    settextstyle(0, 1, 2);
    outtextxy(147, 120, "R1");
    outtextxy(147, 227, "R2");
    outtextxy(147, 334, "R3");
    setcolor(YELLOW);
    settextstyle(0, 0, 2);
    setcolor(WHITE);
    outtextxy(150, 10, "answer in the form of row");
    outtextxy(150, 27, "and column (without space)");
    printf("\n\n\n\n");
    for (i=0;i<9;i++)
    {
        x[i] = -1;
        o[i] = -1;
    }
    while(c<9)
    {
        //X
        xt();
        scanf("%d", &ax);
        if (ax==100)
        {
            break;
        }
        //v = add(x, ax);
        v = (3*(ax/10 - 1)) + (ax%10 - 1);
        for (i=150;i<300;i++)
        {
            for(j=44;j<70;j++)
            {
                putpixel(i, j, BLACK);
            }
        }
        if (o[v]==1)
        {
            setcolor(WHITE);
            settextstyle(0, 0, 2);
            outtextxy(150, 44, "nope");
        }
        else
        {
            x[v] = 1;
	c+=1;
            setcolor(RED);
            a = v/3; 
            b = v%3; 
            settextstyle(0, 0, 4);
            outtextxy(190+(b*107), 130+(a*107), "X");
        }
        if (win(x)!=0 || win(o)!=0)
        {
            break;
        }
        //0
        ot();
        scanf("%d", &ao);
        if (ao==100)
        {
            break;
        }
        //v = add(o, ao);
        v = (3*(ao/10 - 1)) + (ao%10 - 1);
        if (x[v]==1)
        {
            setcolor(WHITE);
            settextstyle(0, 0, 2);
            outtextxy(150, 44, "nope");
        }
        else
        {
            o[v] = 1;
	c+=1;
            setcolor(GREEN);
            a = v/3;
            b = v%3;
            settextstyle(0, 0, 4);
            outtextxy(190+(b*107), 130+(a*107), "0");
        }        
        if (win(x)!=0 || win(o)!=0)
        {
            break;
        }
    }    
    setcolor(CYAN);
    settextstyle(0, 0, 2.5);
    if (c>=9)
    {
        outtextxy(246, 420, "Tie :0");
    }
    else if (win(x)!=0)
    {
        outtextxy(246, 420, "X won! :D");
    }
    else
    {
        outtextxy(246, 420, "0 won! :D");
    }
    getch();
    closegraph();
}

#include &lt;cstdlib&gt;
#include &lt;iostream&gt;
#include &lt;stdlib.h&gt;
#include &lt;graphics.h&gt;
#include &lt;math.h&gt;
using namespace std;
int main()
{
int gd=DETECT,gm, i,j;
initgraph(&amp;gd,&amp;gm,NULL);
line(20,380,580,380); //platform
line(25,380,35,340); //leftleg
line(45,380,35,340);//right leg
line(35,310,25,330);//left hand
line(35,380,35,340); //leftleg
line(35,310,40,330); //left hand
line(35,340,35,310); //body
circle(35,300,10); //head
line(35,310,50,330); // right hand
line(50,330,50,280); //umbrella stick
line(15,280,85,280); //umbrella right
arc(50,280,180,360,35); //umbrella body
arc(55,330,360,180,5);//umbrella handle
delay(10000);
getch();
return 0;
}


// 2nd


#include &lt;iostream&gt;
#include &lt;stdlib.h&gt;
#include &lt;graphics.h&gt;
#include &lt;math.h&gt;
using namespace std;
int main()
{
int gd=DETECT,gm;
int j,i;
initgraph(&amp;gd,&amp;gm,NULL);
for(i=0;i&lt;500;i=i+5)
{
line(20,380,580,380); //platform
if(i%2==0)
{
line(25+i,380,35+i,340); //leftleg
line(45+i,380,35+i,340);//right leg
line(35+i,310,25+i,330);//left hand
delay(20);
}
else
{
line(35+i,380,35+i,340); //leftleg
line(35+i,310,40+i,330); //left hand
delay(20);
}
line(35+i,340,35+i,310); //body
circle(35+i,300,10); //head
line(35+i,310,50+i,330); // hand
line(50+i,330,50+i,280); //umbrella stick
line(15+i,280,85+i,280); //umbrella right
arc(50+i,280,180,360,35); //umbrella body
arc(55+i,330,360,180,5);//umbrella handle
delay(200);
cleardevice();
}
getch();
return 0;
}

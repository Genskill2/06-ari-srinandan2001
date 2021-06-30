#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include<math.h>
#include<ctype.h>
int main(void)
{
}
    string ari(string);
    string ari(string p)
    {
        int l;
        int i;
        l = strlen(p);
        for (i = 0; p[i]!='\0'; i++)
        {
            float score;
            int c=0;
            int w=0;
            int s=0;
            for(int i=0; p[i]!='\0' ;++i)
            {
                if(isalnum(p[i]))
                    c++;
                if(p[i]==' ')
                    w++;
                if((p[i]=='.') || (p[i]=='!') || (p[i]=='?'))
                    s++;
            }
            score=( 4.71 * (float)c / (float)w) + (0.5 * (float)w /( float)s) - 21.43;
            score=(int) ceil(score);
            if(score==1)
            {
                return "Kindergarten";
            }
            else if(score==2)
            {
                return "First/Second Grade";
            }
            else if(score==3)
            {
                return "Third Grade";
            }
            else if(score==4)
            {
                return "Fourth Grade";
            }
            else if(score==5)
            {
                return "Fifth Grade";
            }
            else if(score==6)
            {
                return "Sixth Grade";
            }
            else if(score==7)
            {
                return "Seventh Grade";
            }
            else if(score==8){
                return "Eighth Grade";
            }
            else if(score==9){
                return "Ninth Grade";
            }
            else if(score==10)
            {
                return "Tenth Grade";
            }
            else if(score==11){
                return "Eleventh Grade";
            }
            else if(score==12)
            {
                return "Twelfth grade";
            }
            else if(score==13)
            {
                return "College student";
            }
            else
            {
                return "Professor";
            }
        }
    }

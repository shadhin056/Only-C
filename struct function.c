#include<stdio.h>

struct my{
int x;
float y;

};
void print (struct my pr)
{
    printf("x = %d\n",pr.x);
    printf("y = %f\n",pr.y);

}
struct my add(struct my a,struct my b)
{
    struct my result;
    result.x = a.x+b.x;
    result.y = a.y+b.y;
    return result;
};
int main()
{
    struct my mem,mem1,sum;
    mem.x=5;
    mem.y=6.6;
    mem1=mem;
    print(mem);
    print(mem1);


    sum = add(mem,mem1);
    printf("sum\n");
    print(sum);
}

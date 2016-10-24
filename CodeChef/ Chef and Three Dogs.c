//https://www.codechef.com/OCT16/problems/CHDOGS/
//Author - Sajal Agrawal
//@sajalagrawal

//https://www.quora.com/There-are-3-points-placed-on-the-vertices-of-an-equilateral-triangle-of-side-A-Each-point-travels-with-a-constant-speed-of-v-directly-to-the-next-point-How-much-time-does-it-take-for-the-three-points-to-meet
#include <stdio.h>
 
int main(void) {
	int t;
    long double ans;
    long long int s,v;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld",&s,&v);
        ans=(2.0*s)/(3.0*v);
        printf("%.9Lf\n",ans);
    }
	return 0;
}  

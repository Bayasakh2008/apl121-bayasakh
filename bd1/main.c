#include <stdio.h>
int main(void) {
    int i,minDay;
    double c,f,minC;
    const char *level,*ClothingTip;
    minC=100;
    minDay=0;
    for(int i=1; i<=7; i++) {
        if(scanf("%lf",&c)!=1) {
            printf("Buruu utga! Too oruulna uu!\n");
            return 1;
        }
        f=c*1.8+32;
        if (c>=0) {
            level="Dulaan" ;
            ClothingTip="Nimgen, hungun huvtsas";
        }
        else if (c>=-15) {
            level="Huiten";
            ClothingTip="Nimgen kurtik";
        }
        else if (c>=-30) {
            level="Mash huiten";
            ClothingTip="Zuzaan kurtik,malgai,oroolt,beelii";
        } else {
            level="Tas huiten";
            ClothingTip="Mash zuzaan huvtsas";
        }
        printf("%d-r udur: %.0fC=%.1fF,%s, %s\n",i,c,f,level,ClothingTip);
        if(c<minC) {
            minC=c;
            minDay=i;
        }
    }
    printf("Hamgiin huiten udur: %d-r udur,%.0fC\n",minDay,minC);
    return 0;
}

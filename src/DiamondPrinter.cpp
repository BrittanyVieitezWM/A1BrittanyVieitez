#include "../include/DiamondPrinter.h",

void printFigure(){

}
void printUpwardTriangle(){
    int stars,k;
    std::cout<<"stars number:";
    std::cin>>stars;
    int row= (stars/2);
    int spacemaker=1;
    while(row!=0){
        if (stars%2!=0){
            std::cout<<" "<<'*';
        }
        for (int i=0;i<stars;i++) {
            std::cout << '*';

        }
        spacemaker+=1;
        row = row - 1;
        stars=stars+2;
        std::cout<<"\n";
        if (spacemaker>1){
            std::cout<<" ";
        }
    }

    printDownwardTriangle();
}
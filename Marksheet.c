//programs to calculate the cp and gp acurred for 28 students according to there marks

#include<stdio.h>
  
struct Students {
    int marks[5];
    int gradepoint[5];
    int creditpoint[5];
};
int main(){
    int i,j;
    int credit[]={3,3,4,4,4};
    struct Students student[28];
    for(i=0;i<28;i++){
        printf("enter mark of student %d (?/50) ;\n",i+1);
        for(j=0;j<5;j++){
            if(j==0){
               printf("eng : ");
               scanf("%d",&student[i].marks[j]);
            }
            else if(j==1){
               printf("mdc : ");
               scanf("%d",&student[i].marks[j]);
            }           
            else if(j==2){
               printf("maths : ");
               scanf("%d",&student[i].marks[j]);
            }            
            else if(j==3){
               printf("cs : ");
               scanf("%d",&student[i].marks[j]);
            }            
            else if(j==4){
               printf("stati : ");
               scanf("%d",&student[i].marks[j]);
            }
        }
    }
    
    for(i=0;i<28;i++){
        for(j=0;j<5;j++){
            if(student[i].marks[j]<=50 && student[i].marks[j] > 45){
                student[i].gradepoint[j]=9;
            }
            else if(student[i].marks[j]<=45 && student[i].marks[j] > 38){
                student[i].gradepoint[j]=8;
            }
            else if(student[i].marks[j]<=38 && student[i].marks[j] > 30){
                student[i].gradepoint[j]=7;
            }           
            else if(student[i].marks[j]<=30 && student[i].marks[j] >= 23){
                student[i].gradepoint[j]=6;
            }
            else if(student[i].marks[j]<23){
                student[i].gradepoint[j]=0;
            }
        }
    }
    for(i=0;i<28;i++){
        for(j=0;j<5;j++){
            student[i].creditpoint[j] = credit[j]*student[i].gradepoint[j]; 
        }
    }
    for(i=0;i<28;i++){
        printf("\n\n\nmarksheet of student %d :\n",i+1);
        for(j=0;j<5;j++){
           if(j==0){
               printf("eng : %d\n",student[i].marks[j]);
               printf("G.P : %d\n",student[i].gradepoint[j]);
               printf("C.P : %d\n",student[i].creditpoint[j]);
               printf("credit : %d\n\n",credit[j]);
            }
            else if(j==1){
               printf("mdc : %d\n",student[i].marks[j]);
               printf("G.P : %d\n",student[i].gradepoint[j]);
               printf("C.P : %d\n",student[i].creditpoint[j]);
               printf("credit : %d\n\n",credit[j]);
            }           
            else if(j==2){
               printf("maths : %d\n",student[i].marks[j]);
               printf("G.P : %d\n",student[i].gradepoint[j]);
               printf("C.P : %d\n",student[i].creditpoint[j]);
               printf("credit : %d\n\n",credit[j]);
            }            
            else if(j==3){
               printf("maths : %d\n",student[i].marks[j]);
               printf("G.P : %d\n",student[i].gradepoint[j]);
               printf("C.P : %d\n",student[i].creditpoint[j]);
               printf("credit : %d\n\n",credit[j]);
            }            
            else if(j==4){
               printf("stati : %d\n",student[i].marks[j]);
               printf("G.P : %d\n",student[i].gradepoint[j]);
               printf("C.P : %d\n",student[i].creditpoint[j]);
               printf("credit : %d\n\n",credit[j]);
            }   
        }
    }
}

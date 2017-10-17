#include "types.h"      
#include "user.h"      

#define STDOUT 1        
#define KIDS 45
#define TIMER 1924436487
int main(){
    int pid;
    int i;

    for (i=0;i<KIDS;i++){
        if(i< 15){
            pid=fork(10);
        }else if(i>=15  &&  i< 30){
            pid=fork(1);
        }else{
            pid=fork(55);
        }if(pid == 0){
            for(i = TIMER;i>0;i--);
            exit();
        }
        
    }
    while(1){
        pid=wait();
        if(pid<0)break;
        printf(STDOUT,"KIDS %d finished\n",pid );      
    }
    
    
    exit();
}
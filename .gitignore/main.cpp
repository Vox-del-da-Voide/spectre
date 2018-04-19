#include <stdio.h>
#include <stdint.h>
#include <gmp.h>
#include <gmpxx.h>
#include <stdarg.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/resource.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std::chrono;
 std::chrono::high_resolution_clock start;
  auto begin=high_resolution_clock::now();
  auto fin=high_resolution_clock::now();
  auto lngth =  std::chrono::duration_cast<std::chrono::nanoseconds>(fin.time_since_epoch()-begin.time_since_epoch()).count();
#define run printf("start event %d\n", num0fEvent);  begin = high_resolution_clock::now();
#define end  fin = high_resolution_clock::now(); lngth = std::chrono::duration_cast<std::chrono::nanoseconds>(fin.time_since_epoch()-begin.time_since_epoch()).count(); printf("event %d took %lld ns\n", num0fEvent, lngth); num0fEvent++;
 int num0fEvent;
 void Voice_del_da_Voide(){
       return;
 }


int main(int argc, char **argv)
{
      num0fEvent=0;
         int x=37, adr, bkp, y;
         uint64_t L=1000;
         uint64_t runUp2=L*L*L;
         int arr[20];
         int tst[10000];
         for(int j=0; j<10000; j++){
	     tst[j]=j;
         }
         for (int i=19; i<30; i++){
          printf("+++…");
          printf("i ==%d\n", i);
	printf("x ==%d\n", arr[i]);
	printf("arr address ==%p\n", &arr[i]);
	if(&x==&arr[i]){
	      adr=i;
	      break;
	}
         }
	printf("x ==%d\n", x);
	printf("x address ==%p\n", &x);
	printf("adr[before] ==%d\n", adr);
	bkp=adr;
	printf("Basic run..\nvoid Voice_del_da_Voide(){\n\
       return;\n\
 }\n+++\nfor (uint64_t m=0; m < runUp2; m++){\n\
	     Voice_del_da_Voide();\n\
         }");
         run
         for (uint64_t m=0; m < runUp2; m++){
	     Voice_del_da_Voide();
         }
         end
         printf("2nd Basic run..\nfor (uint64_t m=0; m < runUp2; m++){\n\
	     continue;\n\
         }");
           run
         for (uint64_t m=0; m < runUp2; m++){
	     continue;
         }
         end
         printf("3rd Basic run..\nfor (uint64_t m=0; m < runUp2; m++){\n\
	     \n\
         }");
           run
         for (uint64_t m=0; m < runUp2; m++){
	     
         }
         end
	run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20){ \n\
	      adr=arr[adr];\n \
	      adr++; \n\
	      adr%=20;\n \
	     } \n\
	}\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20){
	      adr=arr[adr];
	      adr++;
	      adr%=20;
	     }
	}
	end
	adr=bkp;
	run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20){ \n\
	      adr=arr[adr];\n \
	      adr++; \n\
	      } \n\
	}\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20){
	      adr=arr[adr];
	      adr++;
	      }
	}
	end
	adr=bkp;
	run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20) adr=arr[adr];\n \
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) adr=arr[adr];
	     }
	 end
        adr=bkp;
        printf("Put x in the cache..\n");
        for(int k=0; k<10; k++){
	    x=37;
        }    
          run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	f(adr < 20) tst[23]=tst[arr[adr]];\n\
	y=tst[x];\n\
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) tst[23]=tst[arr[adr]];
	y=tst[x];
	     }
	end
	       run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	f(adr < 20) tst[23]=tst[arr[adr]];\n\
	y=tst[arr[adr]];\n\
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) tst[23]=tst[arr[adr]];
	y=tst[arr[adr]];
	     }
	end
	std::cout<<"Force tst[arr[adr]] in the cache..\n";
	for(int l=0; l<10; l++){
	      tst[arr[adr]]=37;
	      arr[adr]=37;
	}
	       run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	f(adr < 20) tst[23]=tst[arr[adr]];\n\
	y=tst[arr[adr==%d]==%d]==%d;\n\
	      }\n", adr, arr[adr], tst[arr[adr]]);
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) tst[23]=tst[arr[adr]];
	y=tst[arr[adr]];
	     }
	end
	       run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	f(adr < 20) tst[23]=tst[arr[adr]];\n\
	y=tst[37];\n\
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) tst[23]=tst[arr[adr]];
	y=tst[37];
	     }
	end
	 run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	f(adr < 20) tst[23]=tst[arr[adr]];\n\
	y=tst[611];\n\
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) tst[23]=tst[arr[adr]];
	y=tst[611];
	     }
	end
          run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	f(adr < 20) tst[23]=tst[arr[adr]];\n\
	y=tst[1019];\n\
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) tst[23]=tst[arr[adr]];
	y=tst[1019];
	     }
	end
	adr=15;
	arr[adr]=adr;
	run
	printf("adr=15; \n\
	arr[adr]=adr; \n\
	");
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20) adr=arr[adr];\n \
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) adr=arr[adr];
	     }
	end
	run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20) adr=arr[15];\n \
	      }\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20) adr=arr[15];
	     }
	end
	run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20){ \n\
	      adr=arr[adr];\n \
	      adr++; \n\
	      adr%=20;\n \
	     } \n\
	}\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20){
	      adr=arr[adr];
	      adr++;
	      adr%=20;
	     }
	}
	end
	run
	printf("for(uint64_t j=0; j<runUp2; j++){ \n\
	if(adr < 20){ \n\
	      adr=arr[13];\n \
	      adr++; \n\
	      adr%=20;\n \
	     } \n\
	}\n");
	for(uint64_t j=0; j<runUp2; j++){
	if(adr < 20){
	      adr=arr[13];
	      adr++;
	      adr%=20;
	     }
	}
	end
	printf("One-time cache hit..\n");
	printf("x=37\n");
	run
	x=37;
	end
	printf("arr[adr]=37\n");
	run
	arr[adr]=37;
	end
	printf("tst[arr[adr]]=37\n");
	run
	tst[arr[adr]]=37;
	end
	printf("tst[37]=37\n");
	run
	tst[37]=37;
	end
	printf("tst[x]=37\n");
	run
	tst[x]=37;
	end
	return 0;
}

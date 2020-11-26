#include<stdio.h>
#include<stdlib.h>

struct sekil {
	int boyut;
};

struct sopa{
	char isim;
	int veri;
	struct sekil *ilk;
	struct sekil *next;
	struct sekil *prev;
};

typedef struct sekil Sekil;

typedef struct sopa Sopa;

void ekle(char _cubukIsim, int _diskBoyut, Sekil*start) ;
void cikar(Sopa* _sopaIsim) ;
void yazdir(Sopa* _sopaIsim) ;

int main(void) {
	
	Sekil  *sekil_1;
	Sekil  *sekil_2;
	Sekil  *sekil_3;
	
	sekil_1->boyut=1;	
	sekil_2->boyut=2;	
	sekil_3->boyut=3;
	
	Sopa *sopa_A;
	Sopa *sopa_B;
	Sopa *sopa_C;
	
	sopa_A-> isim = 'A';
	sopa_A->veri = 0;
		
	sopa_B-> isim = 'B';
	sopa_B-> veri = 0;
    
    sopa_C->isim = 'C';
    sopa_C->veri = 0;
	

	
    //ekle(sopa_A,Sekil,2);

 return 0 ;
}

	
	



void ekle(Sopa * _sopaIsim, Sekil*_sekil, Sekil*start){
	
	
	if((_cubukIsim->veri)==0){
		
		_sopaIsim->ilk = _sekil	;
		(_sopaIsim->next)=NULL;
		(_sopaIsim->prev)=NULL;
		_sopaIsim->veri = veri++ ;
		
	}
	
	else if ((_sopaIsim->veri)==1){
		
		if(((_sopaIsim->ilk)->boyutu) <(_sekil->boyut)){
			printf("kucuk diskin uzerine %d diskini eklemeyezsiniz.",_sekil->boyut);
		}
		
		else{
			_sekil->next = NULL,
			(_sopaIsim->ilk)->next = _sekil ;
			(_sekil->prev) = (_sopaIsim->);
			_sopaIsim->veri = veri++ ;
		}
	}
	
	else{
		Sekil * tutucu = _sopaIsim->ilk ;
		while((tutucu->next)!=NULL){
			tutucu=tutucu->next ;
		}
		tutucu->next = _sekil ;
		(_sekil->prev) = tutucu ;
		_sopaIsim->veri = veri++ ;
	}
	
}


void cikar(Sopa* _sopaIsim){
	Sekil * sekilTut = (_sopaIsim->ilk);
	while((sekilTut->next)!=null){
		sekilTut =  sekilTut->next ;
		
	}
	
	if((_sopaIsim->veri) == 3){
		(sekilTut->prev)->next = NULL ;
		(sekilTut->next) = NULL ;
		(sekilTut->prev) = NULL ;
	}
	
	
	else if((_sopaIsim->veri) == 2) {
		
		(sekilTut->prev)->next = NULL ; 
		sekilTut->next = NULL;
	    sekilTut->prev = NULL;
	    _sopaIsim->veri = veri-1 ;
	
	
	}
	
	
	else{
		_sopaIsim->ilk = NULL ;
		sekilTut->next = NULL ;
		sekilTut->prev = NULL ;
		_sopaIsim->veri  = veri-1 ;
		
		
		
	}
	
	
	
}

void yazdir(){
	
	
	

	
	if((_sopaIsim->veri) == 0){
		printf("\n%c||- 	- 		-",_sopaIsim->isim);
		
	}
	
	else if ((_sopaIsim->veri) == 1){
		printf("\n%c||%d 		- 		-",_sopa_Isim, (_sopaIsim->ilk)->boyut);
		
	}
	
	else if (( _sopaIsim->veri) == 2){
		Sekil *printer =_(sopaIsim->ilk)->next ;
		printf("\n%c||%d 		%d 		-",_sopaIsim->isim, (_sopaIsim->ilk)->boyut,printer->boyut);
	}
	else ((_sopaIsim) == 3){
	
		Sekil *printer =_(sopaIsim->ilk)->next ;
	    printf("\n%c||%d 		%d 		%d",_sopaIsim->isim, (_sopaIsim))
    }
	
}


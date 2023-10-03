//Francisca Laibe, Manuel Paredes, Benjamin Ulloa
#include <stdio.h>
#include <stdlib.h>
void capturar(int NPOKEMON[150], int FPOKEMON[150], int CPOKEMON[150], int PCPOKEMON[150], int d){
    int npokemon,ret,fav;
    system("cls");
	printf("%d\n",d);
    printf("Ingrese el numero del pokemon\n");
    scanf("%d",&npokemon);
    while(npokemon<1||npokemon>151){
    	system("cls");
    	printf("Error 404: Pokemon not found.\nInserte un numero valido\n");
    	scanf("%d",&npokemon);
	}
	NPOKEMON[d]=npokemon;
	if (npokemon==1){
		CPOKEMON[0]=CPOKEMON[0]+3;
		printf("?Haz atrapado un Bulbasaur!\nTienes %d caramelos.\n",CPOKEMON[0]);
	}
    if (npokemon==2){
		CPOKEMON[0]=CPOKEMON[0]+3;
		printf("?Haz atrapado un Ivysaur!\nTienes %d caramelos.\n",CPOKEMON[0]);	
	}
	if (npokemon==3){
		CPOKEMON[0]=CPOKEMON[0]+3;
		printf("?Haz atrapado un Venusaur!\nTienes %d caramelos.\n",CPOKEMON[0]);			
	}
	if (npokemon==4){
		CPOKEMON[1]=CPOKEMON[1]+3;
		printf("?Haz atrapado un Charmander!\nTienes %d caramelos.\n",CPOKEMON[1]);
	}
	if (npokemon==5){
		CPOKEMON[1]=CPOKEMON[1]+3;
		printf("?Haz atrapado un Charmeleon!\nTienes %d caramelos.\n",CPOKEMON[1]);
	}
	if (npokemon==6){
		CPOKEMON[1]=CPOKEMON[1]+3;
		printf("?Haz atrapado un Charizard!\nTienes %d caramelos.\n",CPOKEMON[1]);
	}
	if (npokemon==7){
		CPOKEMON[2]=CPOKEMON[2]+3;
		printf("¡Haz atrapado un Squirtle!\nTienes %d caramelos.\n",CPOKEMON[2]);
	}
	if(npokemon==8){
		CPOKEMON[2]=CPOKEMON[2]+3;
		printf("¡Haz atrapado un Wartortle!\nTienes %d caramelos.\n",CPOKEMON[2]);
	}
	if(npokemon==9){
		CPOKEMON[2]=CPOKEMON[2]+3;
		printf("¡Haz atrapado un Blastoise!\nTienes %d caramelos.\n",CPOKEMON[2]);
	}
	if(npokemon==10){
		CPOKEMON[3]=CPOKEMON[3]+3;
		printf("¡Haz atrapado un Caterpie!\nTienes %d caramelos.\n",CPOKEMON[3]);
		}
	if(npokemon==11){
		CPOKEMON[3]=CPOKEMON[3]+3;
		printf("¡Haz atrapado un Metapod!\nTienes %d caramelos.\n",CPOKEMON[3]);
	}
	if(npokemon==12){
		CPOKEMON[3]=CPOKEMON[3]+3;
		printf("¡Haz atrapado un Butterfree!\nTienes %d caramelos.\n",CPOKEMON[3]);
	}
	if(npokemon==13){
		CPOKEMON[4]=CPOKEMON[4]+3;
		printf("¡Haz atrapado un Weedle!\nTienes %d caramelos.\n",CPOKEMON[4]);
	}
	if(npokemon==14){
		CPOKEMON[4]=CPOKEMON[4]+3;
		printf("¡Haz atrapado un Kakuna!\nTienes %d caramelos.\n",CPOKEMON[4]);
	}
	if(npokemon==15){
		CPOKEMON[4]=CPOKEMON[4]+3;
		printf("¡Haz atrapado un Beedrill!\nTienes %d caramelos.\n",CPOKEMON[4]);
	}
	if(npokemon==16){
		CPOKEMON[5]=CPOKEMON[5]+3;
		printf("¡Haz atrapado un Pidgey!\nTienes %d caramelos.\n",CPOKEMON[5]);
	}
	if(npokemon==17){
		CPOKEMON[5]=CPOKEMON[5]+3;
		printf("¡Haz atrapado un Pidgeotto!\nTienes %d caramelos.\n",CPOKEMON[5]);
	}
	if(npokemon==18){
		CPOKEMON[5]=CPOKEMON[5]+3;
		printf("¡Haz atrapado un Pidgeot!\nTienes %d caramelos.\n",CPOKEMON[5]);
	}
	if(npokemon==19){
		CPOKEMON[6]=CPOKEMON[6]+3;
		printf("¡Haz atrapado un Rattata!\nTienes %d caramelos.\n",CPOKEMON[6]);
	}
		if(npokemon==20){
			CPOKEMON[6]=CPOKEMON[6]+3;
			printf("¡Haz atrapado un Raticate!\nTienes %d caramelos.\n",CPOKEMON[6]);
		}
		if(npokemon==21){
			CPOKEMON[7]=CPOKEMON[7]+3;
			printf("¡Haz atrapado un Spearow!\nTienes %d caramelos.\n",CPOKEMON[7]);
		}
		if(npokemon==22){
			CPOKEMON[7]=CPOKEMON[7]+3;
			printf("¡Haz atrapado un Fearow!\nTienes %d caramelos.\n",CPOKEMON[7]);
		}
		if(npokemon==23){
			CPOKEMON[8]=CPOKEMON[8]+3;
			printf("¡Haz atrapado un Ekans!\nTienes %d caramelos.\n",CPOKEMON[8]);
		}
		if(npokemon==24){
			CPOKEMON[8]=CPOKEMON[8]+3;
			printf("¡Haz atrapado un Arbok!\nTienes %d caramelos.\n",CPOKEMON[8]);
		}
		if(npokemon==25){
			CPOKEMON[9]=CPOKEMON[9]+3;
			printf("¡Haz atrapado un Pikachu!\nTienes %d caramelos.\n",CPOKEMON[9]);
		}
		if(npokemon==26){
			CPOKEMON[9]=CPOKEMON[9]+3;
			printf("¡Haz atrapado un Raichu!\nTienes %d caramelos.\n",CPOKEMON[9]);
		}
		if(npokemon==27){
			CPOKEMON[10]=CPOKEMON[10]+3;
			printf("¡Haz atrapado un Sandshrew!\nTienes %d caramelos.\n",CPOKEMON[10]);
		}
		if(npokemon==28){
			CPOKEMON[10]=CPOKEMON[10]+3;
			printf("¡Haz atrapado un Sandslash!\nTienes %d caramelos.\n",CPOKEMON[10]);
		}
		if(npokemon==29){
			CPOKEMON[11]=CPOKEMON[11]+3;
			printf("¡Haz atrapado un Nidoran Hembra!\nTienes %d caramelos.\n",CPOKEMON[11]);
		}
		if(npokemon==30){
			CPOKEMON[11]=CPOKEMON[11]+3;
			printf("¡Haz atrapado un Nidorina!\nTienes %d caramelos.\n",CPOKEMON[11]);
		}
		if(npokemon==31){
			CPOKEMON[11]=CPOKEMON[11]+3;
			printf("¡Haz atrapado un Nidoqueen!\nTienes %d caramelos.\n",CPOKEMON[11]);
		}
		if(npokemon==32){
			CPOKEMON[12]=CPOKEMON[12]+3;
			printf("¡Haz atrapado un Nidoran Macho!\nTienes %d caramelos.\n",CPOKEMON[12]);
		}
		if(npokemon==33){
			CPOKEMON[12]=CPOKEMON[12]+3;
			printf("¡Haz atrapado un Nidorino!\nTienes %d caramelos.\n",CPOKEMON[12]);
		}
		if(npokemon==34){
			CPOKEMON[12]=CPOKEMON[12]+3;
			printf("¡Haz atrapado un Nidoking!\nTienes %d caramelos.\n",CPOKEMON[12]);
		}
		if(npokemon==35){
			CPOKEMON[13]=CPOKEMON[13]+3;
			printf("¡Haz atrapado un Clefairy!\nTienes %d caramelos.\n",CPOKEMON[13]);
		}
		if(npokemon==36){
			CPOKEMON[13]=CPOKEMON[13]+3;
			printf("¡Haz atrapado un Clefable!\nTienes %d caramelos.\n",CPOKEMON[13]);
		}
		if(npokemon==37){
			CPOKEMON[14]=CPOKEMON[14]+3;
			printf("¡Haz atrapado un Vulpix!\nTienes %d caramelos.\n",CPOKEMON[14]);
		}
		if(npokemon==38){
			CPOKEMON[14]=CPOKEMON[14]+3;
			printf("¡Haz atrapado un Ninetales!\nTienes %d caramelos.\n",CPOKEMON[14]);
		}
		if(npokemon==39){
			CPOKEMON[15]=CPOKEMON[15]+3;
			printf("¡Haz atrapado una Fran!\nTienes %d caramelos.\n",CPOKEMON[15]);
		}
		if(npokemon==40){
			CPOKEMON[15]=CPOKEMON[15]+3;
			printf("¡Haz atrapado un Wigglytuff!\nTienes %d caramelos.\n",CPOKEMON[15]);
		}
		if(npokemon==41){
			CPOKEMON[16]=CPOKEMON[16]+3;
			printf("¡Haz atrapado un Zubat!\nTienes %d caramelos.\n",CPOKEMON[16]);
		}
		if(npokemon==42){
			CPOKEMON[16]=CPOKEMON[16]+3;
			printf("¡Haz atrapado un Golbat!\nTienes %d caramelos.\n",CPOKEMON[16]);
		}
		if(npokemon==43){
			CPOKEMON[17]=CPOKEMON[17]+3;
			printf("¡Haz atrapado un Oddish!\nTienes %d caramelos.\n",CPOKEMON[17]);
		}
		if(npokemon==44){
			CPOKEMON[17]=CPOKEMON[17]+3;
			printf("¡Haz atrapado un Gloom!\nTienes %d caramelos.\n",CPOKEMON[17]);
		}
		if(npokemon==45){
			CPOKEMON[17]=CPOKEMON[17]+3;
			printf("¡Haz atrapado un Vileplume!\nTienes %d caramelos.\n",CPOKEMON[17]);
		}
		if(npokemon==46){
			CPOKEMON[18]=CPOKEMON[18]+3;
			printf("¡Haz atrapado un Paras!\nTienes %d caramelos.\n",CPOKEMON[18]);
		}
		if(npokemon==47){
			CPOKEMON[18]=CPOKEMON[18]+3;
			printf("¡Haz atrapado un Parasect!\nTienes %d caramelos.\n",CPOKEMON[18]);
		}
		if(npokemon==48){
			CPOKEMON[19]=CPOKEMON[19]+3;
			printf("¡Haz atrapado un Venonat!\nTienes %d caramelos.\n",CPOKEMON[19]);
		}
		if(npokemon==49){
			CPOKEMON[19]=CPOKEMON[19]+3;
			printf("¡Haz atrapado un Venomoth!\nTienes %d caramelos.\n",CPOKEMON[19]);
		}
		if(npokemon==50){
			CPOKEMON[20]=CPOKEMON[20]+3;
			printf("¡Haz atrapado un Digglett!\nTienes %d caramelos.\n",CPOKEMON[20]);
		}
		if(npokemon==51){
			CPOKEMON[20]=CPOKEMON[20]+3;
			printf("¡Haz atrapado un Dugtrio!\nTienes %d caramelos.\n",CPOKEMON[20]);
		}
		if(npokemon==52){
			CPOKEMON[21]=CPOKEMON[21]+3;
			printf("¡Haz atrapado un Meowth!\nTienes %d caramelos.\n",CPOKEMON[21]);
		}
		if(npokemon==53){
			CPOKEMON[21]=CPOKEMON[21]+3;
			printf("¡Haz atrapado un Persian!\nTienes %d caramelos.\n",CPOKEMON[21]);
		}
		if(npokemon==54){
			CPOKEMON[22]=CPOKEMON[22]+3;
			printf("¡Haz atrapado un Psyduck!\nTienes %d caramelos.\n",CPOKEMON[22]);
		}
		if(npokemon==55){
			CPOKEMON[22]=CPOKEMON[22]+3;
			printf("¡Haz atrapado un Golduck!\nTienes %d caramelos.\n",CPOKEMON[22]);
		}
		if(npokemon==56){
			CPOKEMON[23]=CPOKEMON[23]+3;
			printf("¡Haz atrapado un Mankey!\nTienes %d caramelos.\n",CPOKEMON[23]);
		}
		if(npokemon==57){
			CPOKEMON[23]=CPOKEMON[23]+3;
			printf("¡Haz atrapado un Primeape!\nTienes %d caramelos.\n",CPOKEMON[23]);
		}
		if(npokemon==58){
			CPOKEMON[24]=CPOKEMON[24]+3;
			printf("¡Haz atrapado un Growlithe!\nTienes %d caramelos.\n",CPOKEMON[24]);
		}
		if(npokemon==59){
			CPOKEMON[24]=CPOKEMON[24]+3;
			printf("¡Haz atrapado un Arcanine!\nTienes %d caramelos.\n",CPOKEMON[24]);
		}
		if(npokemon==60){
			CPOKEMON[25]=CPOKEMON[25]+3;
			printf("¡Haz atrapado un Poliwag!\nTienes %d caramelos.\n",CPOKEMON[25]);
		}
		if(npokemon==61){
			CPOKEMON[25]=CPOKEMON[25]+3;
			printf("¡Haz atrapado un Poliwhirl!\nTienes %d caramelos.\n",CPOKEMON[25]);
		}
		if(npokemon==62){
			CPOKEMON[25]=CPOKEMON[25]+3;
			printf("¡Haz atrapado un Poliwrath!\nTienes %d caramelos.\n",CPOKEMON[25]);
		}
		if(npokemon==63){
			CPOKEMON[26]=CPOKEMON[26]+3;
			printf("¡Haz atrapado un Abra!\nTienes %d caramelos.\n",CPOKEMON[26]);
		}
		if(npokemon==64){
			CPOKEMON[26]=CPOKEMON[26]+3;
			printf("¡Haz atrapado un Kadabra!\nTienes %d caramelos.\n",CPOKEMON[26]);
		}
		if(npokemon==65){
			CPOKEMON[26]=CPOKEMON[26]+3;
			printf("¡Haz atrapado un Alakazam!\nTienes %d caramelos.\n",CPOKEMON[26]);
		}
		if(npokemon==66){
			CPOKEMON[27]=CPOKEMON[27]+3;
			printf("¡Haz atrapado un Machop!\nTienes %d caramelos.\n",CPOKEMON[27]);
		}
		if(npokemon==67){
			CPOKEMON[27]=CPOKEMON[27]+3;
			printf("¡Haz atrapado un Machoke!\nTienes %d caramelos.\n",CPOKEMON[27]);
		}
		if(npokemon==68){
			CPOKEMON[27]=CPOKEMON[27]+3;
			printf("¡Haz atrapado un Machamp!\nTienes %d caramelos.\n",CPOKEMON[27]);
		}
		if(npokemon==69){
			CPOKEMON[28]=CPOKEMON[28]+3;
			printf("¡Haz atrapado un Bellsprout!\nTienes %d caramelos.\n",CPOKEMON[28]);
		}
		if(npokemon==70){
			CPOKEMON[28]=CPOKEMON[28]+3;
			printf("¡Haz atrapado un Weepinbell!\nTienes %d caramelos.\n",CPOKEMON[28]);
		}
		if(npokemon==71){
			CPOKEMON[28]=CPOKEMON[28]+3;
			printf("¡Haz atrapado un Victreebel!\nTienes %d caramelos.\n",CPOKEMON[28]);
		}
		if(npokemon==72){
			CPOKEMON[29]=CPOKEMON[29]+3;
			printf("¡Haz atrapado un Tentacool!\nTienes %d caramelos.\n",CPOKEMON[29]);
		}
		if(npokemon==73){
			CPOKEMON[29]=CPOKEMON[29]+3;
			printf("¡Haz atrapado un Tentacruel!\nTienes %d caramelos.\n",CPOKEMON[29]);
		}
		if(npokemon==74){
			CPOKEMON[30]=CPOKEMON[30]+3;
			printf("¡Haz atrapado un Geodude!\nTienes %d caramelos.\n",CPOKEMON[30]);
		}
		if(npokemon==75){
			CPOKEMON[30]=CPOKEMON[30]+3;
			printf("¡Haz atrapado un Graveler!\nTienes %d caramelos.\n",CPOKEMON[30]);
		}
		if(npokemon==76){
			CPOKEMON[30]=CPOKEMON[30]+3;
			printf("¡Haz atrapado un Golem!\nTienes %d caramelos.\n",CPOKEMON[30]);
		}
		if(npokemon==77){
			CPOKEMON[31]=CPOKEMON[31]+3;
			printf("¡Haz atrapado un Ponyta!\nTienes %d caramelos.\n",CPOKEMON[31]);
		}
		if(npokemon==78){
			CPOKEMON[31]=CPOKEMON[31]+3;
			printf("¡Haz atrapado un Rapidash!\nTienes %d caramelos.\n",CPOKEMON[31]);
		}
		if(npokemon==79){
			CPOKEMON[32]=CPOKEMON[32]+3;
			printf("¡Haz atrapado un Slowpoke!\nTienes %d caramelos.\n",CPOKEMON[32]);
		}
		if(npokemon==80){
			CPOKEMON[32]=CPOKEMON[32]+3;
			printf("¡Haz atrapado un Slowbro!\nTienes %d caramelos.\n",CPOKEMON[32]);
		}
		if(npokemon==81){
			CPOKEMON[33]=CPOKEMON[33]+3;
			printf("¡Haz atrapado un Magnemite!\nTienes %d caramelos.\n",CPOKEMON[33]);
		}
		if(npokemon==82){
			CPOKEMON[33]=CPOKEMON[33]+3;
			printf("¡Haz atrapado un Magneton!\nTienes %d caramelos.\n",CPOKEMON[33]);
		}
		if(npokemon==83){
			CPOKEMON[34]=CPOKEMON[34]+3;
			printf("¡Haz atrapado un Farfetch'd'!\nTienes %d caramelos.\n",CPOKEMON[34]);
		}
		if(npokemon==84){
			CPOKEMON[35]=CPOKEMON[35]+3;
			printf("¡Haz atrapado un Doduo!\nTienes %d caramelos.\n",CPOKEMON[35]);
		}
		if(npokemon==85){
			CPOKEMON[35]=CPOKEMON[35]+3;
			printf("¡Haz atrapado un Dodrio!\nTienes %d caramelos.\n",CPOKEMON[35]);
		}
		if(npokemon==86){
			CPOKEMON[36]=CPOKEMON[36]+3;
			printf("¡Haz atrapado un Seel!\nTienes %d caramelos.\n",CPOKEMON[36]);
		}
		if(npokemon==87){
			CPOKEMON[36]=CPOKEMON[36]+3;
			printf("¡Haz atrapado un Dewgong!\nTienes %d caramelos.\n",CPOKEMON[36]);
		}
		if(npokemon==88){
			CPOKEMON[37]=CPOKEMON[37]+3;
			printf("¡Haz atrapado un Grimer!\nTienes %d caramelos.\n",CPOKEMON[37]);
		}
		if(npokemon==89){
			CPOKEMON[37]=CPOKEMON[37]+3;
			printf("¡Haz atrapado un Muk!\nTienes %d caramelos.\n",CPOKEMON[37]);
		}
		if(npokemon==90){
			CPOKEMON[38]=CPOKEMON[38]+3;
			printf("¡Haz atrapado un Shellder!\nTienes %d caramelos.\n",CPOKEMON[38]);
		}
		if(npokemon==91){
			CPOKEMON[38]=CPOKEMON[38]+3;
			printf("¡Haz atrapado un Cloyster!\nTienes %d caramelos.\n",CPOKEMON[38]);
		}
		if(npokemon==92){
			CPOKEMON[39]=CPOKEMON[39]+3;
			printf("¡Haz atrapado un Gastly!\nTienes %d caramelos.\n",CPOKEMON[39]);
		}
		if(npokemon==93){
			CPOKEMON[39]=CPOKEMON[39]+3;
			printf("¡Haz atrapado un Haunter!\nTienes %d caramelos.\n",CPOKEMON[39]);
		}
		if(npokemon==94){
			CPOKEMON[39]=CPOKEMON[39]+3;
			printf("¡Haz atrapado un Gengar!\nTienes %d caramelos.\n",CPOKEMON[39]);
		}
		if(npokemon==95){
			CPOKEMON[40]=CPOKEMON[40]+3;
			printf("¡Haz atrapado un Onix!\nTienes %d caramelos.\n",CPOKEMON[40]);
		}
		if(npokemon==96){
			CPOKEMON[41]=CPOKEMON[41]+3;
			printf("¡Haz atrapado un Drowzee!\nTienes %d caramelos.\n",CPOKEMON[41]);
		}
		if(npokemon==97){
			CPOKEMON[41]=CPOKEMON[41]+3;
			printf("¡Haz atrapado un Hypno!\nTienes %d caramelos.\n",CPOKEMON[41]);
		}
		if(npokemon==98){
			CPOKEMON[42]=CPOKEMON[42]+3;
			printf("¡Haz atrapado un Krabby!\nTienes %d caramelos.\n",CPOKEMON[42]);
		}
		if(npokemon==99){
			CPOKEMON[42]=CPOKEMON[42]+3;
			printf("¡Haz atrapado un Kingler!\nTienes %d caramelos.\n",CPOKEMON[42]);
		}
		if(npokemon==100){
			CPOKEMON[43]=CPOKEMON[43]+3;
			printf("¡Haz atrapado un Voltorb!\nTienes %d caramelos.\n",CPOKEMON[43]);
		}
		if(npokemon==101){
			CPOKEMON[43]=CPOKEMON[43]+3;
			printf("¡Haz atrapado un Electrode!\nTienes %d caramelos.\n",CPOKEMON[43]);
		}
		if(npokemon==102){
			CPOKEMON[44]=CPOKEMON[44]+3;
			printf("¡Haz atrapado un Exeggcute!\nTienes %d caramelos.\n",CPOKEMON[44]);
		}
		if(npokemon==103){
			CPOKEMON[44]=CPOKEMON[44]+3;
			printf("¡Haz atrapado un Exeggutor!\nTienes %d caramelos.\n",CPOKEMON[44]);
		}
		if(npokemon==104){
			CPOKEMON[45]=CPOKEMON[45]+3;
			printf("¡Haz atrapado un Cubone!\nTienes %d caramelos.\n",CPOKEMON[45]);
		}
		if(npokemon==105){
			CPOKEMON[45]=CPOKEMON[45]+3;
			printf("¡Haz atrapado un Marowak!\nTienes %d caramelos.\n",CPOKEMON[45]);
		}
		if(npokemon==106){
			CPOKEMON[46]=CPOKEMON[46]+3;
			printf("¡Haz atrapado un Hitmonlee!\nTienes %d caramelos.\n",CPOKEMON[46]);
		}
		if(npokemon==107){
			CPOKEMON[47]=CPOKEMON[47]+3;
			printf("¡Haz atrapado un Hitmonchan!\nTienes %d caramelos.\n",CPOKEMON[47]);
		}
		if(npokemon==108){
			CPOKEMON[48]=CPOKEMON[48]+3;
			printf("¡Haz atrapado un Lickitung!\nTienes %d caramelos.\n",CPOKEMON[48]);
		}
		if(npokemon==109){
			CPOKEMON[49]=CPOKEMON[49]+3;
			printf("¡Haz atrapado un Koffing!\nTienes %d caramelos.\n",CPOKEMON[49]);
		}
		if(npokemon==110){
			CPOKEMON[49]=CPOKEMON[49]+3;
			printf("¡Haz atrapado un Weezing!\nTienes %d caramelos.\n",CPOKEMON[49]);
		}
		if(npokemon==111){
			CPOKEMON[50]=CPOKEMON[50]+3;
			printf("¡Haz atrapado un Rhyhorn!\nTienes %d caramelos.\n",CPOKEMON[50]);
		}
		if(npokemon==112){
			CPOKEMON[50]=CPOKEMON[50]+3;
			printf("¡Haz atrapado un Rhydon!\nTienes %d caramelos.\n",CPOKEMON[50]);
		}
		if(npokemon==113){
			CPOKEMON[51]=CPOKEMON[51]+3;
			printf("¡Haz atrapado un Chansey!\nTienes %d caramelos.\n",CPOKEMON[51]);
		}
		if(npokemon==114){
			CPOKEMON[52]=CPOKEMON[52]+3;
			printf("¡Haz atrapado un Tangela!\nTienes %d caramelos.\n",CPOKEMON[52]);
		}
		if(npokemon==115){
			CPOKEMON[53]=CPOKEMON[53]+3;
			printf("¡Haz atrapado un Kangaskhan!\nTienes %d caramelos.\n",CPOKEMON[53]);
		}
		if(npokemon==116){
			CPOKEMON[54]=CPOKEMON[54]+3;
			printf("¡Haz atrapado un Horsea!\nTienes %d caramelos.\n",CPOKEMON[54]);
		}
		if(npokemon==117){
			CPOKEMON[54]=CPOKEMON[54]+3;
			printf("¡Haz atrapado un Seadra!\nTienes %d caramelos.\n",CPOKEMON[54]);
		}
		if(npokemon==118){
			CPOKEMON[55]=CPOKEMON[55]+3;
			printf("¡Haz atrapado un Goldeen!\nTienes %d caramelos.\n",CPOKEMON[55]);
		}
		if(npokemon==119){
			CPOKEMON[55]=CPOKEMON[55]+3;
			printf("¡Haz atrapado un Seaking!\nTienes %d caramelos.\n",CPOKEMON[55]);
		}
		if(npokemon==120){
			CPOKEMON[56]=CPOKEMON[56]+3;
			printf("¡Haz atrapado un Staryu!\nTienes %d caramelos.\n",CPOKEMON[56]);
		}
		if(npokemon==121){
			CPOKEMON[56]=CPOKEMON[56]+3;
			printf("¡Haz atrapado un Starmie!\nTienes %d caramelos.\n",CPOKEMON[56]);
		}
		if(npokemon==122){
			CPOKEMON[57]=CPOKEMON[57]+3;
			printf("¡Haz atrapado un Mr. Mime!\nTienes %d caramelos.\n",CPOKEMON[57]);
		}
		if(npokemon==123){
			CPOKEMON[58]=CPOKEMON[58]+3;
			printf("¡Haz atrapado un Scyther!\nTienes %d caramelos.\n",CPOKEMON[58]);
		}
		if(npokemon==124){
			CPOKEMON[59]=CPOKEMON[59]+3;
			printf("¡Haz atrapado un Jynx!\nTienes %d caramelos.\n",CPOKEMON[59]);
		}
		if(npokemon==125){
			CPOKEMON[60]=CPOKEMON[60]+3;
			printf("¡Haz atrapado un Electabuzz!\nTienes %d caramelos.\n",CPOKEMON[60]);
		}
		if(npokemon==126){
			CPOKEMON[61]=CPOKEMON[61]+3;
			printf("¡Haz atrapado un Magmar!\nTienes %d caramelos.\n",CPOKEMON[61]);
		}
		if(npokemon==127){
			CPOKEMON[62]=CPOKEMON[62]+3;
			printf("¡Haz atrapado un Pinsir!\nTienes %d caramelos.\n",CPOKEMON[62]);
		}
		if(npokemon==128){
			CPOKEMON[63]=CPOKEMON[63]+3;
			printf("¡Haz atrapado un Tauros!\nTienes %d caramelos.\n",CPOKEMON[63]);
		}
		if(npokemon==129){
			CPOKEMON[64]=CPOKEMON[64]+3;
			printf("¡Haz atrapado un Magikarp!\nTienes %d caramelos.\n",CPOKEMON[64]);
		}
		if(npokemon==130){
			CPOKEMON[64]=CPOKEMON[64]+3;
			printf("¡Haz atrapado un Gyarados!\nTienes %d caramelos.\n",CPOKEMON[64]);
		}
		if(npokemon==131){
			CPOKEMON[65]=CPOKEMON[65]+3;
			printf("¡Haz atrapado un Lapras!\nTienes %d caramelos.\n",CPOKEMON[65]);
		}
		if(npokemon==132){
			CPOKEMON[66]=CPOKEMON[66]+3;
			printf("¡Haz atrapado un Ditto!\nTienes %d caramelos.\n",CPOKEMON[66]);
		}
		if(npokemon==133){
			CPOKEMON[67]=CPOKEMON[67]+3;
			printf("¡Haz atrapado un Eevee!\nTienes %d caramelos.\n",CPOKEMON[67]);
		}
		if(npokemon==134){
			CPOKEMON[67]=CPOKEMON[67]+3;
			printf("¡Haz atrapado un Vaporeon!\nTienes %d caramelos.\n",CPOKEMON[67]);
		}
		if(npokemon==135){
			CPOKEMON[67]=CPOKEMON[67]+3;
			printf("¡Haz atrapado un Jolteon!\nTienes %d caramelos.\n",CPOKEMON[67]);
		}
		if(npokemon==136){
			CPOKEMON[67]=CPOKEMON[67]+3;
			printf("¡Haz atrapado un Flareon!\nTienes %d caramelos.\n",CPOKEMON[67]);
		}
		if(npokemon==137){
			CPOKEMON[68]=CPOKEMON[68]+3;
			printf("¡Haz atrapado un Porygon!\nTienes %d caramelos.\n",CPOKEMON[68]);
		}
		if(npokemon==138){
			CPOKEMON[69]=CPOKEMON[69]+3;
			printf("¡Haz atrapado un Omanyte!\nTienes %d caramelos.\n",CPOKEMON[69]);
		}
		if(npokemon==139){
			CPOKEMON[69]=CPOKEMON[69]+3;
			printf("¡Haz atrapado un Omastar!\nTienes %d caramelos.\n",CPOKEMON[69]);
		}
		if(npokemon==140){
			CPOKEMON[70]=CPOKEMON[70]+3;
			printf("¡Haz atrapado un Kabuto!\nTienes %d caramelos.\n",CPOKEMON[70]);
		}
		if(npokemon==141){
			CPOKEMON[70]=CPOKEMON[70]+3;
		printf("¡Haz atrapado un Kabutops!\nTienes %d caramelos.\n",CPOKEMON[70]);
	}
	if(npokemon==142){
		CPOKEMON[71]=CPOKEMON[71]+3;
		printf("¡Haz atrapado un Aerodactyl!\nTienes %d caramelos.\n",CPOKEMON[71]);
	}
	if(npokemon==143){
		CPOKEMON[72]=CPOKEMON[72]+3;
		printf("¡Haz atrapado un Snorlax!\nTienes %d caramelos.\n",CPOKEMON[72]);
	}
	if(npokemon==144){
		CPOKEMON[73]=CPOKEMON[73]+3;
		printf("¡Haz atrapado un Articuno!\nTienes %d caramelos.\n",CPOKEMON[73]);
	}
	if(npokemon==145){
		CPOKEMON[74]=CPOKEMON[74]+3;
		printf("¡Haz atrapado un Zapdos!\nTienes %d caramelos.\n",CPOKEMON[74]);
		}
	if(npokemon==146){
		CPOKEMON[75]=CPOKEMON[75]+3;
		printf("¡Haz atrapado un Moltres!\nTienes %d caramelos.\n",CPOKEMON[75]);
		}
	if(npokemon==147){
		CPOKEMON[76]=CPOKEMON[76]+3;
		printf("¡Haz atrapado un Dratini!\nTienes %d caramelos.\n",CPOKEMON[76]);
		}
	if(npokemon==148){
		CPOKEMON[76]=CPOKEMON[76]+3;
		printf("¡Haz atrapado un Dragonair!\nTienes %d caramelos.\n",CPOKEMON[76]);
		}
	if(npokemon==149){
		CPOKEMON[76]=CPOKEMON[76]+3;
		printf("¡Haz atrapado un Dragonite!\nTienes %d caramelos.\n",CPOKEMON[76]);
		}
	if(npokemon==150){
		CPOKEMON[77]=CPOKEMON[77]+3;
		printf("¡Haz atrapado un Mewtwo!\nTienes %d caramelos.\n",CPOKEMON[77]);
		}
	if(npokemon==151){
		CPOKEMON[78]=CPOKEMON[78]+3;
		printf("¡Haz atrapado un Mew!\nTienes %d caramelos.\n",CPOKEMON[78]);
	}	
	
    printf("Ingrese los PC:\n");
    scanf("%d",&PCPOKEMON[d]);
    while(PCPOKEMON[d]<1){
    	printf("Error 404: PC erroneos\nInserte los PC:\n");
    	scanf("%d",&PCPOKEMON[d]);
	}
    printf("¿Desea añadirlo a favoritos?\n1.-Si.\n2.-No.\n");
	scanf("%d",&fav);
	while(fav<1||fav>2){
		system("cls");
		printf("Error 404: Opcion not found. Ingrese 1 o 2.\n¿Desea añadirlo a favoritos?\n1.-Si.\n2.-No.\n");
		scanf("%d",&fav);
	}
	if(fav==1){
	    FPOKEMON[d]=NPOKEMON[d];
	}
	if(fav==2){
		FPOKEMON[d]=0;
	}
	printf("Presione cualquier tecla para volver al menu\n");
	system("pause");
}
void aumentar_pc(int PCPOKEMON[150], int CPOKEMON[150], int NPOKEMON[150]){
    int h,i,ret;
    do{
    	system("cls");
    printf("Los Pokemon atrapados hasta el momento son:\n");
	for(i=0;i<150;i++){
		if(NPOKEMON[i]>0){
		     printf("%d.-NUMERO DEL POKEMON: %d. PC: %d.\n",i+1,NPOKEMON[i],PCPOKEMON[i]);
		}
	}
    printf("Inserte el indice del pokemon\n");
    scanf("%d",&h);
	h--;
	while(h<0||h>150||NPOKEMON[h]==0){
		printf("Error 404: Pokemon not foud.\nInserte el indice del pokemon\n");
		scanf("%d",&h);
		h--;
	}
    if(NPOKEMON[h]==1||NPOKEMON[h]==2||NPOKEMON[h]==3){
		if(CPOKEMON[0]>4){
			PCPOKEMON[h]=PCPOKEMON[h]+20;
			CPOKEMON[0]=CPOKEMON[0]-5;
			printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[0]);
		}else{
			printf("No tienes caramelos suficientes.\n");
		}
				
	}
	if(NPOKEMON[h]==4||NPOKEMON[h]==5||NPOKEMON[h]==6){
		if(CPOKEMON[1]>4){
			PCPOKEMON[h]=PCPOKEMON[h]+20;
			CPOKEMON[1]=CPOKEMON[1]-5;
			printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[1]);
		}else{
			printf("No tienes caramelos suficientes.\n");
		}
				
	}
		if(NPOKEMON[h]==7||NPOKEMON[h]==8||NPOKEMON[h]==9){
				if(CPOKEMON[2]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[2]=CPOKEMON[2]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[2]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
				
			}
			if(NPOKEMON[h]==10||NPOKEMON[h]==11||NPOKEMON[h]==12){
				if(CPOKEMON[3]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[3]=CPOKEMON[3]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[3]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==13||NPOKEMON[h]==14||NPOKEMON[h]==15){
				if(CPOKEMON[4]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[4]=CPOKEMON[4]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[4]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==16||NPOKEMON[h]==17||NPOKEMON[h]==18){
				if(CPOKEMON[5]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[5]=CPOKEMON[5]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[5]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==19||NPOKEMON[h]==20){
				if(CPOKEMON[6]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[6]=CPOKEMON[6]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[6]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==21||NPOKEMON[h]==22){
				if(CPOKEMON[7]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[7]=CPOKEMON[7]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[7]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==23||NPOKEMON[h]==24){
				if(CPOKEMON[8]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[8]=CPOKEMON[8]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[8]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==25||NPOKEMON[h]==26){
				if(CPOKEMON[9]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[9]=CPOKEMON[9]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[9]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==27||NPOKEMON[h]==28){
				if(CPOKEMON[10]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[10]=CPOKEMON[10]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[10]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==29||NPOKEMON[h]==30||NPOKEMON[h]==31){
				if(CPOKEMON[11]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[11]=CPOKEMON[11]-5;;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[11]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==32||NPOKEMON[h]==33||NPOKEMON[h]==34){
				if(CPOKEMON[12]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[12]=CPOKEMON[12]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[12]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==35||NPOKEMON[h]==36){
				if(CPOKEMON[13]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[13]=CPOKEMON[13]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[13]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==37||NPOKEMON[h]==38){
				if(CPOKEMON[14]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[14]=CPOKEMON[14]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[14]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==39||NPOKEMON[h]==40){
				if(CPOKEMON[15]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[15]=CPOKEMON[15]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[15]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==41||NPOKEMON[h]==42){
				if(CPOKEMON[16]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[16]=CPOKEMON[16]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[16]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==43||NPOKEMON[h]==44||NPOKEMON[h]==45){
				if(CPOKEMON[17]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[17]=CPOKEMON[17]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[17]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==46||NPOKEMON[h]==47){
				if(CPOKEMON[18]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[18]=CPOKEMON[18]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[18]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==48||NPOKEMON[h]==49){
				if(CPOKEMON[19]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[19]=CPOKEMON[19]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[19]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==50||NPOKEMON[h]==51){
				if(CPOKEMON[20]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[20]=CPOKEMON[20]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[20]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==52||NPOKEMON[h]==53){
				if(CPOKEMON[21]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[21]=CPOKEMON[21]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[21]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==54||NPOKEMON[h]==55){
				if(CPOKEMON[22]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[22]=CPOKEMON[22]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[22]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==56||NPOKEMON[h]==57){
				if(CPOKEMON[23]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[23]=CPOKEMON[23]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[23]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==58||NPOKEMON[h]==59){
				if(CPOKEMON[24]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[24]=CPOKEMON[24]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[24]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==60||NPOKEMON[h]==61||NPOKEMON[h]==62){
				if(CPOKEMON[25]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[25]=CPOKEMON[25]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[25]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==63||NPOKEMON[h]==64||NPOKEMON[h]==65){
				if(CPOKEMON[26]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[26]=CPOKEMON[26]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[26]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==66||NPOKEMON[h]==67||NPOKEMON[h]==68){
				if(CPOKEMON[27]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[27]=CPOKEMON[27]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[27]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==69||NPOKEMON[h]==70||NPOKEMON[h]==71){
				if(CPOKEMON[28]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[28]=CPOKEMON[28]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[28]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==72||NPOKEMON[h]==73){
				if(CPOKEMON[29]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[29]=CPOKEMON[29]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[29]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==74||NPOKEMON[h]==75||NPOKEMON[h]==76){
				if(CPOKEMON[30]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[30]=CPOKEMON[30]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[30]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==77||NPOKEMON[h]==78){
				if(CPOKEMON[31]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[31]=CPOKEMON[31]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[31]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==79||NPOKEMON[h]==80){
				if(CPOKEMON[32]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[32]=CPOKEMON[32]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[32]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==81||NPOKEMON[h]==82){
				if(CPOKEMON[33]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[33]=CPOKEMON[33]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[33]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==83){
				if(CPOKEMON[34]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[34]=CPOKEMON[34]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[34]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==84||NPOKEMON[h]==85){
				if(CPOKEMON[35]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[35]=CPOKEMON[35]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[35]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==86||NPOKEMON[h]==87){
				if(CPOKEMON[36]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[36]=CPOKEMON[36]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[36]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==88||NPOKEMON[h]==89){
				if(CPOKEMON[37]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[37]=CPOKEMON[37]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[37]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==90||NPOKEMON[h]==91){
				if(CPOKEMON[38]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[38]=CPOKEMON[38]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[38]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==92||NPOKEMON[h]==93||NPOKEMON[h]==94){
				if(CPOKEMON[39]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[39]=CPOKEMON[39]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[39]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==95){
				if(CPOKEMON[40]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[40]=CPOKEMON[40]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[40]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==96||NPOKEMON[h]==97){
				if(CPOKEMON[41]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[41]=CPOKEMON[41]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[41]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==98||NPOKEMON[h]==99){
				if(CPOKEMON[42]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[42]=CPOKEMON[42]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[42]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==100||NPOKEMON[h]==101){
				if(CPOKEMON[43]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[43]=CPOKEMON[43]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[43]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==102||NPOKEMON[h]==103){
				if(CPOKEMON[44]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[44]=CPOKEMON[44]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[44]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==104||NPOKEMON[h]==105){
				if(CPOKEMON[45]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[45]=CPOKEMON[45]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[45]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==106){
				if(CPOKEMON[46]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[46]=CPOKEMON[46]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[46]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==107){
				if(CPOKEMON[47]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[47]=CPOKEMON[47]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[47]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==108){
				if(CPOKEMON[48]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[48]=CPOKEMON[48]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[48]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==109||NPOKEMON[h]==110){
				if(CPOKEMON[49]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[49]=CPOKEMON[49]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[49]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==111||NPOKEMON[h]==112){
				if(CPOKEMON[50]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[50]=CPOKEMON[50]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[50]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==113){
				if(CPOKEMON[51]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[51]=CPOKEMON[51]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[51]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==114){
				if(CPOKEMON[52]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[52]=CPOKEMON[52]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[52]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==115){
				if(CPOKEMON[53]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[53]=CPOKEMON[53]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[53]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==116||NPOKEMON[h]==117){
				if(CPOKEMON[54]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[54]=CPOKEMON[54]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[54]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==118||NPOKEMON[h]==119){
				if(CPOKEMON[55]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[55]=CPOKEMON[55]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[55]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==120||NPOKEMON[h]==121){
				if(CPOKEMON[56]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[56]=CPOKEMON[56]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[56]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==122){
				if(CPOKEMON[57]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[57]=CPOKEMON[57]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[57]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==123){
				if(CPOKEMON[58]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[58]=CPOKEMON[58]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[58]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==124){
				if(CPOKEMON[59]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[59]=CPOKEMON[59]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[59]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==125){
				if(CPOKEMON[60]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[60]=CPOKEMON[60]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[60]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==126){
				if(CPOKEMON[61]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[61]=CPOKEMON[61]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[61]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==127){
				if(CPOKEMON[62]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[62]=CPOKEMON[62]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[62]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==128){
				if(CPOKEMON[63]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[63]=CPOKEMON[63]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[63]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==129||NPOKEMON[h]==130){
				if(CPOKEMON[64]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[64]=CPOKEMON[64]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[64]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==131){
				if(CPOKEMON[65]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[65]=CPOKEMON[65]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[65]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==132){
				if(CPOKEMON[66]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[66]=CPOKEMON[66]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[66]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==133||NPOKEMON[h]==134||NPOKEMON[h]==135||NPOKEMON[h]==136){
				if(CPOKEMON[67]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[67]=CPOKEMON[67]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[67]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==137){
				if(CPOKEMON[68]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[68]=CPOKEMON[68]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[68]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==138||NPOKEMON[h]==139){
				if(CPOKEMON[69]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[69]=CPOKEMON[69]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[69]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==140||NPOKEMON[h]==141){
				if(CPOKEMON[70]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[70]=CPOKEMON[70]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[70]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==142){
				if(CPOKEMON[71]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[71]=CPOKEMON[71]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[71]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==143){
				if(CPOKEMON[72]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[72]=CPOKEMON[72]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[72]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==144){
				if(CPOKEMON[73]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[73]=CPOKEMON[73]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[73]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==145){
				if(CPOKEMON[74]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[74]=CPOKEMON[74]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[74]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==146){
				if(CPOKEMON[75]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[75]=CPOKEMON[75]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[75]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==147||NPOKEMON[h]==148||NPOKEMON[h]==149){
				if(CPOKEMON[76]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[76]=CPOKEMON[76]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[76]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==150){
				if(CPOKEMON[77]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[77]=CPOKEMON[77]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[77]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
			if(NPOKEMON[h]==151){
				if(CPOKEMON[78]>4){
					PCPOKEMON[h]=PCPOKEMON[h]+20;
					CPOKEMON[78]=CPOKEMON[78]-5;
					printf("Los PC de tu pokemon han aumentado en 20. Actualmente: %d. Te quedan %d caramelos.\n",PCPOKEMON[h],CPOKEMON[78]);
				}else{
					printf("No tienes caramelos suficientes.\n");
				}
			}
    printf("Desea volver al menu?\n1.-Sí\n2.-No.\n");
    scanf("%d",&ret);
}while(ret!=1);
}
void evolucionar(int PCPOKEMON[150], int CPOKEMON[150], int NPOKEMON[150], int FPOKEMON[150]){
	int num,dado,ret,i;
	do{
		system("cls");
		srand(time(NULL));
	    dado=1+rand() %3;
	    printf("Los Pokemon atrapados son:(Inserte el indice del pokemon, el numero de mas a la izquierda).\n");
	    for(i=0;i<150;i++){
	    	if(NPOKEMON[i]>0){
	    		printf("%d.-NUMERO DEL POKEMON: %d. PC: %d.\n",i+1,NPOKEMON[i],PCPOKEMON[i]);
			}
		}
		printf("¿Que pokemon desea evolucionar?\n");
		scanf("%d",&num);
		num=num-1;
		while(num<0||num>151){
			printf("Error 404: Pokemon not found.\n¿Que pokemon desea evolucionar?\n\n");
			scanf("%d",&num);
			num=num-1;
		}
		if(NPOKEMON[num]==3||NPOKEMON[num]==6||NPOKEMON[num]==9||NPOKEMON[num]==12||NPOKEMON[num]==15||NPOKEMON[num]==18||NPOKEMON[num]==20||NPOKEMON[num]==22||NPOKEMON[num]==24||NPOKEMON[num]==26||NPOKEMON[num]==28||NPOKEMON[num]==31||NPOKEMON[num]==34||NPOKEMON[num]==36||NPOKEMON[num]==38||NPOKEMON[num]==40||NPOKEMON[num]==42||NPOKEMON[num]==45||NPOKEMON[num]==47||NPOKEMON[num]==49||NPOKEMON[num]==51||NPOKEMON[num]==53||NPOKEMON[num]==55||NPOKEMON[num]==57||NPOKEMON[num]==59||NPOKEMON[num]==62||NPOKEMON[num]==65||NPOKEMON[num]==68||NPOKEMON[num]==71||NPOKEMON[num]==73||NPOKEMON[num]==76||NPOKEMON[num]==78||NPOKEMON[num]==80||NPOKEMON[num]==82||NPOKEMON[num]==83||NPOKEMON[num]==85||NPOKEMON[num]==87||NPOKEMON[num]==89||NPOKEMON[num]==91||NPOKEMON[num]==94||NPOKEMON[num]==95||NPOKEMON[num]==97||NPOKEMON[num]==99||NPOKEMON[num]==101||NPOKEMON[num]==103||NPOKEMON[num]==105||NPOKEMON[num]==106||NPOKEMON[num]==107||NPOKEMON[num]==108||NPOKEMON[num]==110||NPOKEMON[num]==112||NPOKEMON[num]==113||NPOKEMON[num]==114||NPOKEMON[num]==115||NPOKEMON[num]==117||NPOKEMON[num]==119||NPOKEMON[num]==121||NPOKEMON[num]==122||NPOKEMON[num]==123||NPOKEMON[num]==124||NPOKEMON[num]==125||NPOKEMON[num]==126||NPOKEMON[num]==127||NPOKEMON[num]==128||NPOKEMON[num]==130||NPOKEMON[num]==131||NPOKEMON[num]==132||NPOKEMON[num]==134||NPOKEMON[num]==135||NPOKEMON[num]==136||NPOKEMON[num]==137||NPOKEMON[num]==139||NPOKEMON[num]==141||NPOKEMON[num]==142||NPOKEMON[num]==143||NPOKEMON[num]==144|NPOKEMON[num]==145||NPOKEMON[num]==146||NPOKEMON[num]==149||NPOKEMON[num]==150||NPOKEMON[num]==151){
			printf("Error 404: Evolution not found. (No te adelantes, aún no se descubren ni sus evoluciones ni las mega evoluciones. Estan en una region desconocida... Justo al lado de la nuestra, pero shhh, nadie lo sabe)");
		}
		switch(NPOKEMON[num]){
		case 0:
			printf("No tienes este pokemon atrapado.\n");
			break;
		case 1:
			if(CPOKEMON[0]>49){
				printf("¡Felicidades! Tu Bulbasaur ha evolucionado en un Ivysaur.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[0]=CPOKEMON[0]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]>0){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 2:
			if(CPOKEMON[0]>49){
				printf("¡Felicidades! Tu Ivysaur ha evolucionado en un Venusaur.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[0]=CPOKEMON[0]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes. %d\n",NPOKEMON[num]);
			}
		break;
		case 4:
			if(CPOKEMON[1]>49){
				printf("¡Felicidades! Tu Charmander ha evolucionado en un Charmeleon.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[1]=CPOKEMON[1]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
    	break;
    	case 5:
			if(CPOKEMON[1]>49){
				printf("¡Felicidades! Tu Charmeleon ha evolucionado en un Charizard.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[1]=CPOKEMON[1]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 7:
			if(CPOKEMON[2]>49){
				printf("¡Felicidades! Tu Squirtle ha evolucionado en un Wartortle.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[2]=CPOKEMON[2]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 8:
			if(CPOKEMON[2]>49){
				printf("¡Felicidades! Tu Wartortle ha evolucionado en un Blastoise.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[2]=CPOKEMON[2]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 10:
			if(CPOKEMON[3]>49){
				printf("¡Felicidades! Tu Caterpie ha evolucionado en un Metapod.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[3]=CPOKEMON[3]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 11 :
			if(CPOKEMON[3]>49){
				printf("¡Felicidades! Tu Metapod ha evolucionado en un Butterfree.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[3]=CPOKEMON[3]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 13:
			if(CPOKEMON[4]>49){
				printf("¡Felicidades! Tu Weedle ha evolucionado en un Kakuna.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[4]=CPOKEMON[4]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 14:
			if(CPOKEMON[4]>49){
				printf("¡Felicidades! Tu Kakuna ha evolucionado en un Beedill.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[4]=CPOKEMON[4]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 16:
			if(CPOKEMON[5]>49){
				printf("¡Felicidades! Tu Pidgey ha evolucionado en un Pidgeotto.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[5]=CPOKEMON[5]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 17:
			if(CPOKEMON[5]>49){
				printf("¡Felicidades! Tu Pidgeotto ha evolucionado en un Pidgeot.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[5]=CPOKEMON[5]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 19:
			if(CPOKEMON[6]>49){
				printf("¡Felicidades! Tu Rattata ha evolucionado en un Raticate.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[6]=CPOKEMON[6]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 21:
			if(CPOKEMON[7]>49){
				printf("¡Felicidades! Tu Spearow ha evolucionado en un Fearow.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[7]=CPOKEMON[7]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 23:
			if(CPOKEMON[8]>49){
				printf("¡Felicidades! Tu Ekans ha evolucionado en un Arbok.\n");
				NPOKEMON[8]=NPOKEMON[8]+1;
				CPOKEMON[1]=CPOKEMON[1]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 25:
			if(CPOKEMON[9]>49){
				printf("¡Felicidades! Tu Pikachu ha evolucionado en un Raichu.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[9]=CPOKEMON[9]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 27:
			if(CPOKEMON[10]>49){
				printf("¡Felicidades! Tu Sandshrew ha evolucionado en un Sandslash.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[10]=CPOKEMON[10]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 29:
			if(CPOKEMON[11]>49){
				printf("¡Felicidades! Tu Nidoran Hembra ha evolucionado en una Nidorina.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[11]=CPOKEMON[11]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
	    case 30:
			if(CPOKEMON[11]>49){
				printf("¡Felicidades! Tu Nidorina ha evolucionado en una Nidoqueen.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[11]=CPOKEMON[11]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 32:
			if(CPOKEMON[12]>49){
				printf("¡Felicidades! Tu Nidoran Macho ha evolucionado en un Nidorino.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[12]=CPOKEMON[12]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 33:
			if(CPOKEMON[12]>49){
				printf("¡Felicidades! Tu Nidorino ha evolucionado en un Nidoking.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[12]=CPOKEMON[12]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 35:
			if(CPOKEMON[13]>49){
				printf("¡Felicidades! Tu Clefairy ha evolucionado en un Clefable.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[13]=CPOKEMON[13]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 37:
			if(CPOKEMON[14]>49){
				printf("¡Felicidades! Tu Vulpix ha evolucionado en un Ninetales.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[14]=CPOKEMON[14]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 39:
			if(CPOKEMON[5]>49){
				printf("¡Felicidades! Tu Jigglypuff ha evolucionado en un Wigglytuff.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[15]=CPOKEMON[15]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 41:
			if(CPOKEMON[16]>49){
				printf("¡Felicidades! Tu Zubat ha evolucionado en un Golbat.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[16]=CPOKEMON[6]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 43:
			if(CPOKEMON[17]>49){
				printf("¡Felicidades! Tu Oddish ha evolucionado en un Gloom.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[17]=CPOKEMON[17]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 44:
			if(CPOKEMON[17]>49){
				printf("¡Felicidades! Tu Gloom ha evolucionado en un Vileplume.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[17]=CPOKEMON[17]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 46:
			if(CPOKEMON[18]>49){
				printf("¡Felicidades! Tu Paras ha evolucionado en un Parasect.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[18]=CPOKEMON[18]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 48:
			if(CPOKEMON[19]>49){
				printf("¡Felicidades! Tu Venonat ha evolucionado en un Venomoth.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[19]=CPOKEMON[19]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 50:
			if(CPOKEMON[20]>49){
				printf("¡Felicidades! Tu Diglett ha evolucionado en un Dugtrio.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[20]=CPOKEMON[20]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 52:
			if(CPOKEMON[21]>49){
				printf("¡Felicidades! Tu Meowth ha evolucionado en un Persian.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[21]=CPOKEMON[21]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 54:
			if(CPOKEMON[22]>49){
				printf("¡Felicidades! Tu Psyduck ha evolucionado en un Golduck.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[22]=CPOKEMON[22]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 56:
			if(CPOKEMON[23]>49){
				printf("¡Felicidades! Tu Mankey ha evolucionado en un Primeape.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[23]=CPOKEMON[23]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 58:
			if(CPOKEMON[24]>49){
				printf("¡Felicidades! Tu Growlithe ha evolucionado en un Arcanine.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[24]=CPOKEMON[24]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 60:
			if(CPOKEMON[25]>49){
				printf("¡Felicidades! Tu Poliwag ha evolucionado en un Poliwhirl.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[25]=CPOKEMON[25]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 61:
			if(CPOKEMON[25]>49){
				printf("¡Felicidades! Tu Poliwhirl ha evolucionado en un Poliwrath.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[25]=CPOKEMON[25]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 63:
			if(CPOKEMON[26]>49){
				printf("¡Felicidades! Tu Abra ha evolucionado en un Kadabra.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[26]=CPOKEMON[26]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 64:
			if(CPOKEMON[26]>49){
				printf("¡Felicidades! Tu Kadabra ha evolucionado en un Alakazam.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[26]=CPOKEMON[26]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 66:
			if(CPOKEMON[27]>49){
				printf("¡Felicidades! Tu Machop ha evolucionado en un Machoke.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[27]=CPOKEMON[27]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 67:
			if(CPOKEMON[27]>49){
				printf("¡Felicidades! Tu Machoke ha evolucionado en un Machamp.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[27]=CPOKEMON[27]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 69:
			if(CPOKEMON[28]>49){
				printf("¡Felicidades! Tu Bellsprout ha evolucionado en un Weepinbell.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[28]=CPOKEMON[28]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 70:
			if(CPOKEMON[28]>49){
				printf("¡Felicidades! Tu Weepinbell ha evolucionado en un Victreebel.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[28]=CPOKEMON[28]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 72:
			if(CPOKEMON[29]>49){
				printf("¡Felicidades! Tu Tentacool ha evolucionado en un Tentacruel.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[29]=CPOKEMON[29]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 74:
			if(CPOKEMON[30]>49){
				printf("¡Felicidades! Tu Geodude ha evolucionado en un Graveler.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[30]=CPOKEMON[30]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 75:
			if(CPOKEMON[30]>49){
				printf("¡Felicidades! Tu Graveler ha evolucionado en un Golem.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[30]=CPOKEMON[30]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 77:
			if(CPOKEMON[31]>49){
				printf("¡Felicidades! Tu Ponyta ha evolucionado en un Rapidash.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[31]=CPOKEMON[31]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 79:
			if(CPOKEMON[32]>49){
				printf("¡Felicidades! Tu Slowpoke ha evolucionado en un Slowbro.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[32]=CPOKEMON[32]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 81:
			if(CPOKEMON[33]>49){
				printf("¡Felicidades! Tu Magnemite ha evolucionado en un Magneton.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[33]=CPOKEMON[33]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 84:
			if(CPOKEMON[35]>49){
				printf("¡Felicidades! Tu Doduo ha evolucionado en un Dodrio.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[35]=CPOKEMON[35]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 86:
			if(CPOKEMON[36]>49){
				printf("¡Felicidades! Tu Seel ha evolucionado en un Degwong.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[36]=CPOKEMON[36]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 88:
			if(CPOKEMON[37]>49){
				printf("¡Felicidades! Tu Grimer ha evolucionado en un Muk.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[37]=CPOKEMON[37]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 90:
			if(CPOKEMON[38]>49){
				printf("¡Felicidades! Tu Shellder ha evolucionado en un Cloyster.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[38]=CPOKEMON[38]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 92:
			if(CPOKEMON[39]>49){
				printf("¡Felicidades! Tu Gastly ha evolucionado en un Haunter.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[39]=CPOKEMON[39]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 93:
			if(CPOKEMON[39]>49){
				printf("¡Felicidades! Tu Haunter ha evolucionado en un Gengar.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[39]=CPOKEMON[39]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 96:
			if(CPOKEMON[41]>49){
				printf("¡Felicidades! Tu Drowzee ha evolucionado en un Hypno.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[41]=CPOKEMON[41]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 98:
			if(CPOKEMON[42]>49){
				printf("¡Felicidades! Tu Krabby ha evolucionado en un Kingler.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[42]=CPOKEMON[42]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 100:
			if(CPOKEMON[43]>49){
				printf("¡Felicidades! Tu Voltorb ha evolucionado en un Electrode.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[43]=CPOKEMON[43]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 102:
			if(CPOKEMON[44]>49){
				printf("¡Felicidades! Tu Exeggcutte ha evolucionado en un Exeggutor.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[44]=CPOKEMON[44]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 104:
			if(CPOKEMON[45]>49){
				printf("¡Felicidades! Tu Cubone ha evolucionado en un Marowak.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[45]=CPOKEMON[45]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 109:
			if(CPOKEMON[49]>49){
				printf("¡Felicidades! Tu Koffing ha evolucionado en un Weezing.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[49]=CPOKEMON[49]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 111:
			if(CPOKEMON[50]>49){
				printf("¡Felicidades! Tu Rhyhorn ha evolucionado en un Rhydon.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[50]=CPOKEMON[50]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 116:
			if(CPOKEMON[54]>49){
				printf("¡Felicidades! Tu Horsea ha evolucionado en un Seadra.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[54]=CPOKEMON[54]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 118:
			if(CPOKEMON[55]>49){
				printf("¡Felicidades! Tu Goldeen ha evolucionado en un Seaking.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[55]=CPOKEMON[55]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 120:
			if(CPOKEMON[56]>49){
				printf("¡Felicidades! Tu Staryu ha evolucionado en un Starmie.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[56]=CPOKEMON[56]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 129:
			if(CPOKEMON[64]>49){
				printf("¡Felicidades! Tu Magikarp ha evolucionado en un Gyarados.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[64]=CPOKEMON[64]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
	break;
		case 133:
			if(CPOKEMON[67]>49){
				srand(time(NULL));
    	        dado=1+rand() %3;
    	        if(dado==1){
    	        	printf("¡Felicidades! Tu Eevee ha evolucionado en un Vaporeon.\n");
				    NPOKEMON[num]=NPOKEMON[num]+1;
				    CPOKEMON[67]=CPOKEMON[67]-50;
				    PCPOKEMON[num]=2*PCPOKEMON[num];
				    FPOKEMON[num]=FPOKEMON[num]+1;
				}
				if(dado==2){
    	        	printf("¡Felicidades! Tu Eevee ha evolucionado en un Jolteon.\n");
				    NPOKEMON[num]=NPOKEMON[num]+2;
				    CPOKEMON[67]=CPOKEMON[67]-50;
				    PCPOKEMON[num]=2*PCPOKEMON[num];
				    FPOKEMON[num]=FPOKEMON[num]+2;
				}
				if(dado==3){
    	        	printf("¡Felicidades! Tu Eevee ha evolucionado en un Flareon.\n");
				    NPOKEMON[num]=NPOKEMON[num]+3;
				    CPOKEMON[67]=CPOKEMON[67]-50;
				    PCPOKEMON[num]=2*PCPOKEMON[num];
				    FPOKEMON[num]=FPOKEMON[num]+3;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 138:
			if(CPOKEMON[69]>49){
				printf("¡Felicidades! Tu Omanyte ha evolucionado en un Omastar.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[69]=CPOKEMON[69]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 140:
			if(CPOKEMON[70]>49){
				printf("¡Felicidades! Tu Kabuto ha evolucionado en un Kabutops.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[70]=CPOKEMON[70]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 147:
			if(CPOKEMON[76]>49){
				printf("¡Felicidades! Tu Dratini ha evolucionado en un Dragonair.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[76]=CPOKEMON[76]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
		case 148:
			if(CPOKEMON[76]>49){
				printf("¡Felicidades! Tu Dragonair ha evolucionado en un Dragonite.\n");
				NPOKEMON[num]=NPOKEMON[num]+1;
				CPOKEMON[76]=CPOKEMON[76]-50;
				PCPOKEMON[num]=2*PCPOKEMON[num];
				if(FPOKEMON[num]==NPOKEMON[num]){
					FPOKEMON[num]=FPOKEMON[num]+1;
				}
			}else{
				printf("No tienes caramelos suficientes.\n");
			}
		break;
	}
	    printf("\n¿Desea volver al menu?\n1.-Si.\n2.-No.\n");
	    scanf("%d",&ret);
	    while(ret<1||ret>2){
	    	system("cls");
	    	printf("Error 404: Opcion not found. Inserte 1 o 2.\n¿Desea volver al menu?\n1.-Si.\n2.-No.\n");
	    	scanf("%d",&ret);
		}
		}while(ret==2);
}
void transferir(int NPOKEMON[150], int PCPOKEMON[150], int FPOKEMON[150],int CPOKEMON[150]){
	system("cls");
	int i,h,ret;
	do{
		system("cls");
			printf("¿Que Pokemon desea transferir?\nSus pokemon son los siguientes:(Inserte el indice del pokemon, el numero de mas a la izquierda).\n");
	        for(i=0;i<150;i++){
	    	if(NPOKEMON[i]>0){
	    		printf("%d.-NUMERO DEL POKEMON: %d. PC: %d.\n",i+1,NPOKEMON[i],PCPOKEMON[i]);
			}
		    }
			scanf("%d",&h);
			h=h-1;
			if(NPOKEMON[0]==0){
				printf("Error 404: Pokemon not found. No tienes registrado a este pokemon.\n");
			}
			if(NPOKEMON[h]==1||NPOKEMON[h]==2||NPOKEMON[h]==3){
				CPOKEMON[0]=CPOKEMON[0]+1;
	
			}
			if(NPOKEMON[h]==4||NPOKEMON[h]==5||NPOKEMON[h]==6){
				CPOKEMON[1]=CPOKEMON[1]+1;
			}
			if(NPOKEMON[h]==7||NPOKEMON[h]==8||NPOKEMON[h]==9){
			    CPOKEMON[2]=CPOKEMON[2]+1;
				
			}
			if(NPOKEMON[h]==10||NPOKEMON[h]==11||NPOKEMON[h]==12){
			
					CPOKEMON[3]=CPOKEMON[3]+1;
			
			}
			if(NPOKEMON[h]==13||NPOKEMON[h]==14||NPOKEMON[h]==15){
			
					CPOKEMON[4]=CPOKEMON[4]+1;
			
			}
			if(NPOKEMON[h]==16||NPOKEMON[h]==17||NPOKEMON[h]==18){
			
					CPOKEMON[5]=CPOKEMON[5]+1;
				
			}
			if(NPOKEMON[h]==19||NPOKEMON[h]==20){
			
					CPOKEMON[6]=CPOKEMON[6]+1;
			}
			if(NPOKEMON[h]==21||NPOKEMON[h]==22){
			
					CPOKEMON[7]=CPOKEMON[7]+1;
			}
			if(NPOKEMON[h]==23||NPOKEMON[h]==24){

					CPOKEMON[8]=CPOKEMON[8]+1;

			}
			if(NPOKEMON[h]==25||NPOKEMON[h]==26){

					CPOKEMON[9]=CPOKEMON[9]+1;

			}
			if(NPOKEMON[h]==27||NPOKEMON[h]==28){

					CPOKEMON[10]=CPOKEMON[10]+1;
	
			}
			if(NPOKEMON[h]==29||NPOKEMON[h]==30||NPOKEMON[h]==31){
	
					CPOKEMON[11]=CPOKEMON[11]+1;;

			}
			if(NPOKEMON[h]==32||NPOKEMON[h]==33||NPOKEMON[h]==34){
	
					CPOKEMON[12]=CPOKEMON[12]+1;

			}
			if(NPOKEMON[h]==35||NPOKEMON[h]==36){

					CPOKEMON[13]=CPOKEMON[13]+1;

			}
			if(NPOKEMON[h]==37||NPOKEMON[h]==38){

					CPOKEMON[14]=CPOKEMON[14]+1;

			}
			if(NPOKEMON[h]==39||NPOKEMON[h]==40){

					CPOKEMON[15]=CPOKEMON[15]+1;
					
			}
			if(NPOKEMON[h]==41||NPOKEMON[h]==42){

					CPOKEMON[16]=CPOKEMON[16]+1;

			}
			if(NPOKEMON[h]==43||NPOKEMON[h]==44||NPOKEMON[h]==45){
				
					CPOKEMON[17]=CPOKEMON[17]+1;

			}
			if(NPOKEMON[h]==46||NPOKEMON[h]==47){

					CPOKEMON[18]=CPOKEMON[18]+1;

			}
			if(NPOKEMON[h]==48||NPOKEMON[h]==49){

					CPOKEMON[19]=CPOKEMON[19]+1;

			}
			if(NPOKEMON[h]==50||NPOKEMON[h]==51){

					CPOKEMON[20]=CPOKEMON[20]+1;

			}
			if(NPOKEMON[h]==52||NPOKEMON[h]==53){

					CPOKEMON[21]=CPOKEMON[21]+1;

			}
			if(NPOKEMON[h]==54||NPOKEMON[h]==55){

					CPOKEMON[22]=CPOKEMON[22]+1;

			}
			if(NPOKEMON[h]==56||NPOKEMON[h]==57){

					CPOKEMON[23]=CPOKEMON[23]+1;

			}
			if(NPOKEMON[h]==58||NPOKEMON[h]==59){

					CPOKEMON[24]=CPOKEMON[24]+1;

			}
			if(NPOKEMON[h]==60||NPOKEMON[h]==61||NPOKEMON[h]==62){

					CPOKEMON[25]=CPOKEMON[25]+1;
	
			}
			if(NPOKEMON[h]==63||NPOKEMON[h]==64||NPOKEMON[h]==65){

					CPOKEMON[26]=CPOKEMON[26]+1;

			}
			if(NPOKEMON[h]==66||NPOKEMON[h]==67||NPOKEMON[h]==68){

					CPOKEMON[27]=CPOKEMON[27]+1;

			}
			if(NPOKEMON[h]==69||NPOKEMON[h]==70||NPOKEMON[h]==71){

					CPOKEMON[28]=CPOKEMON[28]+1;

			}
			if(NPOKEMON[h]==72||NPOKEMON[h]==73){

					CPOKEMON[29]=CPOKEMON[29]+1;

			}
			if(NPOKEMON[h]==74||NPOKEMON[h]==75||NPOKEMON[h]==76){

					CPOKEMON[30]=CPOKEMON[30]+1;

			}
			if(NPOKEMON[h]==77||NPOKEMON[h]==78){

					CPOKEMON[31]=CPOKEMON[31]+1;

			}
			if(NPOKEMON[h]==79||NPOKEMON[h]==80){

					CPOKEMON[32]=CPOKEMON[32]+1;

			}
			if(NPOKEMON[h]==81||NPOKEMON[h]==82){
	
					CPOKEMON[33]=CPOKEMON[33]+1;

			}
			if(NPOKEMON[h]==83){

					CPOKEMON[34]=CPOKEMON[34]+1;

			}
			if(NPOKEMON[h]==84||NPOKEMON[h]==85){

					CPOKEMON[35]=CPOKEMON[35]+1;

			}
			if(NPOKEMON[h]==86||NPOKEMON[h]==87){
				
					CPOKEMON[36]=CPOKEMON[36]+1;

			}
			if(NPOKEMON[h]==88||NPOKEMON[h]==89){

					CPOKEMON[37]=CPOKEMON[37]+1;

			}
			if(NPOKEMON[h]==90||NPOKEMON[h]==91){

					CPOKEMON[38]=CPOKEMON[38]+1;

			}
			if(NPOKEMON[h]==92||NPOKEMON[h]==93||NPOKEMON[h]==94){

					CPOKEMON[39]=CPOKEMON[39]+1;

			}
			if(NPOKEMON[h]==95){

					CPOKEMON[40]=CPOKEMON[40]+1;
	
			}
			if(NPOKEMON[h]==96||NPOKEMON[h]==97){

					CPOKEMON[41]=CPOKEMON[41]+1;

			}
			if(NPOKEMON[h]==98||NPOKEMON[h]==99){

					CPOKEMON[42]=CPOKEMON[42]+1;

			}
			if(NPOKEMON[h]==100||NPOKEMON[h]==101){

					CPOKEMON[43]=CPOKEMON[43]+1;

			}
			if(NPOKEMON[h]==102||NPOKEMON[h]==103){

					CPOKEMON[44]=CPOKEMON[44]+1;

			}
			if(NPOKEMON[h]==104||NPOKEMON[h]==105){

					CPOKEMON[45]=CPOKEMON[45]+1;

			}
			if(NPOKEMON[h]==106){

					CPOKEMON[46]=CPOKEMON[46]+1;

			}
			if(NPOKEMON[h]==107){
	
					CPOKEMON[47]=CPOKEMON[47]+1;

			}
			if(NPOKEMON[h]==108){

					CPOKEMON[48]=CPOKEMON[48]+1;

			}
			if(NPOKEMON[h]==109||NPOKEMON[h]==110){

					CPOKEMON[49]=CPOKEMON[49]+1;

			}
			if(NPOKEMON[h]==111||NPOKEMON[h]==112){

					CPOKEMON[50]=CPOKEMON[50]+1;

			}
			if(NPOKEMON[h]==113){

					CPOKEMON[51]=CPOKEMON[51]+1;

			}
			if(NPOKEMON[h]==114){

					CPOKEMON[52]=CPOKEMON[52]+1;

			}
			if(NPOKEMON[h]==115){

					CPOKEMON[53]=CPOKEMON[53]+1;

			}
			if(NPOKEMON[h]==116||NPOKEMON[h]==117){

					CPOKEMON[54]=CPOKEMON[54]+1;

			}
			if(NPOKEMON[h]==118||NPOKEMON[h]==119){

					CPOKEMON[55]=CPOKEMON[55]+1;

			}
			if(NPOKEMON[h]==120||NPOKEMON[h]==121){

					CPOKEMON[56]=CPOKEMON[56]+1;

			}
			if(NPOKEMON[h]==122){

					CPOKEMON[57]=CPOKEMON[57]+1;

			}
			if(NPOKEMON[h]==123){
	
					CPOKEMON[58]=CPOKEMON[58]+1;

			}
			if(NPOKEMON[h]==124){

					CPOKEMON[59]=CPOKEMON[59]+1;

			}
			if(NPOKEMON[h]==125){

					CPOKEMON[60]=CPOKEMON[60]+1;

			}
			if(NPOKEMON[h]==126){

					CPOKEMON[61]=CPOKEMON[61]+1;

			}
			if(NPOKEMON[h]==127){
	
					CPOKEMON[62]=CPOKEMON[62]+1;
	
			}
			if(NPOKEMON[h]==128){

					CPOKEMON[63]=CPOKEMON[63]+1;

			}
			if(NPOKEMON[h]==129||NPOKEMON[h]==130){

					CPOKEMON[64]=CPOKEMON[64]+1;

			}
			if(NPOKEMON[h]==131){

					CPOKEMON[65]=CPOKEMON[65]+1;

			}
			if(NPOKEMON[h]==132){

					CPOKEMON[66]=CPOKEMON[66]+1;

			}
			if(NPOKEMON[h]==133||NPOKEMON[h]==134||NPOKEMON[h]==135||NPOKEMON[h]==136){

					CPOKEMON[67]=CPOKEMON[67]+1;
	
			}
			if(NPOKEMON[h]==137){

					CPOKEMON[68]=CPOKEMON[68]+1;

			}
			if(NPOKEMON[h]==138||NPOKEMON[h]==139){

					CPOKEMON[69]=CPOKEMON[69]+1;
	
			}
			if(NPOKEMON[h]==140||NPOKEMON[h]==141){

					CPOKEMON[70]=CPOKEMON[70]+1;

			}
			if(NPOKEMON[h]==142){

					CPOKEMON[71]=CPOKEMON[71]+1;

			}
			if(NPOKEMON[h]==143){

					CPOKEMON[72]=CPOKEMON[72]+1;

			}
			if(NPOKEMON[h]==144){

					CPOKEMON[73]=CPOKEMON[73]+1;

			}
			if(NPOKEMON[h]==145){

					CPOKEMON[74]=CPOKEMON[74]+1;

			}
			if(NPOKEMON[h]==146){

					CPOKEMON[75]=CPOKEMON[75]+1;

			}
			if(NPOKEMON[h]==147||NPOKEMON[h]==148||NPOKEMON[h]==149){

					CPOKEMON[76]=CPOKEMON[76]+1;

			}
			if(NPOKEMON[h]==150){

					CPOKEMON[77]=CPOKEMON[77]+1;

			}
			if(NPOKEMON[h]==151){

					CPOKEMON[78]=CPOKEMON[78]+1;

			}
			printf("Tu pokemon ha sido transferido. +1 caramelo.\n");
			for(i=h;i<149;i++){
					NPOKEMON[i]=NPOKEMON[i+1];
					PCPOKEMON[i]=PCPOKEMON[i+1];
					FPOKEMON[i]=FPOKEMON[i+1];
				}
				NPOKEMON[150]=0;
				PCPOKEMON[150]=0;
				FPOKEMON[150]=0;
			printf("¿Desea volver al menu?\n1.-Si.\n2.-No.\n");
			scanf("%d",&ret);
			while(ret<1||ret>2){
				system("cls");
				printf("Error 404: Opcion not found. Inserte 1 o 2.\n¿Desea volver al menu?\n1.-Si.\n2.-No.\n");
				scanf("%d",&ret);
			}
		}while(ret==2);
}
void listar(int NPOKEMON[150],int PCPOKEMON[150],int FPOKEMON[150],int CPOKEMON[150], int NPOKEMON2[150],int PCPOKEMON2[150]){
	int i,j,aux,orden,ret,k,h,l;
	char letra;
	do{
		j=1;
		h=1;
		l=1;
    		system("cls");
    		printf("En que orden?\n1.-Pokedex.\n2.-Ingresar letra\n3.-Favoritos\n4.-PC\n");
    		scanf("%d",&k);
    		printf("Tus pokemon capturados son los siguientes:\n");
    		if(k==1){
    			for(i=1;i<151;i++){
    				for(j=1;j<151;j++){
    					if(i==NPOKEMON[j]){
    						printf("%d.-NUMERO SEGUN POKEDEX: %d.\n",l,NPOKEMON[j]);
    						l++;
						}
					}
				}
			}
			if(k==2){
				printf("Inserte una letra\n");
				scanf("%s",&letra);
				if(letra=='a'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==24||NPOKEMON[i]==59||NPOKEMON[i]==63||NPOKEMON[i]==65||NPOKEMON[i]==142||NPOKEMON[i]==144){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='b'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==1||NPOKEMON[i]==9||NPOKEMON[i]==12||NPOKEMON[i]==15||NPOKEMON[i]==69){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='c'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==4||NPOKEMON[i]==5||NPOKEMON[i]==6||NPOKEMON[i]==10||NPOKEMON[i]==35||NPOKEMON[i]==36||NPOKEMON[i]==91||NPOKEMON[i]==104||NPOKEMON[i]==113){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='d'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==50||NPOKEMON[i]==51||NPOKEMON[i]==84||NPOKEMON[i]==85||NPOKEMON[i]==87||NPOKEMON[i]==96||NPOKEMON[i]==132||NPOKEMON[i]==147||NPOKEMON[i]==148||NPOKEMON[i]==149){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='e'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==23||NPOKEMON[i]==101||NPOKEMON[i]==102||NPOKEMON[i]==103||NPOKEMON[i]==125||NPOKEMON[i]==133){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='f'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==22||NPOKEMON[i]==83||NPOKEMON[i]==136){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='g'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==42||NPOKEMON[i]==44||NPOKEMON[i]==55||NPOKEMON[i]==58||NPOKEMON[i]==74||NPOKEMON[i]==75||NPOKEMON[i]==76||NPOKEMON[i]==88||NPOKEMON[i]==92||NPOKEMON[i]==94||NPOKEMON[i]==118||NPOKEMON[i]==130){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='h'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==93||NPOKEMON[i]==97||NPOKEMON[i]==106||NPOKEMON[i]==107||NPOKEMON[i]==116){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='i'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==2){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='j'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==39||NPOKEMON[i]==124||NPOKEMON[i]==135){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='k'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==14||NPOKEMON[i]==64||NPOKEMON[i]==98||NPOKEMON[i]==99||NPOKEMON[i]==109||NPOKEMON[i]==115||NPOKEMON[i]==140||NPOKEMON[i]==141){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='l'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==108||NPOKEMON[i]==131){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='m'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==11||NPOKEMON[i]==52||NPOKEMON[i]==56||NPOKEMON[i]==66||NPOKEMON[i]==67||NPOKEMON[i]==68||NPOKEMON[i]==81||NPOKEMON[i]==82||NPOKEMON[i]==89||NPOKEMON[i]==105||NPOKEMON[i]==122||NPOKEMON[i]==126||NPOKEMON[i]==129||NPOKEMON[i]==146||NPOKEMON[i]==150||NPOKEMON[i]==151){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='n'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==29||NPOKEMON[i]==30||NPOKEMON[i]==31||NPOKEMON[i]==32||NPOKEMON[i]==33||NPOKEMON[i]==34||NPOKEMON[i]==38){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='o'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==43||NPOKEMON[i]==95||NPOKEMON[i]==138||NPOKEMON[i]==139){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='p'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==16||NPOKEMON[i]==17||NPOKEMON[i]==18||NPOKEMON[i]==25||NPOKEMON[i]==46||NPOKEMON[i]==47||NPOKEMON[i]==53||NPOKEMON[i]==54||NPOKEMON[i]==57||NPOKEMON[i]==60||NPOKEMON[i]==61||NPOKEMON[i]==62||NPOKEMON[i]==77||NPOKEMON[i]==127||NPOKEMON[i]==137){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='q'){
					printf("No hay pokemon con esa letra\n");
				}
				if(letra=='r'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==19||NPOKEMON[i]==20||NPOKEMON[i]==26||NPOKEMON[i]==78||NPOKEMON[i]==111||NPOKEMON[i]==112){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='s'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==7||NPOKEMON[i]==21||NPOKEMON[i]==27||NPOKEMON[i]==28||NPOKEMON[i]==79||NPOKEMON[i]==80||NPOKEMON[i]==86||NPOKEMON[i]==90||NPOKEMON[i]==117||NPOKEMON[i]==119||NPOKEMON[i]==120||NPOKEMON[i]==121||NPOKEMON[i]==123||NPOKEMON[i]==143){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='t'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==72||NPOKEMON[i]==73||NPOKEMON[i]==114||NPOKEMON[i]==128){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				if(letra=='u'){
					printf("No hay pokemon con esa letra\n");					
				}
				
				if(letra=='v'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==3||NPOKEMON[i]==37||NPOKEMON[i]==45||NPOKEMON[i]==48||NPOKEMON[i]==49||NPOKEMON[i]==71||NPOKEMON[i]==100||NPOKEMON[i]==134){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
				
				if(letra=='w'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==8||NPOKEMON[i]==13||NPOKEMON[i]==40||NPOKEMON[i]==70||NPOKEMON[i]==110){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
				}
								if(letra=='x'||letra=='y'){
									printf("No existe pokemon con esa letra\n");

									
				}	
				if(letra=='z'){
					for(i=0;NPOKEMON[i]!=0;i++){
						if(NPOKEMON[i]==41||NPOKEMON[i]==145){
							printf("%d.- NUMERO DEL POKEMON QUE EMPIEZA POR %c: %d\n",l,letra,NPOKEMON[i]);
							l++;
						}
					}
														
			}
			}
			if(k==3){
				for(i=0;NPOKEMON[i]!=0;i++){
					if(FPOKEMON[i]!=0){
						printf("%d.-NUMERO SEGUN POKEDEX: %d. POKEMON FAVORITO\n",j,FPOKEMON[i]);
						j++;
					}
				}
				for(i=0;NPOKEMON[i]!=0;i++){
					if(FPOKEMON[i]==0){
						printf("%d.- NUMERO SEGUN POKEDEX: %d. POKEMON NO FAVORITO\n",j,NPOKEMON[i]);
						j++;
					}
				}
			}
			if(k==4){
				for(i=0;NPOKEMON[i]!=0;i++){
					for(j=0;NPOKEMON[j]!=0;j++){
						if(PCPOKEMON[j]>NPOKEMON[i]){
							printf("%d.- NUMERO SEGUN POKEDEX: %d. PC: %d.\n",h,NPOKEMON[j],PCPOKEMON[j]);
							h++;
						}
					}
				}
			}
			printf("¿Desea volver al menu?\n1.-Si.\n2.-No.\n");
    		scanf("%d",&ret);
   			while(ret<1||ret>2){
   				system("cls");
   				printf("Error 404: Opcion not found. Inserte 1 o 2.\n¿Desea volver al menu?\n1.-Si.\n2.-No.\n");
   				scanf("%d",&ret);
				}
			
		}while(ret==2);
}
int main(){
    int menu,NPOKEMON[150],PCPOKEMON[150],FPOKEMON[150],CPOKEMON[150],NPOKEMON2[150],PCPOKEMON2[150],i,d=-1;
    for(i=0;i<150;i++){
        NPOKEMON[i]=0;
        PCPOKEMON[i]=0;
        FPOKEMON[i]=0;
        CPOKEMON[i]=0;
        NPOKEMON2[i]=0;
        PCPOKEMON2[i]=0;
    }
    do{
    system("cls");
    printf("BIENVENIDO A POKEMON GO 2\n\tMENU\n¿Que desea hacer hoy?\n1.-Capturar.\n2.-Aumentar PC.\n3.-Evolucionar.\n4.-Transferir.\n5.-Listar\n6.-Salir\n");
    scanf("%d",&menu);
    if(menu==1){
    	d+=1;
        capturar(NPOKEMON,FPOKEMON,CPOKEMON,PCPOKEMON,d);
    }
    if(menu==2){
        aumentar_pc(PCPOKEMON,CPOKEMON,NPOKEMON);
    }
	if(menu==3){
		evolucionar(PCPOKEMON,CPOKEMON,NPOKEMON,FPOKEMON);
	}
	if(menu==4){
		transferir(NPOKEMON,PCPOKEMON,FPOKEMON,CPOKEMON);
	}
	if(menu==5){
		listar(NPOKEMON,PCPOKEMON,FPOKEMON,CPOKEMON,NPOKEMON2,PCPOKEMON2);
	}
    }while(menu!=6);
    printf("Codigo creado por Jigglypuff, Manu y un weon fome\nDESEAMOS VOLVER A VERTE\n");
    system("pause");
}

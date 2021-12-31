#include <stdio.h>
#include <string.h>


struct date{
	int month;
	int day;
	int year;
};
struct person{
	char name[32];
	struct date tookoffice;
};
void showpresi (struct person *p){

	printf("Presidents are about to go down\n");
	for(int i=0;i<4;i++){	
		printf("My name is %s and I took over the %d, of %d, of %d\n", p[i].name, p[i].tookoffice.month, p[i].tookoffice.day, p[i].tookoffice.year);
	}

}
 
int main(){
	
 struct person president[4] = {
	{"George Washington",{4,30,1789}},
	{"Thomas Jefferson",{3,4,1801}},
	{"Abraham Lincoln",{3,4,1861}},
	{"Theodore Roosevelt",{9,14,1901}}
 };
	showpresi(president);
		
		printf("Swaaaapping...\n\n\n");
		
		char temp[32];
		strcpy(temp,president[0].name);
		strcpy(president[0].name,president[1].name);
		strcpy(president[1].name,temp);
	
		struct date temp2=president[0].tookoffice;
		president[0].tookoffice=president[1].tookoffice;
		president[1].tookoffice=temp2;
	
	showpresi(president);
}

#include <stdio.h>
#include <string.h>

int main(){
int teArdhuraMaksimale(int a[],int m);
int teArdhuraMaksimalePerseriten(int a[],int m,int max);
int NjeProfesionNjePage(char a[][100],int b[]);
int pagaminimale(int p[], int n);
int midisAdheB(int A[],int a, int b,int m);
	int m,i;

	printf("Sa punetor ka kompania");
	scanf("%d",&m);
	char E[m][100];
	char P[m][100];
	int A[m];
	for(i=0;i<m;i++){
		printf("Fut vleren emrin e punonjesit nr %d: ",i+1);
		scanf("%s",&E[i]);
	}
for(i=0;i<m;i++){
		printf("Fut profesionin e punonjesit me ermin %s: ",E[i]);
		scanf("%s",&P[i]);
	}

	for(i=0;i<m;i++){
		printf("Fut te ardhurat e punonjesit me ermin %s: ",E[i]);
		scanf("%d",&A[i]);
	}

	int max=teArdhuraMaksimale(A,m);
	int perseriten=teArdhuraMaksimalePerseriten(A,m,max);
	int npnp=NjeProfesionNjePage(P,A);
	int pagaMin=pagaminimale(A,m);

	int a,b;
	printf("JEP VLERAT E a dhe b");
	scanf("%d%d",&a,&b);
	int midis_a_dhe_b=midisAdheB(A,a,b,m);
	printf("Midis %d dhe %d jane %d persona",a,b,midis_a_dhe_b);



    int freq[m];
    int  count,j;

    for(i=0; i<m; i++)
    {
        count = 1;
        for(j=i+1; j<m; j++)
        {
            if(P[i] == P[j])
            {
                count++;
               freq[j] =0 ;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
     printf("Profesionet unike :\n");


  printf("\nUnique elements in the array are: ");
    for(i=0; i<m; i++)
    {
        if(freq[i] == 1)
        {
            printf("%s ", P[i]);
        }
    }




for(i=0;i<m;i++){
	if(A[i]==pagaMin){
		printf("\nPunonjesi %s ne profesionin %s merr pagen minimale",E[i],P[i]);
	}
}

	return 0;


}
	int teArdhuraMaksimale(int a[],int m){
		int tmp=a[0];
		int i=1;
		for(;i<m;i++){
			if(a[i]>tmp){
				tmp=a[i];
			}
		}
		return tmp;
	}
	int teArdhuraMaksimalePerseriten(int a[],int m,int max){
		int tmp=0;
		int i=0;
		for(;i<m;i++){
			if(a[i]==max){
				tmp++;
			}
		}
		return tmp;
	}
int NjeProfesionNjePage(char a[][100],int b[]){
		if((strcmp(a[0],a[1])==0) && (b[0]==b[1])){
			return 1;
		}
		return 0;
	}



int pagaminimale(int p[], int n){
		int i,temp=p[0];
		for(i=0;i<n;i++){
			if(p[i]<temp){
				temp=p[i];
			}
		}
		return temp;
	}
int midisAdheB(int A[],int a, int b,int m){
	int i=0,cnt=0;
	for(i=0;i<m;i++){
		if(A[i]>a && A[i]<b){
			cnt++;
		}
		if(A[i]<a && A[i]>b){
			cnt++;
		}
	}
	return cnt;
}


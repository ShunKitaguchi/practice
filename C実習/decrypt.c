#include <stdio.h>
int main(void){
	char name[10], new_name[10];
	int i,no,key;
	printf("暗号文：");
	scanf("%s",name);
	printf("鍵：");
	scanf("%d",&key);
	i=0;
	while(name[i]){
		no = name[i]-'a';
		no=(no-key+26)%26;
		new_name[i] = 'a' + no;
		i++;
	}
	new_name[i] = 0;
	printf("%s\n",new_name);
}

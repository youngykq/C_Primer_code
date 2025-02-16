char * s_gets(char *str,int len){
	int i = 0;
	char * ret_val;
	ret_val = fgets(str,len,stdin);
	if(ret_val){//ret_val != NULL
		while(str[i] != '\n' && str[i] != '\0'){
			i++;
		}
		if(str[i] == '\n')
			str[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}

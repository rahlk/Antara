int main()
{
	char message[100], ch;
	int i, key,a;
	gets(textcases);
	for(a=0;a<textcases;++a)
    {
	//printf("Enter a message to decrypt: ");
	gets(message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'A' && ch <= 'Z'){
			ch = ch / key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message);
	
	return 0;
}
}
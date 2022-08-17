void removeConsecutiveDuplicates(char *input) {
    string temp="";
	int i=1;
    while(input[i]!='\0')
    {
		if(input[i]!=input[i-1])
        {
            temp+=input[i];
        }
        i++;
    }
    i=0;
    while(temp[i]!='\0')
    {

        input[i]=temp[i];
        i++;
    }
    input[i]='\0';
}

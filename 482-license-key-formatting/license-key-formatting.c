char* licenseKeyFormatting(char* s, int k) {
    int n=strlen(s);
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]!='-'){
            count++;
        }
    }
    char* result=(char*)malloc(count+count/k+2);
    int first=count%k;
    if(first==0)
    first=k;
    int j=0;
    int group=0;int processed=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-')
        continue;
        result[j++]=toupper(s[i]);
        group++;processed++;
        if(group==first&&processed<count){
            result[j++]='-';
            group=0;
            first=k;
        }
    }
    result[j]='\0';
    return result;
}